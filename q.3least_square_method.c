//y=a*b^x
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,i;
	float x[50], y[50], sumx=0,sumx2=0,sumy,sumxy,a,b;
	printf("enter the number: ");
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		printf("Enter the two corresponding numbers xi and yi:\n ");
		scanf("%f %f", &x[i],&y[i]);
	}
	for(i=1; i<=n; i++){
		sumx=sumx+x[i];
		sumx2=sumx2+x[i]*x[i];
		sumy=sumy+log(y[i]);
		sumxy=sumxy+x[i]*log(y[i]);
	}
	b=(n*sumxy-sumx*sumy)/(n*sumx2-sumx*sumx);
	a=(sumy-b*sumx)/n;
	a=exp(a);
	printf("The value of best fit in curve are %f\t and %f", a, b);
}
