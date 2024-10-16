#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
int main()
{
	int number[SIZE];
	int most; //배열에서 가장 큰 값을 가진 인덱스를 저장할 변수
	int temp; //두 숫자를 교환(swap)할 때 임시로 사용할 변수
	srand(time(NULL));

	for (int i = 0; i < SIZE; i++) { //for문은 배열의 각 요소에 1부터 10000사이의 난수를 저장한다.
		number[i] = (rand() % 10000) + 1; //rand() % 10000 : 0~9999 사이의 값을 반환한다.
	} // +1로 범위를 1 ~ 10000으로 만든다.

	for (int i = 0; i < SIZE - 1; i++) {         //선택 정렬하는 부분!(배열을 내림차순으로 정렬한다)
		most = i; //현재 구간의 시작 인덱스를 초기화
		for (int j = i + 1; j < SIZE; j++) { //값들 비교
			if (number[most] < number[j]) most = j; //더 큰 값이 발견되면 most에 해당 인덱스를 저장
		} 
		temp = number[i]; //number[i]를 임시로 저장
		number[i] = number[most]; //가장 큰 값을 현재 위치로 이동
		number[most] = temp; //임시 저장된 값을 교환함.
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%5d\t", number[i]); //%5d는 각 숫자를 5자리로 정렬해 출력
		if ((i + 1) % 10 == 0)  //10개씩 출력한 후 줄바꿈
			printf("\n");
	}

	return 0;
}
//1~10000 사이의 난수 100개를 생성해 배열에 저장하고, 선택정렬을 사용해 내림차순으로 정렬하는 프로그램.
//정렬된 배열을 10개씩 출력함.
