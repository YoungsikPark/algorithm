#include<stdio.h>
#include<string.h>

int main() 
{
	int N1, N2;
	char S[21]; //문자열만 가능  
	while(1)
	{
		scanf("%d", &N1); //총  숫자회수 1000미만.	 
		if((N1<0)||(N1>1000)||(N1==0))
		{
			printf("error\r\n"); //0 보다 작고 1000보다 크면 에러로 판별. 안바꿤
		}
		else
		{
			break;
		}
		//while문으로 넣을까?	
	}
	 
	for (int i = 0; i < N1; i++)
	{
		printf("gogo2");
		scanf("%d", &N2); // 반복할 숫자 예외처리할것 
		scanf("%s", S); //실제들어갈 문자열입력받기 예외처리 필수. 
		{
			for (int j = 0; j < strlen(S); j++)  // 문자열 입력받은 개수만큼 반복 20개 넘지않는다 
			{
				for (int k = 0; k < N2; k++)
				printf("%c", S[j]);    // 한 문자를 반복하기 위해 j 값을 넣어줌
			}	
			printf("\n");
		}		
	}
}
\