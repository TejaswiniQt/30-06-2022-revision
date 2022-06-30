/******************Program to find the unique element in the array*********************/
 #include <stdio.h>

int unique(int*arr,int len)
{
	int unique=0;
	for(int i=0;i<len;i++)
	{
		unique=unique^arr[i];

	}
	return unique;

}

int main()
{
	int flag=0;
	int arr[]={2,5,3,4,2,3,4};
	int len=sizeof(arr)/sizeof(int);
	int(*fptr)(int*,int) = unique;
	flag=fptr(arr,len);
	if(flag)
	{
		printf("unique elememt is %d\n",flag);
	}
	else
	{
		printf("no unique elememts in array\n");
	}
	return 0;
}
