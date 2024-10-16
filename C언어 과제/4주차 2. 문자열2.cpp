#include <stdio.h>

int main() {

	char message2[5] = { 'a', 'b', 'c', 'd', '\0' }; //문자 5개를 저장할 수 있는 배열을 선언
	char message[5] = { 'a', 'b', 'c', '\0' }; //위에랑 똑같은 용도
	printf("message = %s, message2 = %s", message, message2);
	//널 문자(\0)이 등장하면 문자열 출력을 종료함.
	return 0;
}
// 이 코드는 문자 배열을 이용한 문자열 출력을 보여주는 프로그램
// %s 는 문자열 형식으로 출력 / message 배열의 시작 주소
//char 배열은 문자열을 저장할 때 사용되며, 
// 문자열의 끝을 나타내는 널 문자(\0)가 반드시 필요함.
