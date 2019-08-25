//program to insert a element between array



#include<conio.h>
#include<stdio.h>

void main()

{
 int a[100],i, n,element,position;
 clrscr();

 printf("enter the number of element you want to insert\n");
 scanf("%d",&n);
 printf("enter %d elements in array",n);
 for(i=0;i<n;i++)
 {
 scanf("%d",&a[i]);
 }


printf(" enter the element you want to insert\n");
scanf("%d",&element);


printf("enter the position of element to insert\n");
scanf("%d",&position);


i=n-1;
while(position<=i)
{
a[i+1]=a[i];
i--;
}
a[position]=element;
n++;


printf("array after insertion is\n");
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}


getch();
}
