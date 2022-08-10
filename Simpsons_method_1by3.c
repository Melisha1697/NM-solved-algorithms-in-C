//implementation of numerical integration(Simpson 1/3 Rule)
#include<stdio.h>
#include<conio.h>
#include<math.h>
//DEfining function
#define f(x) 1/(1+pow(x,2))
int main(){
	//input of lower_limit,upper_limit,sub_interval
	float lower_limit,upper_limit,step_size,integration=0.0,k;
	int sub_interval,i=1;
	printf("Enter the lower limit:\t");
	scanf("%f", &lower_limit);
	printf("Enter the upper limit:\t");
	scanf("%f", &upper_limit);
	printf("Enter the sub_interval:\t");
	scanf("%d", &sub_interval);
	//calculating step_size
	step_size= (upper_limit-lower_limit)/sub_interval;
	//calculating integration
	integration=f(lower_limit)+f(upper_limit);
	for(i=1;i<=sub_interval;i++){
		k= lower_limit+i*step_size;
		if(i%2==0){
			integration=integration+2*f(k);
		}
		else{
			integration=integration+4*f(k);
		}
	}
	integration= integration*(step_size/3);
	//Displaying
	printf("The result is:\n %f", integration);
}
