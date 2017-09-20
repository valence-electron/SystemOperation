#include<stdio.h>
#include<math.h>
#include<time.h>
int main(){
	double a =0,b =1;
	double z;
	int n;
	printf("Enter the value of n:: ");
	scanf("%d",&n);
	clock_t begin = clock();
	if(n<=2){
		z=n;
	}
	
	while(n>2){
		z=a+b;
		a=b;
		b=z;
		n--;
	}
	clock_t end = clock();
	printf("Result = %0.0lf\n",z);
	printf("Execution Time = %lf\n",(double)(end - begin)/CLOCKS_PER_SEC);
	
	return 0;
}
