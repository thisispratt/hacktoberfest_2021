#include<conio.h>
#include<stdio.h>
void main()
{
    int a[5][5],int b[5][5],i,j;
    printf<<"enter the no of rows and columns:";
    scanf("%d %d",&i,&j);
    for(int k=0;k<i;++k)
       for(int f=0;f<j;++f) 
    {
        printf("\n enter the element:");
        scanf("%d",a[k][f]);
    }
printf("\n the transpose of the matrix is:");
for( k=0;k<i;++k)
for(f=0;f<j;++f)
  a[i][j]=b[j][i];
 for(k=0;k<i;++k)
 {printf("\n");
 for(f=0;f<j;++f)
 printf("\t %d", b[k][f]); 
}
getch();
}