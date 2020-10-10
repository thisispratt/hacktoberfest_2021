//matrix addition //
#include<stdio.h>
main()
{
	int a1,a2;
	printf ("enter dimensions of  matrix\n");
	scanf("%d%d",&a1,&a2);
	
	int m1[a1][a2];
	int m2[a1][a2];
		printf ("enter values of 1st  matrix\n");
	for(int i=1;i<=a1;i++)
	{
		for(int j=1;j<=a2;j++)
		{
			printf("enter(%d,%d) element : ",i,j);
			scanf("%d",&m1[i][j]);
		}
	}
		printf ("\n enter values  of 2nd matrix\n");
			for(int i=1;i<=a1;i++)
	{
		for(int j=1;j<=a2;j++)
		{
			printf("enter(%d,%d) element : ",i,j);
			scanf("%d",&m2[i][j]);
		}
	}
	printf("ADDITTION OF MATRIX :\n");
		for(int i=1;i<=a1;i++)
	{
		for(int j=1;j<=a2;j++)
		{
			printf("%d \t ",m1[i][j]+m2[i][j]);
			
		}
		printf("\n");
	}
	
}
