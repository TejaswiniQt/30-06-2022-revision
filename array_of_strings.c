/***************Simpleprogram for array of strings****************************/

#include<stdio.h>

int main()
{
	char *strarr[4] = {"C_programming","DS","OS","Python"};
	int i,j;
	printf("The strings stored in the array:\n");
	for(i=0;i<4;i++)
	{
		j=0;
		while( *(strarr[i]+j) != '\0')
		{
			printf("%c",*(strarr[i]+j));
			j++;
		}
		printf("\n");
	}
	return 0;
}
