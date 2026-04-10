#include<stdio.h>

int main()
{
	int n, a = 30;
	    printf("Enter a number:");
		scanf("%d", &n);
	
	while(a>=n){
		printf("%d Hello\n", a);
		a = a - 1 ;
	}
}