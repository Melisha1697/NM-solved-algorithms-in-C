//Implementation Power method to find dominent Eigen value and Eigen vector
#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
int main(){
	//1.Input
	float a[10][10],e,x[20],lambda_old=1.0,temp,x_new[10],lambda_new;
	int n,i,j,count=1;
	//2. a.Order of matrix(n)
	printf("Enter the order of matrix:\n");
	scanf("%d", &n);
	//b.Tolerable error(e)
	printf("Enter the tolerable error:\n");
	scanf("%f", &e);
	//3. Read matrix(a)
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			printf("Enter the matrix a[%d][%d]:\t",i,j);
			scanf("%f", &a[i][j]);
		}
	}
	//4. Read initial guess vector(x)
	for(i=1;i<=n;i++){
		printf("The initial guess vector is: ");
		scanf("%f", &x[i]);
	}
	//5. Initialize lambda_old=1,count=1
	//6. Multiplication(x_new=a*x)
	up: for(i=1;i<=n;i++){
		temp=0.0;
		for(j=1;j<=n;j++){
			temp=temp+a[i][j]*x[j];
		}
		x_new[i]=temp;
	}
	//7. Replace x by x_new
	for(i=1;i<=n;i++){
		x[i]=x_new[i];
	}
	//8. Finding Largest
	lambda_new=fabs(x[1]);
	for(i=2;i<=n;i++){
		if(fabs(x[i])>lambda_new){
			lambda_new=fabs(x[i]);
		}
	}
	//9. Normalization:
	for(i=1;i<=n;i++){
		x[i]=x[i]/lambda_new;
	}
	//10. Displaying
	printf("The iteration number is:%d\n", count);
	printf("The lambda_new:%f\n", lambda_new);
	for(i=1;i<=n;i++){
		printf("The result is:%f\n", x[i]);
	}
	//11. Checking accuracy
	if(fabs(lambda_new-lambda_old)>e){
		lambda_old=lambda_new;
		count++;
		goto up;
	}
	//12. stop
	exit (0);
}
