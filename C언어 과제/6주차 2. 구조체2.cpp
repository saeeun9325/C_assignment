#include <stdio.h>

struct point {
	int x;
	int y;
};

int main()
{
	struct point p1 = { 10, 20 };
	struct point p2;
	printf("구조체 p1의 멤버변수 x,y의 값 : (%d, %d)\n", p1.x, p1.y);
	printf("구조체 p2의 멤버변수 x,y의 값 : (%d, %d)\n", p2.x, p2.y);
	p2.x = 30;
	p2.y = 45;
	printf("구조체 p1의 멤버변수 x,y의 값 : (%d, %d)\n", p1.x, p1.y);
	printf("구조체 p2의 멤버변수 x,y의 값 : (%d, %d)\n", p2.x, p2.y);

	return 0;
}
