#include "task1.h"
#include<stdio.h>

/*
#define OUT 0
#define SIZE 100
#include<string.h>
#include<time.h>
#include<stdlib.h>
*/

int main()
{
	int i = 0, len = 0, j = 0;
	char buf[SIZE] = { 0 };
	char *in[SIZE];
	char *out[SIZE];
	char **p;
	char bufOut[SIZE] = { 0 };
	FILE *fp = fopen("fp.txt", "r");
	FILE *fpFinal = fopen("fpFinal.txt", "w");
	printf("Open file fp.txt: \n");
	
	while (fgets(buf, SIZE, fp)!=EOF)
	{
		p = randomWords(buf, out);
		for (j = 0;p[j] != '\0';j++)
		{
			fgets(bufOut[i++], SIZE, p[j]);
			bufOut[i] = ' ';
			
		}
		bufOut[++i] = '\n';
		bufOut[++i] = '\0';
		fprintf(fpFinal, bufOut);
	}
	;
	

	return 0;
}