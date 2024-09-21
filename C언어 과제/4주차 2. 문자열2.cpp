#include <stdio.h>

int main() {

	char message2[5] = { 'a', 'b', 'c', 'd', '\0' };
	char message[5] = { 'a', 'b', 'c', '\0' };
	printf("message = %s, message2 = %s", message, message2);
	
	return 0;
}

// 문자열은 문자가 연속으로 여러 개 이어져 있다.
// 문자열은문자의 배열에 저장한다.
// 배열의 마지막에는 NULL 문자를 넣기로 약속한다.
// %s 는 문자열 형식으로 출력 / message 배열의 시작 주소
// 문자열의 끝은 nulll문자('\0')으로 끝나야 한다. 
// 배열의 복사는 각각의 값을 복사해야 함
// 문자와 문자열 처리 함수를 통해 해결
  