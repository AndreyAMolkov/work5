#include "task2.h"

int main()
{
	int i = 0, j = 0;
	char arr[N+2][M+2] = {' '};
	clock_t now;
	
	while (i== i)
	{
		now = clock();
		while (clock() < (now + 3*CLOCKS_PER_SEC));
		
			clearMatrix(arr);
			fillMatrix(arr);
			setMatrix(arr);
			printMatrix(arr);
		
	}
	return 0;
}



/*  �������� ��������� ������������, ��������� �� ����� �����������, ������������ �� ����������� ������������� ��������� �*�.
   ����������� ����������� � ��������� ���������� �������, � ����� ��� ����� � ����������� ���������� � ��������� ��� �����.
���������

������� ������ ��������� � ���� ��������� ������������������ �����:

������� ������� (���������� ���������)
������������ ��������� ������� �������� ������ ��������� (�� ��������)
����������� �������� � ������ ��������� �������
������� ������
����� ������� �� ����� (���������)
��������� ��������
������� � ���� 1.
������

��������� ������ �������� �� �������:

   void clearMatrix(char (* arr)[M]) - ���������� ���������� ������� (�������) ���������
   void fillMatrix(char (* arr)[M]) - ��������� �������� ������ ��������� ������� �����������
   void setMatrix(char (* arr)[M]) - ����������� ��������� � ������ ������� �������
   void printMatrix(char (* arr)[M]) - ������ �������
   int main()
��������� ��� �����: task2.h,task2.c,main2.c.*/