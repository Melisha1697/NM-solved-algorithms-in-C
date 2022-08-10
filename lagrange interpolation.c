//implementation of lagrange interpolation
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
	int n, i, j;
	float xp, p, yp=0;
	float x[50];
	float y[50];
	printf("Enter the number:\t");
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		printf("Enter the two value:\n");
		scanf("%f %f", &x[i],&y[i]);
	}
	printf("Enter interpolating point:\t");
	scanf("%f", &xp);
	for(i=1;i<=n;i++){
		p=1;
		for(j=1;j<=n;j++){
			if(i!=j){
				p=p*(xp-x[j])/(x[i]-x[j]);
			}
		}
		yp=yp+p*y[i];
	}
	printf("The resulting values are %f\t", yp);
	exit(0);
	return 0;
}
