#include <stdio.h>
#include <math.h> //수학 함수를 사용하기 위해 포함합니다. 
//여기서는 제곱근(sqrt)과 제곱(pow)을 사용

//두 개의 정수형 멤버 x,y를 가지는 구초제를 의미한다.
struct point { 
    int x;
    int y;
};

//dist 함수: 두 점 p1과 p2 사이의 거리를 계산
double dist(struct point p1, struct point p2) {
    return sqrt(pow((p2.x - p1.x), 2) + pow((p2.y - p1.y), 2));
} //x좌표와 y좌표 차이의 제곱을 계산하고 이 두 값을 더한뒤, 
//sqrt 함수를 사용해 제곱근을 구하여 두 점 간의 거리를 반환한다.

//점 구조체 인스턴스 생성 및 초기화
int main() {
    struct point p1 = { 10, 20 }; //점 p1을 x좌표 10, y좌표 20으로 초기화함.
    struct point p2; //점 p2를 선언하되, 초기값은 설정하지 않음.
    double d; //거리 결과를 저장할 변수 d를 선언

    //점의 좌표 수정
    p1.x = 20; //p1의 x좌표를 20으로 변경합니다. (y좌표는 여전히 20입니다.)
    p2.x = 30; //p2의 x좌표를 30으로 설정
    p2.y = 40; //p2의 y좌표를 40으로 설정

    //점 p1과 p2의 좌표 출력
    printf("p1.x = %d, p1.y = %d\n", p1.x, p1.y); 
    printf("p2.x = %d, p2.y = %d\n", p2.x, p2.y);

    //두 점 간의 거리를 계산하고 출력함.
    printf("distance of p1, p2 = %lf", dist(p1, p2));

    return 0;
}
