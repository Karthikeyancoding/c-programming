#include <stdio.h>
struct student 
{
    char name[50];
    int roll;
} ;
int main() 
{
    int i,n;
    printf("Enter the value of n = ");
    scanf("%d",&n);
    struct student s[n];
    if(n>0)
    {
    	for (i = 0; i < n; i++) 
        	printf("\nroll number= \n");
        	scanf("%d",&s[i].roll);
        	printf("Enter grade: ");
        	scanf("%s", &s[i].grade);
    	}
    	if(s[i].name>0 && s[i].roll<0)
    	{
    		printf("Invalid input");
		}
    	else if
   	 	{
    		for (i = 0; i < n; i++) 
			{
        		printf("\nRoll number: %d", s[i].roll);
        		printf("\ngrade: %s",s[i])grade);
				    		}
    	} 
	}
	else
	{
		printf("Invalid input");
	}
    return 0;
}
