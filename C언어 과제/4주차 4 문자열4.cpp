#include <stdio.h>

int main() {

	int ch;
	char message[100];
	int i = 0;
	while ((ch = getchar()) != '\n') {
		message[i++] = ch;
	}
	message[i] = '\0';
	printf("%s", message);
	return 0;
}

//문자와 문자열의 입출력을 위한 함수가 별도로 존재한다.
// 문자 전용 입력과 출력 함수가 있다.
// stdio.h 헤더파일에는 2개의 함수가 존재한다.
// 1번째 : int getchar(void); 키보드 에서 문자 1개를 입력받아 반환
// 2번째 : int putchar(int ch);  ch로 받은 문자를 화면에 출력, 해당 문자 반환
// getchar() : 엔터키 입력시 종료한다. 
