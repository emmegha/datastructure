//program to remove duplicate element from an array


#include<stdio.h>
#include<conio.h>

void main()
{

int a[100], i, j, k, n;
clrscr();


printf("enter the  number of element you want to enter\n\n");
scanf("%d",&n);

printf("enter the %d element\n\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]==a[j])
{
for(k=j;k<n;k++)
 {
a[k]=a[k+1];
}
n--;
j--;
}
}}
printf("\n array after removing duplicate elemets are  ");
for(i=0;i<n;i++)
{
printf("\n %d" , a[i]);
}


getch();

}
