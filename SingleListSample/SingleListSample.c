#include <stdio.h>

typedef struct NODE
{
	//관리될 데이터
	int nData;

	//데이터 관리를 위한 포인터
	struct NODE* next;
} NODE;

int main()
{
	NODE node = { 0 };
	return 0;
}