#include <stdio.h>

int main()
{
	int n,ma,na_temp=0;
	unsigned int na = 0;
	int bong_3 = 3;
	int bong_5 = 5;
	
	while(1)
	{
		scanf("%d",&n);
		if((3<=n)&&(n<=5000)){
			break;
		}
	}

	if(n<5)
	{
        if(n % bong_3==0)
        {
          printf("1\r\n");  
        }
        else
		printf("-1\r\n");
	}
	else
	{
		ma = n/bong_5; // 5로 나눈값의 목(첫번째 봉지) 
		na = n%bong_5; // 5로 나눈값의 나머지 
			
		if((na<=3)&&(na!=0))  // 나머지가 3이하이고 0이 아닐때 1봉지로 끝나게 되니까  
		{
			na = 1;
			printf("1 : %d\r\n",ma+na);
		}
		else     // 나머지가 3이상이고 0일때  (4일때만+1 계산하면 된다) 
		{
			printf("else\r\n");
			if(na>3)
			{
				na = 2;	
				printf("2: %d\r\n",ma+na);
			} 
			if(na==0)
			{
				printf("3: %d\r\n",ma);
			}
		}
	}	
}




/*
			na = na/bong_3; // 나머지값 나눠버림 
			na_temp = na%bong_3; //  나머지를 나눈값의 나머지 
			if((na_temp<=3)&&(na_temp!=0))  // 나머지를 나눈 몫이 0이 아니고, 3이상일때는 1봉지 더 필요하지  
			{
				printf("%d\r\n",ma+na+1);
			}    
			else{ // 나머지를 3으로 나눈 몫이 0이거나 3이하 일때 
				printf("%d\r\n",ma+na);			
			}
*/
