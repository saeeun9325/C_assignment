#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100

void inputRandomArray(int array[ ], int size) {
	for (int i = 0; i < size; i++) {
		*(array + i) = rand() % 100;
	}
}
void printArray(int* array, int size)
{
	for (int i = 0; i < size - 1; i++) {
		printf("%3d\t", *(array + 1)); 
		if ((i + 1) % 10 == 0) printf("\n");
	}
}
int main()
{
	int number[SIZE];
	
	srand(time(NULL));
	inputRandomArray(number, SIZE);
	printArray(number, SIZE);


	return 0;
}

// �ּҰ��� +, - ������ ������
// � �ڷ����� �ּҸ� ������ �ִ°��� ���� ����� �޶���[�������� +4, ���ڴ� +1�� ��������
// ������ ������ ������ ������ �����ϴ�(��������, �̹������� �������� ó���ϱ� �����̴�)
// int* array �� int array[ ] ����.
//*(array+1)�� array[i]�� �ٲ� �� �ִ�.