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