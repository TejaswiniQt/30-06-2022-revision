/****************************Program to find the given string is palindrome or not******************************/

#include<stdio.h>
#include<string.h>

int palindrome(char *str);

int main()
{
	char str[100];
	printf("Enter the string:");
	scanf("%[^\n]%*c",str);
	if(palindrome(str))
		printf("The string %s is a palindrome\n",str);
	else
		printf("The string %s is not a palindrome\n",str);
	return 0;
}

int palindrome(char *str)
{
	int  i,length,count=0;
	length=strlen(str);
	for(i=0;i<length/2;i++)
	{
		if(str[i] == str[length-i-1])
			count++;;
	}
	if(count == i)
		return 1;
	else
		return 0;
}

