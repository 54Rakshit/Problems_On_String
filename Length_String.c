#include<stdio.h>

int Length_String(char*str)
{
	int count=0;

	if(str==NULL)
		return -1;

	while(*str!=0)
	{
		count++;
		str++;
	}
	return count;
}

int main()
{
	char arr[10]; //Allocate static memory for an Array
	int iReturn=0; 

	printf("Enter the String ==>");
	scanf("%[^'\n']s",arr);

	iReturn=Length_String(arr);

	printf("The length of the String is:%d\n",iReturn);

	return 0;
}

