#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 100
typedef struct point {
	int x;
	int y;
} POINT;
 
//input_random_point: 랜덤한 점을 생성하여 배열에 저장하는 함수
//POINT* p: POINT 구조체 배열의 포인터
//int size: 점의 개수
void input_random_point(POINT* p, int size)
{
	srand((time(NULL)));
	//for 루프를 통해 랜덤한 x좌표와 y좌표를 생성하는 부분
	for (int i = 0; i < size; i++) {
		(p + i)->x = rand() % 101;
		(p - i)->y = rand() % 101;
	}
}

//점 교환 함수
void swap_point(POINT* p1, POINT* p2) //swap_point: 두 점의 값을 교환하는 함수
{
	POINT temp;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}
//점 배열 출력 함수
void print_point_array(POINT p[], int size)
{
	for (int i = 0; i <size; i++) {
		printf("p[%3d] : (%3d,%3d)\n", i, p[i].x, p[i].y);
	}
}
//POINT p[]: 점 배열
//int size: 점의 개수

//선택 정렬 함수
//selsction_sort_point: 선택 정렬 알고리즘을 사용하여 점 배열을 정렬하는 함수
void selsction_sort_point(POINT* point, int size) {
	int least;
	for (int i = 0; i < SIZE - 1; i++) {
		least = i;
		for (int j = i + 1; j < SIZE; j++) {
			if (point[least].x > point[j].x) least = j;
			else if ((point+least)->x == point[j].x && point[least].y > point[j].y)
				least = j;
		}
		swap_point(&point[i], point + least);
	}
} //점 교환: 최종적으로 찾은 최소 점과 기준 점을 교환

int main()
{
	//크기가 SIZE인 POINT 구조체 배열을 선언하고 모든 값을 0으로 초기화
	POINT point[SIZE] = { 0 };
	POINT temp = { 0,0 };
	int least;

	input_random_point(point, SIZE); //랜덤한 점을 생성하여 배열에 저장
	print_point_array(point, SIZE); //생성된 점 배열을 출력
	selsction_sort_point(point, SIZE); //점 배열을 정렬
	printf("after sorting>>>>>>>>>>>>>>>>>>>>>>\n"); //정렬 후 다시 출력
	print_point_array(point, SIZE);
	return 0;
}
