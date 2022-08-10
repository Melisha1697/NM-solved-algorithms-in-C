//ROOT FINDING USING
//2. FIXED POINT ITERATION METHOD
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define f(x) cos(x)-3*x+1//function defination
#define g(x) (cos(x)+1)/3//derivative function 
int main(){
float x0, x1, e,root;//variable defination 
	int N,step=1;
	printf("Enter the initial guess:\t");
	scanf("%f",&x0);
	printf("\nEnter the maximun iteration:\t");
	scanf("%d",&N);
	printf("\nEnter the tolarable error:\t");
	scanf("%f",&e);
	do{
		x1=g(x0);
		step++;
		if(step>N){
			printf("Not convergent");
			exit (0);
			}
		x0=x1;	
		}while(fabs(f(x1))>e);
		printf("The root is %f", x1);
	return 0;
}
