#include <stdio.h>

int main()
{
	int N;
	int div,count = 0;
	int i,j;
	
	scanf("%d",&N); // � �Է��Ҳ���

	for(i = 0; i<N; i++)
	{
		scanf("%d", &div); //�Ҽ��� �Ǻ��� �� 
		for(j=2; j<=div; j++)
		{ // 1�� �Ҽ��� �ƴϱ⋚��. 	
			if(div == j)
				count++; 
			if(div%j == 0)
				break;
		}
	}
	printf("%d\n",count);
	return 0;
}
