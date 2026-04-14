#include<stdio.h>

int main()
{
	int a [5] = { 90, 80, 70, 60, 50 };
	int b [5] = { 10, 20, 30, 40, 50};
	int sum[5];
	int i;
	for (int i = 0; i<5; i++){
		sum [i] = a[i] + b[i];
	}
	printf("A B sum\n");
	for (int i = 0; i<5; i++){
		printf ("%d + %d = %d\n", a[i], b[i], sum[i]);
	}
}