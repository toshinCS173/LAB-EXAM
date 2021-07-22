#include<stdio.h>
#include<conio.h>
void main()
{
 clrscr();
 int i,j;
 int m[100][100],s[100];
 printf("Enter the marks in 3 subjects : \n");
 printf("INPUT DATA\n");
 for(i=0;i<4;i++)
 {
  printf("\n");
  for(j=0;j<3;j++)
  {
   printf("Marks scored by STUEDENT[%d] in Subject[%d]: \n",(i+1),(j+1));
   scanf("%d",&m[i][j]);
  }
 }
 for(j=0;j<3;j++)
 {
  s[j]=m[0][j];
  for(i=0;i<4;i++)
  {
   if(s[j]<m[i][j])
   {
    s[j]=m[i][j];
   }
  }
 }
 for(i=0;i<3;i++)
 {
  printf("\n");
  printf("Highest marks scored in Subject[%d] in %d \n",(i+1),s[i]);
 }
 printf("\n");
 getch();
}


