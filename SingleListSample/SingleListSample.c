#include <stdio.h>

typedef struct NODE
{
	//������ ������
	int nData;

	//������ ������ ���� ������
	struct NODE* next;
} NODE;

int main()
{
	NODE node = { 0 };
	return 0;
}