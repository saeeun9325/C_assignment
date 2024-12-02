//텍스트 파일 복사하기

#include <stdio.h>

//사용자 정의 함수 my_getline
int my_getline(char* line) {
    int ch;
    int i = 0;
    while((ch = getchar()) != '\n') line[i++] = ch;
    line[i] = '\0';
    return i;
}

int main() {
    char input[100];
    FILE* fp_src;
    FILE* fp_dest;

    //소스 파일 열기
    if((fp_src = fopen("output.txt", "r")) == NULL) { //파일 output.txt를 읽기 모드("r")로 엽니다. / 파일이 존재 하지 않거나 열기에 실패하면 NULL을 반환함.
        printf("error..."); //파일 열기 실패 시 에러 메시지를 출력하고 프로그램을 종료
        return 0;
    }
    //대상 파일 열기
    if((fp_dest = fopen("output2.txt", "w")) == NULL) { //파일 output2.txt를 쓰기 모드("w")로 엽니다./ 파일이 존재하지 않으면 새로 생성하고, 이미 존재하면 내용을 덮어씁니다.
        printf("error..."); //파일 열기 실패 시 에러 메시지를 출력하고 프로그램을 종료
        return 0;
    }
    //파일 복사 작업
    while (!feof(fp_src)) { //파일의 끝에 도달하지 않을 때까지 반복
        fgets(input, 100, fp_src); //소스 파일(fp_src)에서 최대 99자까지 읽어와 input 배열에 저장
        fputs(input, fp_dest); //읽어온 문자열(input)을 대상 파일(fp_dest)에 씁니다.
    }
    //파일 닫기
    fclose(fp_src); //소스 파일(output.txt)을 닫아 더 이상 사용되지 않음을 시스템에 알림.
    fclose(fp_dest); //대상 파일(output2.txt)을 닫습니다.

    return 0;
}
