#include "task1.h"

int findSymb(int *arr)
{
	int count = 0;
	int D = 10;// the discharge of the generated numbers
	clock_t now;
	now = clock();
	srand(time(0));
	int i = 0,symbol=0;
	while (i==i)
	{
		switch (rand() % 1)
		{case 0:
			symbol = rand() % D;
			count++;
		}
		if (arr[symbol] > -1)
		{
			arr[symbol]= -1;
			return symbol;
			break;
		}
		
	}
	
}

char * randomWords(char *in, char *out)
{
	int i = 0, j = 0,len=0,flagChar=0,countWord=0,symbol=0;
	int checkArr[SIZE] = { 0 };
	char *result = in;
	while (i<(SIZE-1))
	{
		checkArr[i++] = -1;
	}
	i = 0;
	
	
	while (in[j]!='\n')
	{
		if (in[j] ==' ')
			in[j] = '\0';
		j++;
	}
	
	len = j - 1;
    in[len] != '\0';
	for (j = 0;j <= len;j++)
	{
		
		if (flagChar == OUT && in[j] != '\0')
		{
			result[i] = in[j];
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
	result[i] = '\0';
	
	countWord = i - 1;
	
	while(countWord >-1)
	{	
		symbol = findSymb(checkArr);
		out[countWord] = result[symbol];
		countWord--;
	}
	out[i] = '\0';
	i = 0;
	j = 0;
	/*while (i < len) 
	{
		out[i++] = (result[j]);
	}*/

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