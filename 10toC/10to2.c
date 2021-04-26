#include<stdio.h>

int main() {

    unsigned char num;
    printf("10진수:");
    scanf("%d", &num);

    printf("2진수:");//이진수 출력
    for (int i = 7; i >= 0; --i) { //8자리 숫자까지 나타냄
        int result = num >> i & 1; //비트 연산자 >> (자릿수)를 활용하여 비트를 우측 끝으로 이동
        printf("%d", result);
    }
}