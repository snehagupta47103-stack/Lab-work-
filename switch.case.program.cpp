#include<stdio.h>

int main ()
{
	int a, b, ch;
	printf("enter value of A & B:");
	scanf("%d%d",&a , &b);
	
	printf("\n1, Addition");
	printf("\n2, Subtraction");
	printf("\n3, Multiplication");
	printf("\n4, Division");
	
	scanf("%d" , &ch);
	
	switch(ch){
		case 1:
			printf("Addition of a and b is : %d\n", a+b);
			break;
		case 2:
			printf("Subtraction of a and b is : %d\n", a-b);
			break;
		case 3:
			printf("Multiplication of a and b is : %d\n", a*b);
			break;
		case 4:
			printf("Division of a and b is : %d\n", a/b);
			break;	
		
	}
}