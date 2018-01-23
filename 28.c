#include <stdio.h>
int main()
{
	int a[50],i,n;
	printf("enter the array size");
	scanf("%d",&n);
	printf("\n enter the array element");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	printf("\n %d %d",i,a[i]);
	}
	return (0);
}
