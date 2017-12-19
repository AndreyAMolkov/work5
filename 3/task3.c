#include "task3.h"


char *mixChars(char *in ,char *out)// - перемешивание символов в одном слове
{
	int i = 0, j = 0, len = 0, flagChar = 0, countWord = 0, symbol = 0;
	int checkArr[SIZE] = { 0 };
	char *result = { 0 };

	if (strlen(in) > 1)
	{

		while (in[j] != '\0')
		{
			j++;
		}
		len = j - 1;
		for (j = 0;j <= len;j++)
		{
			//if (flagChar == OUT && in[j] != '\0')
			//{
			out[i] = in[j];

			i++;
			flagChar++;
			//}
		//	else
			//{
			//	if (in[j] == '\0') {
			//		flagChar = OUT;
			//	}
			//}
		}
		out[i] = '\0';
		out;
		countWord = i;
		srand(time(0));
		for (;countWord > 2;countWord--)
		{
			j = countWord - 2;
			symbol = rand() % j;
			i = countWord - 1;
			result = out[i];
			out[i] = out[symbol];
			out[symbol] = result;
		}
	}
	else strcpy(out, in);
	return out;
}
char *mixLine(char *instr, char *outstr[SIZE])// - перемешивание для целой строки
{
	int i = 0, j = 0, len = 0, flagChar = 0, countWord = 0, symbol = 0;
	char *result = { 0 };
	if (strlen(instr) > 1)
	{
		while (instr[j] != '\n')
		{
			if (instr[j] == ' ')
				instr[j] = '\0';
			j++;
		}
		len = j - 1;
		instr[j] = '\0';
		for (j = 0;j <= len;j++)
		{
			if (flagChar == OUT && instr[j] != '\0')
			{
				outstr[i] = &instr[j];
				i++;
				flagChar++;
			}
			else
			{
				if (instr[j] == '\0') {
					flagChar = OUT;
				}
			}
		}
		outstr[i] = '\0';
		countWord = i;
		srand(time(0));
		for (;countWord > 2;countWord--)
		{
			j = countWord - 2;
			symbol = rand() % j;
			i = countWord - 1;
			result = outstr[i];
			outstr[i] = outstr[symbol];
			outstr[symbol] = result;
		}
	}
	else strcpy(outstr,instr);
	return outstr;
}
