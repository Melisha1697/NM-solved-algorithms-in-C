//Implementation of bisection method
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) 3*x-cos(x)-1//defining function
#define g(x) 3+sin(x)//defining the derivative of about function
int main(){
	//variable definiton
	float x0,x1,e,f0,g0,root;
	printf("Inital guess xo and g0: ");
	scanf("%f %f",&x0,&g0);
	printf("Initial toraletable error: ");
	scanf("%f",&e);
	top:
	f0=f(x0);
	g0=g(g0);
	x1=x0-f0/g0;
	if(fabs((x1-x0)/x1)<=e){
		root=x1;
		printf("%f",x1);
	}
	else{
		x0=x1;
		goto top;
	}
	return 0;
}
