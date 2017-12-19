#include "task1.h"
char *randomWords(char *in, char *out)
{
	int i = 0, j = 0,len=0,flagChar=0,countWord=0,symbol=0;
	int k = 0;
	char buf = 0;
	char *midl[SIZE];
	char *result;
	while (in[j]!='\n')//look out end of string with '\n'
	{
		if (in[j] ==' ')
			in[j] = '\0';
		j++;
	}
	len = j - 1;
    in[j] = '\0';//shange '\n'to '\0'
	for (j = 0;j <= len;j++)
	{
		if (flagChar == OUT && in[j] != '\0')
		{
			midl[i++] = &in[j];
			flagChar++;
		}
		else
		{
			if (in[j] == '\0') {
				flagChar = OUT;
			}
		}
	}
	midl[i] = '\0';
	countWord = i ;
	srand(time(0));
	if (countWord == 2)//random condition for only two words
	{
		result = midl[1];
		midl[1] = midl[0];
		midl[0] = result;
	}
	for (;countWord >2;countWord--)// random for two and more words
	{	 
			j = countWord - 2;
			symbol = rand() % j;
			i = countWord - 1;
			result = midl[i]; 
			midl[i]=midl[symbol];
			midl[symbol] = result;
	}

	for (i=countWord=0;midl[countWord] != NULL;countWord++)
	{
		for (j=0;((*(midl+countWord))[j])!=NULL;j++)
		{
			out[i++] = (*(midl + countWord))[j];
		}
		out[i++] = ' ';
	
	}
	out[i] = '\0';
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