/*program to  find addition, subtraction, multiplication & transpose of an
 array using switch case */

#include<stdio.h>
#include<conio.h>


void main()
{
int i,j,ch,r,c;
int x[10][10], y[10][10],z[10][10];

clrscr();

printf("enter number of rows\n\n");
scanf("%d",&r);
printf("enter number of column\n\n");
scanf("%d",&c);

printf("enter first matrix\n\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 scanf("%d",&x[i][j]);
 }
 }

 printf("enter second matrix\n\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 scanf("%d",&y[i][j]);
 }
}


 printf("matrix you entered are\n");
 printf(" first matrix\n\n");
for(i=0;i<r;i++)
{
 for(j=0;j<c;j++)
 {
 printf("%d\t",x[i][j]);
 }
 printf("\n");
 }



 printf(" second matrix\n\n");
 for(i=0;i<r;i++)
 {
 for(j=0;j<c;j++)
 {
 printf("%d\t",y[i][j]);
 }
 printf("\n");
}



 printf("\n\n menu\n");
 printf("\n 1.addition");
 printf("\n 2.subtraction");
  printf("\n 3.multiplication");
   printf("\n 4.transpose");
    printf("\n enter choice");
scanf("%d" ,&ch);

switch(ch)
{
case 1:
{
printf("sum of two matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",z[i][j]=x[i][j]+y[i][j]);
}
printf("\n");
}
}
break;


case 2:
{
printf("subtraction of two matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",z[i][j]=x[i][j]-y[i][j]);
}
printf("\n");
}
}
break;


case 3:
{
printf("multiplication of two matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",z[i][j]=x[i][j]*y[i][j]);
}
printf("\n");
}
}
break;


case 4:
{
printf("transpose of first matrix \n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",z[i][j]=x[j][i]);
}
printf("\n");
}
}
break;

default:

{
printf("\n\n wrong choice");
getch();
exit();
}
}
getch();
}