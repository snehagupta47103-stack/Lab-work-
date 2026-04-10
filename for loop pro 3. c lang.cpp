#include<stdio.h>

int main()
{
	int i, a = 1;
	
	for(i = 1; i <= 10; i++){
		printf("%d\n", a * i);
		a = a * 2;
	}
}