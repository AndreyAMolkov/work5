#include "task1.h"

int findSymb(char *arr)
{
	clock_t now;
	now = clock();
	srand(time(0));
	int i = 0,symbol=0;
	while (i==i)
	{
		switch (rand() % 1)
		{case 0:
			symbol = rand() % (0 - 9 + 1) + 1;
		}
		if ((arr + symbol) > -1)
		{
			*(arr + symbol) = -1;
			return symbol;
			break;
		}
		
	}
	
}

char * randomWords(char *in, char *out)
{
	int i = 0, j = 0,len=0,flagChar=0,countWord=0,from=0,to=0;
	int checkArr[SIZE] = { -1 };
	while (i<(SIZE-1))
	{
		checkArr[i++] = -1;
	}
	i = 0;
	char *result[SIZE];
	
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
			out[i] = in[j];
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
	
	countWord = i - 1;
	
	while(countWord!=0)
	{	
		result[findSymb(checkArr)] = out[findSymb(checkArr)];
		countWord--;
	}
	i = 0;
	j = 0;
	while (i < len) 
	{
		out[i++] = *(result[j]);
	}

	return out;
}

/*
�������� ���������, ������� ��������� �� ������������ ������ �
������� �� �� �����, ��������� ����� � ��������� �������.
���������
��� ������� ������ ��������� ������ ���������� �� char, � ������� ��������� ������ ������ �������� ������� �����.
����� ������������ ����� ������, ��� ������������� ����� ������� �� ����������. 
������ �� ���������� ������ ����������� ������ ������� randomWords.
������� ���� ����� ���� �����, �� �������, ����� ����� �� ����������� � ������ ���������� �� ��������.

������

��������� ������ �������� �� �������:

- char * randomWords(char * in, char *out) - �������, ���������� ������� ���� �� in � ������������ �� � out
- main() - ����������� ����� ������*/