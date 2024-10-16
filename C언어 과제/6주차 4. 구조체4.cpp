#include <stdio.h>
#include <math.h>
typedef struct point {
	int x;
	int y;
} POINT;

typedef struct circle {  // typedef 사용시 tag가 없어도 됨.
	POINT center; // 원의 중심
	double radius; // 반지름
}CIRCLE;

typedef struct rect {
	POINT LB; // left bottom
	POINT rt; // right top
}RECT;

double dist(POINT p1, POINT p2) {
	return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
}
int main()
{
	// 원 구조체 인스턴스 생성 및 초기화
	CIRCLE c1 = { {10, 10}, 4.5 }; //원 c1을 생성하고, 중심 좌표를 (10, 10)으로, 반지름을 4.5로 초기화

	//두 번째 원 구조체 인스턴스 생성 및 초기화
	CIRCLE c2; //원 c2를 선언
	c2.radius = 5.5; //반지름을 5.5로 설정
	c2.center.x = 10; //중심의 x좌표를 10으로 설정
	c2.center.y = 20; //중심의 y좌표를 20으로 설정
	POINT point = { 10, 15 }; //점 point을 생성하고, 좌표를 (10, 15)로 초기화
	double distance; 

	//원 c1과 c2의 중심 좌표 및 반지름, 그리고 점 point의 좌표를 출력
	printf("CIRCLE1 = (%d, %d), r : %lf\n", c1.center.x, c1.center.y, c1.radius);
	printf("CIRCLE2 = (%d, %d), r : %lf\n", c2.center.x, c2.center.y, c2.radius);
	printf("point = (%d, %d)\n", point.x, point.y);

	//거리 계산 및 원 안에 있는지 확인
	distance = dist(c2.center, point); // 점 point와 원 c2의 중심 간의 거리를 계산
	if (distance <= c2.radius) {
		printf("원 안에 있습니다.\n");
	}
	else {
		printf("원 밖에 있습니다.\n");
	}
	//if문을 통해 계산된 거리가 원의 반지름부다 작거나 같은면 원 안에 있다를 출력하고 아니면 원 밖에 있음을 출력한다.

	return 0;
}
