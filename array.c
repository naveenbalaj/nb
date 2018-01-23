#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],i=0,j=0,n,t;
printf("\n Enter the number of element:");
scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
printf("\n Enter the %dth Element:",(i+1));
scanf("%d",&a[i]);
}
for(j=0;j<=n-1);j++)
{
for(i=0;i<(n-1);i++)
{
if(a[i+1]<a[i])
{
t=a[i];
a[i]=a[i+1];
a[i+1]=t;
}
}
}
printf("\n Ascending order:");
for(i=0;i<n;i++)
{
printf("%d",a[i]);
}
printf("\n Desending order:");
for(i=n;i>0;i--)
{
printf("%d",a[i-1];
}
return 0;
}
