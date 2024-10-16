#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
//inputRandomArray() : 함수 - 난수 입력
void inputRandomArray(int* array, int size) {
    for (int i = 0; i < size; i++) {
        *(array + i) = rand() % 100;
    }
}
//int* array: 배열의 포인터임. 배열을 함수에 전달하면 내부적으로 포인터로 처리
//int size: 배열의 크기를 전달받음
//rand() % 100: 0에서 99 사이의 난수를 생성
//*(array + i): 포인터 연산을 사용해 배열의 각 요소에 난수를 저장

//printArray() : 함수 - 배열 출력
void printArray(int* array, int size) {
    for (int i = 0; i < size; i++) { //int* array: 배열의 포인터
        printf("%3d\t", *(array + i)); //정수를 3자리로 맞춰 배열의 각 요소를 출력
        if ((i + 1) % 10 == 0) printf("\n"); //10개마다 줄바꿈
    }
}

int main() {
    int number[SIZE]; //크기가 100인 정수형 배열 선언

    srand(time(NULL));
    inputRandomArray(number, SIZE); //배열에 난수를 채운다
    printArray(number, SIZE); //배열의 내용 출력

    return 0;
}

// 주소값에 +, - 연산이 가능함
// 어떤 자료형의 주소를 가지고 있는가에 따라 결과가 달라짐[정수형은 +4, 문자는 +1이 더해진다
// 포인터 연산은 덧셈과 뺄셈만 가능하다(다음번지, 이번번지의 개념으로 처리하기 때문이다)
// int* array 와 int array[ ] 같다.
//*(array+1)를 array[i]로 바꿀 수 있다.
