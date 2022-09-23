#include<stdio.h>
#include<string.h>
int main()
{
	char str[40];
	printf("\n enter the string to be reversed");
	scanf("%s",str);
	printf("\n after the reverse of the string:%s",strrev(str));
	return 0;
}
