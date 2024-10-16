#include<stdio.h> //표준 입출력 함수를 사용하기 위해 필요
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void swap(int* a, int* b) { //swap()은 두 정수 변수의 값을 서로 교환하는 함수이다.
	int temp;
	temp = *a; //첫 번째 변수의 값을 임시 변수 temp에 저장
	*a = *b; //두 번째 변수의 값을 첫 번째 변수로 복사
	*b = temp; //임시 변수에 저장한 첫 번째 변수의 원래 값을 두 번째 변수에 복사
} // 이제 두 변수의 값이 교환된다.
int main() 
{
	int number[SIZE];
	int most; //배열에서 가장 큰 값의 인덱스를 저장할 변수
	int temp;
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) { 
		number[i] = (rand() % 10000) + 1;
	}
	//밑에부터 선택정렬, i는 현재 정렬할 위치
	for (int i = 0; i < SIZE - 1; i++) { //배열의 첫 번째 요소부터 마지막 두 번째 요소까지 반복
		most = i; //현재 정렬할 구간의 첫 번째 인덱스를 most로 설정
		for (int j = i + 1; j < SIZE; j++) { //가장 큰 값의 인덱스 찾기
			if (number[most] < number[j]) most = j;//더 큰 값이 있으면 most에 해당 인덱스를 저장
		}
		//값 교환(swap)
		swap(&number[i], &number[most]); //현재 위치의 값과 가장 큰 값의 위치를 교환
		
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%5d\t", number[i]);
		if ((i + 1) % 10 == 0) printf("\n");
	}

	return 0;
}

//swap 함수에게 주소 값을 전달하면 이 swap 함수가 a와 b의 주소 값을 받는다.
