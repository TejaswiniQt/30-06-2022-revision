/***************Program to delete the duplicate elements in the array*******************************/

#include <stdio.h>

int main()
{
	int arr[20],i,j,k,size;
	printf("Enter the size of array:");
	scanf("%d",&size);
	printf("Enter the elements of the array:\n");
	for (i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);

	}
	for(i=0;i<size;i++)
	{
		for(j=i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<size-1;k++)
				{
					arr[k]=arr[k+1];
				}
				size--;
				j--;
			}


		}
	}
	printf("Array after deleting dupilcate elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0;
}
