#include<stdio.h>
int main(){
int i,n,count=0,arr[]={1.6,1.8,2.7,-1.6,2.3,-2.1,0.19};
n=sizeof(arr)/sizeof(arr[0]);
for(i=0;i<n;i++)
{
	if(arr[i]<0)
	{
		count++;
	}
}
printf("total number of negative numbers in array: %d",count++);
}
