/*�ڿ��� M�� N�� �־��� �� M�̻� N������ �ڿ��� �� �Ҽ��� ���� 
��� ��� �̵� �Ҽ��� �հ� �ּڰ��� ã�� ���α׷��� �ۼ��Ͻÿ�.

���� ��� M=60, N=100�� ��� 60�̻� 100������ �ڿ��� �� �Ҽ���
 61, 67, 71, 73, 79, 83, 89, 97 �� 8���� �����Ƿ�, 
 �̵� �Ҽ��� ���� 620�̰�, �ּڰ��� 61�� �ȴ�.*/
 
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

//https://unie2.tistory.com/305?category=883182 Ʋ���Ŷ� ���ذ��鼭 ���ι��� �������� Ȯ���ϱ� 
