#include<stdio.h>
int main() {
	int i, j, m, n, a[1000001] = { 0,1 }; //1은 소수가 아니므로 a[1]=1로 초기화
	scanf("%d%d", &m, &n);

	for (i = 2; i <= n; i++){ 
		for (j = 2; i*j <= n; j++){	
		a[i*j] = 1; //소수가 아닌 경우 1로 만들어준다.
		}
	}
	
	for (i = m; i <= n; i++){
		if (!a[i]) printf("%d\n", i);
	}
	return 0; 
} 

//에라스토테네스의 체를 아느냐 모르느냐.. 그것이 문제였던 거시었던 거시었다 
