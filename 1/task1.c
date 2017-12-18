#include "task1.h"


char * randomWords(char *in, char *out[SIZE])
{
	int i = 0, j = 0,len=0,flagChar=0,countWord=0,symbol=0;
	int checkArr[SIZE] = { 0 };
	char *result = {0};
	
	while (in[j]!='\n')
	{
		if (in[j] ==' ')
			in[j] = '\0';
		j++;
	}
	len = j - 1;
    in[j] = '\0';
	for (j = 0;j <= len;j++)
	{
		
		if (flagChar == OUT && in[j] != '\0')
		{
			out[i] = &in[j];
			checkArr[i] = i;
			i++;
			flagChar++;
		}
		else
		{
			if (in[j] == '\0') {
				flagChar = OUT;
			}
		}

	}
	out[i] = '\0';
	countWord = i ;
	srand(time(0));
	for (;countWord >2;countWord--)
	{	
		
			j = countWord - 2;
			symbol = rand() % j;
			i = countWord - 1;
			result = out[i]; 
			
			out[symbol] = out[i];
out[i] = result;
		
		
	}
	

	return out;
}

/*
Написать программу, которая принимает от пользователя строку и
выводит ее на экран, перемешав слова в случайном порядке.
Пояснение
Для входной строки создается массив указателей на char, в который заносятся адреса первых символов каждого слова.
Затем организуется новая строка, при использовании этого массива из указателей. 
Массив из указателей должен объявляться внутри функции randomWords.
Порядок слов может быть любым, но главное, чтобы слова не повторялись и строка отличалась от исходной.

Состав

Программа должна состоять из функций:

- char * randomWords(char * in, char *out) - функция, изменяющая порядок слов из in и записывающую их в out
- main() - организация ввода строки*/