/*자연수 M과 N이 주어질 때 M이상 N이하의 자연수 중 소수인 것을 
모두 골라 이들 소수의 합과 최솟값을 찾는 프로그램을 작성하시오.

예를 들어 M=60, N=100인 경우 60이상 100이하의 자연수 중 소수는
 61, 67, 71, 73, 79, 83, 89, 97 총 8개가 있으므로, 
 이들 소수의 합은 620이고, 최솟값은 61이 된다.*/
 
#include <stdio.h>
int main()
{
	int m,n,i,j;
	int sum=0,min=0,check=0;
	
	scanf("%d %d",&m,&n);

    for(i=m; i<=n; i++) {
        check=0;
        
        if(i == 1)
        {
        	continue ;
		}
		
        for(j=2;j<i;j++) {
            if(i%j == 0){
                check=1;
                break;
			}
        }
        
        if(check==0) {
            if (min == 0){
                min=i;
			}
            sum+=i;
        }
    }

	
	if(sum!=0)
		printf("%d\n%d\n",sum,min);
    else {
       printf("-1\n");
    }

	return 0;
}

//https://unie2.tistory.com/305?category=883182 틀린거랑 비교해가면서 라인바이 라인으로 확인하기 
