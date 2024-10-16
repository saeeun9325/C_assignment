#include <stdio.h>
#include <math.h>

//point라는 이름의 구조체를 정의하고, 이를 POINT라는 별칭으로 사용
typedef struct point{
	int x;
	int y;
} POINT;

// 원 구조체 정의
typedef struct{  // CIRCLE이라는 이름의 새로운 구조체를 정의, typedef 사용시 tag가 없어도 됨.
	POINT center; // 원의 중심
	double radius; // 반지름을 나타내는 실수형 변수
}CIRCLE; 
//이 구조체는 태그가 없음.

//사각형 구조체 정의
typedef struct rect{
	POINT LB; // left bottom 왼쪽 아래 모서리 좌표
	POINT rt; // right top 오른쪽 위 모서리 좌표
}RECT;

//두 점 p1과 p2 사이의 거리 계산 함수 정의
double dist(POINT p1, POINT p2) {
	return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}
int main()
{
	//점 구조체 인스턴스 생성 및 초기화
	struct point p1 = { 10, 20 }; //
	struct point p2;
	double d;
	
	//점의 좌표 수정
	p1.x = 20;
	p2.x = 30;
	p2.y = 40;
	
	//점 좌표 출력
	printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y);
	printf("p2.x = %d, p2.y = %d\n", p2.x, p2.y);
	
	//두 점 간의 거리를 계산하고 출력함.
	printf("distance of p1, p2 = %lf", dist(p1, p2));
	
	return 0;
}
//구조체는 값을 복사(call by value)해서 전달한다.
