#include <stdio.h>

int main()
{
	int n,i,j;
	
	scanf("%d",&n);
	
	for(i=0 ; i<=n ; i+=1)
	{
		for(j=0 ; j<=i ; j+=1)
			if(j==0 || j==i)
				printf("*");
			else if (i==n)
				printf("*");
			else
				printf(" ");	
		printf("\n");	
	}
	
	
	
	return 0;
}
