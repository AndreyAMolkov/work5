#include "task1.h"
//#include<stdio.h>
//#define SIZE 100
int main()
{
	int i = 0, len = 0,j=0;
	char buf[SIZE] = {0};
	char *in[SIZE] ;
	char *out[SIZE] ;
	char **p;
	printf("Enter line of words: \n");
	fgets(buf, SIZE, stdin);
	p=randomWords(buf, out);
	for (j = 0;p[j] != NULL;j++)
	{
		printf("%s ", p[j]);
	}
	
	return 0;
}