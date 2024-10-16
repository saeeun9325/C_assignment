#include <stdio.h>

int main() {

	int ch;
	char message[100]; //최대 100개 문자 저장가능한 문자배열이다.
	int i = 0; //배열의 인덱스를 관리하는 변수
	//getchar()를 통해 하나의 문자를 저장

	// getchar() : 사용자가 엔터(Enter, \n)를 입력할 때까지 반복
	while ((ch = getchar()) != '\n') { //ch에 입력된 문자를 저장
		message[i++] = ch; //입력된 문자(ch)를 배열 message에 저장, i++로 다음 문자가 저장될 인덱스를 증가 시킨다.
	}
	message[i] = '\0'; //배열에 저장된 문자를 문자열로 만들기 위해 **널 문자(\0)**를 마지막에 추가
	printf("%s", message);
	return 0;
}
// 사용자가 입력한 문자열을 배열에 저장하고 출력하는 프로그램
// stdio.h 헤더파일에는 2개의 함수가 존재한다.(getchar, printf)
// 1번째 : int getchar(void); 키보드 에서 문자 1개를 입력받아 반환
// 2번째 : int putchar(int ch);  ch로 받은 문자를 화면에 출력, 해당 문자 반환
// getchar() : 엔터키 입력시 종료한다.
//printf()가 문자열을 출력할 때 널 문자를 만나면 출력을 멈춤
