#include <stdio.h>
int main()
{
	int n,i=1,h=1;
	scanf("%d",&n);
	int space=n-1;
	while (i<=n)
	{
		int h=1;
		while (h<=n)
		{
			if (h<=space)
			{
				printf(" ");
			}
			else
			{
				printf("*");
			}
			h++;
		}
		printf("\n");
		i++;
		space--;
	}
}
