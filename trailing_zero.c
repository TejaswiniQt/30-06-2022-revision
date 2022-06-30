/***********Progra to find the number of trailing zeros in the entered number*******************/

#include <stdio.h>
#define INT_SIZE sizeof(int)*8

int count_zeros(int num)
{
	int count=0;
	for(int i=0;i<INT_SIZE;i++)
	{
		if((num>>i)&1)
		{
			break;
		}

		count++;
	}
	return count;
}
int main()
{
	int num;
	printf("enter any number:");
	scanf("%d",&num);
	int(*fun)(int)=count_zeros;
	printf("total no of trailing zeros  in %d is %d\n",num,fun(num));
	return 0;
}
