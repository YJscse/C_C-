#include <stdio.h>

char * ReadUserName25_01(void)
{
	char name[30];
	printf("What`s your name? ");
	gets(name);

	return name;
}

int main25_01(void)
{
	char * name1;
	char * name2;

	name1 = ReadUserName25_01();
	printf("name1: %s \n", name1);
	name2 = ReadUserName25_01();
	printf("name2: %s \n", name2);
	
	return 0;
}