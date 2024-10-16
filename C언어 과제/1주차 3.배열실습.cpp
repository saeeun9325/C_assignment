#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100 //define을 사용해 상수 size를 100으로 정의하는 것.
int main()
{
	int number[SIZE];
	int total = 0; // 배열에 저장된 값들의 합계를 저장할 변수.
	int max, min; // 배열 최대, 최소 값을 저장할 변수
	float avg = 0.0; // 평균값 저장할 변수
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) {
		number[i] = (rand() % 100) + 1;
	}
	for (int i = 0; i < SIZE; i++) {
		printf("%3d\t", number[i]);
		if ((i + 1) % 10 == 0) printf("\n"); // 10개의 숫자를 출력한 후에 줄바꿈 함.
	}
	for (int i = 0; i < SIZE; i++) {
		total += number[i]; // for문은 배열의 모든 요소를 더해 total 변수에 저장한다.
	}
	avg = (float)total / SIZE; // 배열 요소들의 합을 SIZE(100)으로 나눠 평균을 계산합니다.

	max = number[0]; // 최대 최소 변수를 배열의 첫 번째 값으로 초기화 함.
	min = number[0];
	for (int i = 1; i < SIZE; i++) { // for문을 사용해 배열을 순회하면서 값이 크면 maw 업데, 작으면 min 업데이트를 한다.
		if (max < number[i]) max = number[i];
		if (min > number[i]) min = number[i];
	}
	printf("avg = %f, max = %d, min = %d\n", avg, max, min);
	return 0;
}
// %3d %d 앞에 숫자가 붙으면 예를 들어 3이면 세 자리 포맷(일정한 형식)으로 찍는 것이다. [오른쪽 정렬로 찍기!]
// -3d면 왼쪽에서부터 찍는 것이다 즉 왼쪽 정렬
// \t(역슬래시 즉 탭t 라고 부른다) : 탭t만큼 공백이 떨어지는 것을 의미한다. 
// 평균을 구하기 위해서는 float 형식으로 avg(평균) 변수가 있어야 한다.
// float으로 들어가게 할려면 정수 나누기 정수를 하는 것이 아니라 정수 나누기 소수점으로 써줘야 한다.
// total을 명시적으로 float으로 취급하라고 한 경우 (float)total 이런식으로 써줘야 한다. = 형변환이라고도 한다.   
// %f: 실수형 평균값을 출력합니다.
// %d: 정수형 최대값과 최소값을 출력합니다.
