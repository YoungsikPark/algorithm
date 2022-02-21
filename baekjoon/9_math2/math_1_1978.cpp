#include <stdio.h>

int main()
{
	int N;
	int div,count = 0;
	int i,j;
	
	scanf("%d",&N); // 몇개 입력할껀지

	for(i = 0; i<N; i++)
	{
		scanf("%d", &div); //소수를 판별할 값 
		for(j=2; j<=div; j++)
		{ // 1은 소수가 아니기떄문. 	
			if(div == j)
				count++; 
			if(div%j == 0)
				break;
		}
	}
	printf("%d\n",count);
	return 0;
}
