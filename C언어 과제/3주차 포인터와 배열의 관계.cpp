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

// 주소값에 +, - 연산이 가능함
// 어떤 자료형의 주소를 가지고 있는가에 따라 결과가 달라짐[정수형은 +4, 문자는 +1이 더해진다
// 포인터 연산은 덧셈과 뺄셈만 가능하다(다음번지, 이번번지의 개념으로 처리하기 때문이다)
// int* array 와 int array[ ] 같다.
//*(array+1)를 array[i]로 바꿀 수 있다.