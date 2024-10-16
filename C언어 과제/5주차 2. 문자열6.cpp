#include <stdio.h>
#include <string.h> //문자열 관련 함수(strlen, strcpy, strcat, strcmp)를 사용하기 위해 포함

int main()
{
    char src[100]; //최대99개문자와 1개의 널 문자(\0)를 저장할 첫번째 문자열 배열
    char dest[100]; //두 번째 문자열 저장용 배열
    int result; //문자열 비교 결과를 저장할 변수
     
    //문자열 입력 - gets()함수
    gets(src); // 첫 번째 문자열 입력(문자열을 입력받아 해당 배열에 저장)
    gets(dest); // 두 번째 문자열 입력

    int length;

    gets(src); // 새로 입력된 문자열로 src 덮어씀
    length = strlen(src); //strlen() 함수는 널 문자(\0)를 제외한 문자열의 길이를 반환한다.
    printf("length of src = %d\n", length);
    //예: 입력이 hello라면 길이는 5이다.

    //문자열 복사 – strcpy()
    strcpy(dest, src); //src의 내용을 dest에 복사
    printf("src = %s, dest = %s\n", src, dest); //이제 dest와 src 배열의 값이 동일해짐

    //문자열 이어붙이기 – strcat()
    strcat(dest, src); //src를 dest의 끝에 이어 붙임.
    printf("src = %s, dest = %s\n", src, dest);

    //문자열 비교 – strcmp()
    result = strcmp(src, dest); //두 문자열을 사전 순서로 비교한다.
    printf("result = %d\n", result);
    //두 문자열이 같으면 0 반환.
    //src가 사전적으로 작으면 음수 반환, 크면 양수 반환

    return 0;
}
