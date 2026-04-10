#include<stdio.h>

int main()
{
	int i, a = 1;
	
	for(i = 1; i <= 10; i++){
		printf("%d\n", a * i);
		a = a * 2;
	}
}
/*
output :-1
4
12
32
80
192
448
1024
2304
5120
*/
