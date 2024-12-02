#include <stdio.h>

//사용자 정의 함수
int my_getline(char* line) {  //getline → my_getline으로 이름 변경했음 : C 표준 라이브러리의 getline 함수와 충돌 방지하기 위해서
    int ch;
    int i = 0;
    while((ch = getchar()) != '\n') line[i++] = ch; //한 문자씩 입력받아 '\n'(엔터 키)까지 반복 , 입력된 문자는 변수 ch에 저장하고 i를 증가시킴
    line[i] = '\0'; //문자열의 끝에 널 문자('\0')를 추가하여 C 스타일 문자열을 만듦
    return i;
}

//메인 함수
int main() {
    char input[100]; //한 줄 입력을 저장할 문자열 버퍼. 최대 99자까지 입력 가능
    FILE* fp; //파일 포인터로, 파일 작업(열기, 쓰기, 닫기)에 사용됌.

    //파일 열기
    if((fp = fopen("output.txt", "w")) == NULL) { //파일을 쓰기 모드로 연다. , 파일이 존재하지 않으면 새로 생성하기
        printf("error..."); //파일 열기 실패시 fopen은 NULL을 반환
        return 0; //프로그램 종료
    }
    //사용자 입력 및 파일 기록
    for(int i = 0; i < 5; i++) {  //5번 반복하여 사용자 입력을 처리
        my_getline(input); //한 줄 입력을 받아 input 배열에 저장
        fputs(input, fp); //input 배열의 내용을 파일 포인터 fp가 가리키는 파일(output.txt)에 씀.
        fputs("\n", fp); //각 줄 끝에 줄바꿈(\n)을 추가하여 파일에 저장
    }
    
    //파일 닫기
    fclose(fp); //열려 있는 파일을 닫고, 모든 파일 작업을 종료

    return 0;
}

//교수님 결과값 
//aaa
//bbb
//ccc
//ddd
//eee
    
