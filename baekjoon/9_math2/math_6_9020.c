#include <stdio.h>
int main(void)
{
	int N, C, i,n, j;
	int arr[10001]={1,1,0};
	
	for(i=2;i*i<10001;i++)
		if(arr[i]==0)
			for(j=i*i;j<10001;j+=i)
				arr[j] = 1;
	
	scanf("%d",&C);
	
	
	for(n=0;n<C;n++)
	{
		scanf("%d",&N);
		
		for(i=N/2;i>=2;i--)
			if((arr[i]==0) &&(arr[N-i]==0))
			{
				printf("%d %d\n",i, N - i);
				break;
			}
	}
	
	return 0;
}
