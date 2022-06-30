/*******************Program To find the index of first occurrence of a substring in a string********************/

#include<stdio.h>

void first_occurance(char *str,char *substr);

int main()
{
	char str[100],substr[50];
	printf("Enter the string:\n");
	scanf("%[^\n]%*c",str);
	printf("Enter the word to be searched in string:\n");
	scanf("%[^\n]%*c",substr);
	first_occurance(str,substr);
	return 0;
}


void first_occurance(char *str,char *substr)
{
	int found,i=0,j;
	while(str[i] != '\0')
	{
		if(str[i] == substr[0])
		{
			found = 1;
			j=0;
			while(substr[j] != '\0')
			{
				if(substr[j] != str[i+j])
				{
					found = 0;
					break;
				}
				j++;
			}
		}
		if(found == 1)
		{
			break;
		}
		i++;
	}
	if(found == 1)
	{
		printf("%s is found at index %d\n",substr,i);
	}
	else
	{
		printf("%s is not found in the string\n",substr);
	}
}

