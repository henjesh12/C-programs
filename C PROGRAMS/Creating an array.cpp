#include<stdio.h>
#define maxsize 10
int a[maxsize],n,i,ele,pos;
int create()
{
printf("enter the no of elements\n");
scanf("%d",&n);
printf("enter %d elements",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
}
int display()
{
if(n==0)
{
printf("array is empty");
return;
}
else
{
printf("array elements are\n");
for(i=0;i<n;i++)
printf("%d \t",a[i]);
}
}
int insert()
{
if (n==maxsize)
{
printf("array is full");
return;
}
else
{
printf("enter the element to be inserted");
scanf("%d",&ele);
printf("enter the valid positon");
scanf("%d",&pos);
for(i=n-1;i>=pos-i;i--)
{
a[i+1]=a[i];
}
a[pos-1]=ele;
n++;
}
}
int del()
{
if(n==0)
{
printf("array is empty");
return;
}
else
{
printf("enter the position of elements to be deleted\n");
scanf("%d",&pos);
ele=a[pos-1];
for(i=pos-1;i<n-1;i++)
{
a[i]=a[i+1];
}
n--;
printf("the deleted elementes is %d",ele);
}
}
void main()
{
int ch;
while(1)
{
printf("---------------menu--------------\n");
printf("1--->create\n");
printf("2-->display\n");
printf("3-->insert\n");
printf("4-->delete\n");
printf("5--->exit\n");
printf("enter choice");
scanf("%d",&ch);
switch(ch)
{
case 1: create();
break;
case 2: display();
break;
case 3:insert();
break;
case 4:del();
break;
case 5:exit(0);
default:printf("enter the valid choice");
break;
}
}
}

