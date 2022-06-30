/******************Simple program for pointer to the string****************************/

#include<stdio.h>

void print_string(char *str_arg);

int main()
{
	char *str = "This is a string";
	print_string(str);
	return 0;
}

void print_string(char *str_arg)
{
	while(*str_arg != '\0')
	{
		printf("%c",*str_arg);
		str_arg++;
	}
	printf("\n");
}
