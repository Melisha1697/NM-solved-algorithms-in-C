//implementaion of least Square Method
//y=a+b*x
#include<stdio.h>
#include<conio.h>
int main(){
	int n,i;
	float x[50],y[50],sumx=0,sumx2=0,sumxy=0,sumy=0,a,b;
	printf("enter the number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printf("Enter two corresponding numbers xi and yi:\n ");
		scanf("%f\t %f", &x[i], &y[i]);
	}
	for(i=1; i<=n; i++){
		sumx=sumx+x[i];
		sumx2=sumx2+x[i]*x[i];
		sumy=sumy+y[i];
		sumxy=sumxy+x[i]*y[i];
	}
	b=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
	a=(sumy-b*sumx)/n;
	printf("The value of %f\t and %f", a, b);
}
