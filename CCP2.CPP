#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 int m[100][100],s[100];
 printf("Enter the marks in 4 subjects : \n");
 printf("INPUT DATA\n");
 for(i=0;i<5;i++)
 {
  printf("\n");
  for(j=0;j<4;j++)
  {
   printf("Marks scored by STUEDENT[%d] in Subject[%d]: \n",(i+1),(j+1));
   scanf("%d",&m[i][j]);
  }
 }
 for(j=0;j<4;j++)
 {
  s[j]=m[0][j];
  for(i=0;i<5;i++)
  {
   if(s[j]>m[i][j])
   {
    s[j]=m[i][j];
   }
  }
 }
 for(i=0;i<4;i++)
 {
  printf("\n");
  printf("Lowest marks scored in Subject[%d] in %d \n",(i+1),s[i]);
 }
 printf("\n");
 getch();
}


