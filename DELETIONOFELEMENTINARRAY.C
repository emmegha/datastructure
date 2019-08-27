//program to delete an element from array


#include<stdio.h>
#include<conio.h>


void main()

{

int a[100],i,num,n,loc;

clrscr();


printf("enter the number of elements you want to insert in array\n\n");
scanf("%d",&n);
printf("enter the %d elements in array\n\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}


printf("enter the element you want to delete\n\n");
scanf("%d",&num);



for(i=0;i<n;i++)
{
if(a[i]==num)
loc=i;
}



for(i=loc;i<n;i++)
{
a[i]=a[i+1];
}


printf("new array is \n\n");
for(i=0;i<n-1;i++)
{
printf("%d\n",a[i]);
}

getch();
}