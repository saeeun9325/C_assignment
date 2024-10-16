#include <stdio.h>
#include <time.h>
#include <stdlib.h> //동적 메모리 할당 및 난수 생성 함수 사용을 위한 헤더 파일
#define SIZE 100
typedef struct point {
	int x;
	int y;
} POINT;

int main()
{
	POINT point[SIZE] = { 0 }; //크기가 SIZE인 POINT 구조체 배열을 선언하고 모든 값을 0으로 초기화합니다. 
	//이 배열은 랜덤 점을 저장합니다.
	POINT temp = { 0,0 }; //정렬 중에 점을 교환할 때 사용할 임시 점 구조체 temp를 선언
	int least; //현재 정렬 과정에서 가장 작은 점의 인덱스를 저장할 변수

	srand(time(NULL));
	for (int i = 0; i < SIZE; i++) { //0부터 SIZE-1까지 반복하면서 각 점의 x좌표와 y좌표를 0에서 100사이의 랜덤 값으로 설정
		point[i].x = rand() % 101; //x좌표를 랜덤하게 설정
		point[i].y = rand() % 101; //y좌표를 랜덤하게 설정
	}

	//생성된 점 출력
	for (int i = 0; i < SIZE; i++) { //모든 점의 인덱스와 좌표를 출력함.
		printf("point[%d] : %d, %d)\n", i, point[i].x, point[i].y);
	}

	//점 정렬
	for (int i = 0; i < SIZE - 1; i++) {
		least = i;
		for (int j = i + 1; j < SIZE; j++) {
			if (point[least].x > point[j].x) least = j;
			else if (point[least].x == point[j].x && point[least].y > point[j].y)
				least = j;
		}
		temp = point[least];
		point[least] = point[i];
		point[i] = temp;
	}
	//최종적으로 찾은 최소 점과 기준 점을 교화한다.

	//정렬 후 결과 출력
	printf("after sorting>>>>>>>>>>>>>>>>>>>>>>\n");
	for (int i = 0; i < SIZE; i++) {
		printf("point[%d] : %d, %d)\n", i, point[i].x, point[i].y);
	}
	return 0;
}
