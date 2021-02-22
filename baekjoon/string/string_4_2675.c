#include<stdio.h>
#include<string.h>

int main() 
{
	int T, N;
	char S[21]; //문자열만 가능  
	while(1)
	{
		scanf("%d", &T); //총  숫자회수 1000미만.	 
		if((T<0)||(T>1000)||(T==0)){
			printf("error only 0<R<1000\r\n");
		}
		else{
			break;
		}
	}
	 
	for (int i = 0; i < T; i++)
	{
		while(1)
		{
			scanf("%d", &N); // 반복할 숫자 예외처리할것 
			if((N<0)||(N>8)||(N==0)){
				printf("error only 1<R<8\r\n");
			}
			else{
				break;
			}
		}
		scanf("%s", S); //실제들어갈 문자열입력받기 예외처리 필수. 
		{
			for (int j = 0; j < strlen(S); j++)  // 문자열 입력받은 개수만큼 반복 20개 넘지않는다 
			{
				for (int k = 0; k < N; k++)
				printf("%c", S[j]);    // 한 문자를 반복하기 위해 j 값을 넣어줌
			}	
			printf("\n");
		}		
	}
}