//ROOT FINDING USING
//1. NEWTON RAPSHON METHOD(NM)
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#define f(x) 3*x-cos(x)-1//function defination
#define g(x) 3+sin(x)//derivative function 
int main(){
	float x0, x1, e, f0,g0,root;//variable defination 
	int N,step=1;
	printf("Enter the initial guess:\t");
	scanf("%f", &x0);
	printf("\nEnter the maximun iteration:\t");
	scanf("%d",&N);
	printf("\nEnter the tolarable error:\t");
	scanf("%f", &e);
	do{
		f0=f(x0);
		g0=g(x0);
		if(g0==0.0)
		{
			printf("Mathematicis error\n");
			exit (0);
			}
			x1=x0-(f0/g0);
			x0=x1;
			step++;
			if(step>N){
				printf("Not convergent");
				exit (0);
			}	
		}while(fabs(f(x1))>e);
		printf("The root %f", x1);
	return 0;
}
