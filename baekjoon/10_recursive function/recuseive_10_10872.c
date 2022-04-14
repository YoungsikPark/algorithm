#include <stdio.h>

int main()
{
	int d ,fact = 1;
	scanf("%d",&d);
	for (int i=2; i<=d; i++)
	{
		fact *= i;
	}
	printf("%d\n",fact);
	return 0;
}

//함수사용
#include <stdio.h>
 
int fact(int n) {
    if (n > 1)
        return n * fact(n - 1);
    else return 1;
}
 
int main() {
    int N;
    scanf("%d", &N);
    printf("%d\n", fact(N));
    return 0;
} 
