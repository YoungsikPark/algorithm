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
		ma = n/bong_5; // 5�� �������� ��(ù��° ����) 
		na = n%bong_5; // 5�� �������� ������ 
			
		if((na<=3)&&(na!=0))  // �������� 3�����̰� 0�� �ƴҶ� 1������ ������ �Ǵϱ�  
		{
			na = 1;
			printf("1 : %d\r\n",ma+na);
		}
		else     // �������� 3�̻��̰� 0�϶�  (4�϶���+1 ����ϸ� �ȴ�) 
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
			na = na/bong_3; // �������� �������� 
			na_temp = na%bong_3; //  �������� �������� ������ 
			if((na_temp<=3)&&(na_temp!=0))  // �������� ���� ���� 0�� �ƴϰ�, 3�̻��϶��� 1���� �� �ʿ�����  
			{
				printf("%d\r\n",ma+na+1);
			}    
			else{ // �������� 3���� ���� ���� 0�̰ų� 3���� �϶� 
				printf("%d\r\n",ma+na);			
			}
*/
