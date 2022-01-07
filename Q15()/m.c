#include<stdio.h>
void main()
{
int n, a[10], i,flag=0;
printf("Enter number of binary numbers: ");
scanf("%d",&n);
printf("Enter %d binary numbers:", n);
for(i=0;i<n;i++)
{
scanf("%d", &a[i]);
}
for(i=n-1;i>=0;i--)
{
if(a[i]==1 && flag==0)
{
flag = 1;
continue;
}
if(a[i]==0 && flag==0)
{
continue;
}
if(a[i]==1)
a[i]=0;
else
a[i]=1;
}
printf("2's complement is: ");
for(i=0;i<n;i++)
{
printf("%d ",a[i]);
}
}