#include<stdio.h>

int main()
{
	int i, a = 0, b = 1, c;
	
	for(i = 1; i <= 10; i++){
		c = a + b;
		printf("%d\n" , c);
		a = b;
		b = c;
	}
}
/*
output :-1
2
3
5
8
13
21
34
55
89
*/
	
