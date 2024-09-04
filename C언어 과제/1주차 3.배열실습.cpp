#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main()
{
	int number[SIZE];
	int total = 0;
	int max, min;
	float avg = 0.0;
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		number[i] = (rand() % 100) + 1;
	}
		for (int i = 0; i < SIZE; i++) {
		printf("%3d\t", number[i]); 
		if ((i + 1) % 10 == 0) printf("\n");
	}
		for (int i = 0; i < SIZE; i++) {
			total += number[i];
		}
		avg = (float)total / SIZE;

		max = number[0];
		min = number[0];
		for (int i = 0; i < SIZE; i++) {
			if (max < number[i]) max = number[i];
			if (min > number[i]) min = number[i];
		}
		printf("avg = %f, max = %d, min = %d\n", avg,max, min);
	    return 0;
}
// %3d %d 앞에 숫자가 붙으면 예를 들어 3이면 세 자리 포맷(일정한 형식)으로 찍는 것이다. [오른쪽 정렬로 찍기!]
// -3d면 왼쪽에서부터 찍는 것이다 즉 왼쪽 정렬
// \t(역슬래시 즉 탭t 라고 부른다) : 탭t만큼 공백이 떨어지는 것을 의미한다. 
// 평균을 구하기 위해서는 float 형식으로 avg(평균) 변수가 있어야 한다.
// float으로 들어가게 할려면 정수 나누기 정수를 하는 것이 아니라 정수 나누기 소수점으로 써줘야 한다.
// total을 명시적으로 float으로 취급하라고 한 경우 (float)total 이런식으로 써줘야 한다. = 형변환이라고도 한다.   