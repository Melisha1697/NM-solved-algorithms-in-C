//Implementation of bisection method
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) pow(x,3)+3*x-5//defining function
int main(){
	//variable definiton
	float e,x1,x2,x0,f0,f1,f2,root;
	up:
	printf("Initial guess of x1 and x2: ");
	scanf("%f %f",&x1,&x2);
	printf("\n Enter tolerable error:\t");
	scanf("%f",&e);
	f1=f(x1);
	f2=f(x2);
	if(f1*f2>0.0){
		printf("x1 and x2 do not bracket the root");
		goto up;
	}
	top:
	x0=(x1+x2)/2;
	f0=f(x0);
	if(f1*f0<0.0){
		x2=x0;
		f2=f0;
	}
	else{
		x1=x0;
		f1=f0;
	}
	if(fabs(f0)<e){
		root=x0;
	}
	else{
		goto top;
	}
	printf("The root will be %f",x0);
	return 0;
}
