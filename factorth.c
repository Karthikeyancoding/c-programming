#include<stdio.h>
int main()
{
	int i,fact,number;
	printf("enter the number");
	scanf("%d",&number,fact);
	for(i=1;i<=number;i++){
		fact=fact*i;
	}
	printf("%d",fact);
	return 0;
}
