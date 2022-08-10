//Implementation of Runge kutta (R-K-4) for solving odinary diffrential equation.
#include<stdio.h>
#include<math.h>
//2. Defining function
#define f(x,y) (pow(y,2)-pow(x,2))/(pow(y,2)+pow(x,2))
int main(){
	int n,i;
	float x0,y0,xn,m1,m2,m3,m4,m,yn,h;
	//Read values of initial condition (x0 and y0) 
	//number of steps (n) and calculation point(xn)
	printf("Enter the number of step size:");
	scanf("%d", &n);
	printf("Enter initial guess:");
	scanf("%f %f", &x0, &y0);
	printf("Enter the point:");
	scanf("%f", &xn);
	//Calculate step size(h)=(xn-x0)/n
	h=(xn-x0)/n;
	//set i=0
	for(i=0;i<n;i++){
		m1=f(x0,y0);
		m2=f(x0+h/2,y0+m1*h/2);
		m3=f(x0+h/2,y0+m2*h/2);
		m4=f(x0+h,y0+m3*h);
		m=(m1+2*m2+2*m3+m4)/6;
		yn=y0+m*h;
		x0=x0+h;
		y0=yn;
	}
	printf("the resulting value of yn %f", yn);
	return 0;	
}
