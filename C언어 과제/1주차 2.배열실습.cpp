#include<stdio.h>
#include <stdlib.h> // rand()와 srand() 함수를 사용할 때 필요함.
#include <time.h>
int main()
{
	int number[10];

	srand(time(NULL)); 

	for (int i = 0; i < 10; i++) {
		number[i] = (rand() % 100) + 1;
	}
	// rand() 는 매우 큰 정수 범위에서 난수를 반환한다.(랜덤으로는 아니고 계속 같은 값만 반환함)

	for (int i = 0; i < 10; i++) {
		printf("number = %d\n", number[i]);
	}

	return 0;

}
// 랜덤으로 결과 값을 바꾸고 싶다면 srand를 써주는데 괄호 안에 (time(NULL)을 써줘야지 값이 계속 반환되어 랜덤으로 나올 수 있게 한다.
// time(NULL)은 현재 시간을 초 단위로 반환합니다.
