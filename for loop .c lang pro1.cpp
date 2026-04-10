#include<stdio.h>

int main()
{
	int n,i;
	printf("enter a number:");
	scanf("%d\n",&n);
	for(i=1;i<=n;i++){
		if(i%2==0){
			printf("%d\n",i*i);
	}else{
		printf("%d\n",i);
	}
  }
}
/*
output :-enter a number:5
1
4
3
16
5
*/
