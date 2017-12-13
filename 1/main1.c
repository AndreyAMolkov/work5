#include "task1.h"
//#include<stdio.h>
//#define SIZE 100
int main()
{
	int i = 0, len = 0,j;

	char buf[SIZE] = {0};
	char *in[SIZE] ;
	char *out[SIZE] ;
	printf("Enter line of words: \n");
	fgets(buf, SIZE, stdin);
	
	randomWords(buf, out);
	printf("%s", randomWords(in, out));
	return 0;
}