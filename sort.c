#include<stdio.h>
void main()
{
int a[50],i,j,flag,b;
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<b;i++)
{
flag=0;
for(j=i+1;j<b;j++)
{
if(a[i]==a[j])
{
flag++;
}
}
if(flag==1)
{
printf("%d",a[i]);
}
}
getch();
}
