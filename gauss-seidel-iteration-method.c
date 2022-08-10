//Solution of system of linear equation using gauss seidel iteration method
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#define f1(x,y,z) (17-y+2*z)/20 
#define f2(x,y,z) (-18-3*x+z)/20
#define f3(x,y,z) (25-2*x+3*y)/20
int main(){
	//2. Arrange given sytem of linear equation
	//in diagonally dominat form.
	float e,x0=0.0,y0=0.0,z0=0.0,x1,y1,z1,e1,e2,e3;
	//3.Read tolerable error (e)
	printf("Enter the tolerable error:\t");
	scanf("%f", &e);
	//4.Convert the first equation in terms of the 
	//first variable, second equation in terms
	//of second variable and so on.
	//5. Seting initial guesses for x0,y0,z0 and so on.
	do{
	//6.subtitute the value of x0, y0, z0... from
	//step 5 in first equation obtained from step 4
	//to calculate new value of x1
	//use x1, z0,... in second equation and so on.
		x1=f1(x0,y0,z0);
		y1=f2(x1, y0, z0);
		z1=f3(x1,y1,z0);
		e1=fabs(x1-x0);
		e2=fabs(y1-y0);
		e3=fabs(z1-z0);
	//8. Set x0=x1, y0=y1, z0=z1 and so on and go to step-6.
		x0=x1;
		y0=y1;
		z0=z1;
	//7. If |x0-x1|>e and |y0-y1|>e and |zo-z1|>e and so on goto step 9.
	} while((e1>e) && (e2 >e) && (e3>e));
	
	//9. print the value of x1, y1 and z1 am=nd so on.
	printf("The result is %f %f %f", x1, y1, z1);
	return 0;
	exit (0);
}
