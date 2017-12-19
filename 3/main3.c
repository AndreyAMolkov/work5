#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"
//#include<stdio.h>
//#define SIZE 100
int main()
{
	int i = 0, len = 0, j = 0,k=0,z=0;
	char buf[SIZE] = { 0 };
	char *in[SIZE];
	char *outstr[SIZE];
	char *out[SIZE];
	char *p;
	char *bufOut;
	char collectString[SIZE];
	char check[SIZE];
	char ch = ' ';
	FILE *fp = fopen("fp.txt", "r");
	
	FILE *fpFinal = fopen("fpFinal.txt", "a+");
	if (fpFinal == NULL)
	{
		printf("%s -Error of open first file\n", fpFinal);
		return -1;
	}else printf("Open file fp.txt: \n");
	
	while (fgets(buf, SIZE, fp) != NULL)
	{
		p = mixLine(buf,outstr);
		;
		for (j = 0;p[j] != NULL;j++)
		{
			bufOut=mixChars(p[j],out);
			for (k = 0,ch=' ';(ch = bufOut[k]) != NULL; k++)
			{
				fputc(ch, fpFinal);
				printf("%c", ch);
			}
			printf("%c", " ");
			//fclose(fpFinal); 
		}
		ch = '\n';
		fputc(ch,fpFinal);
	}
	;


	return 0;
}
/*
   Написать программу, переставляющую случайным образом символы каждого слова каждой строки текстового файла, кроме первого и последнего, то есть начало и конец слова меняться не должны.

Программа открывает существующий тектстовый файл и читает его построч- но. Для каждой строки выполняется разбивка на слова и независимая обра- ботка каждого слова
Состав

Программа должна состоять из функций:

   - char *mixChars(char *in char *out) -  перемешивание символов в одном слове
   - char *mixLine(char *instr, char * outstr) - перемешивание для целой строки
   - int main()
Создаются три файла: task3.h,task3.c,main3.c.*/