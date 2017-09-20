#include<stdio.h>
#include<time.h>
int fibonacci(int);
int main(){
	int length;
	printf("Enter the position:: ");
	scanf("%d",&length);
	clock_t begin = clock();
	int a =0;
	int b=1;
	printf("Output: %d\n",fibonacci(length-1));
	clock_t end = clock();
	printf("Execution Time = %lf\n",(double)(end - begin)/CLOCKS_PER_SEC);
	
}
int fibonacci(int n){
        if(n>=2){
        	//printf("%d ",n);
            return fibonacci(n-1)+fibonacci(n-2);
        }
        	//printf("%d ",n);
            return n;
}
