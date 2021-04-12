#include<stdio.h>

int main() {

	int i, a, j, total=1;
	int buf[10] = {0,};

	for(i = 0; i < 3; i++) { 
		scanf("%d", &a);
		total *= a; // 숫자 3개 받은 후 바로바로 곱셈 
	}

	for(i = 0; total > 0; i++) {
		a = total % 10;  // 총값을 10으로 나눈 나머지값 
		buf[a] += 1;     
		total /= 10;
	}

	for(i = 0; i < 10; i++) {
		printf("%d\n", buf[i]);
	}
}