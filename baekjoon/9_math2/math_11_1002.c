#include <stdio.h>
#include <math.h>

int main(void)
{
	int d, dx, dy, x1 ,x2 , y1, y2, r1,r2;
	int i, T , temp ,add ,sub;
	
	scanf("%d",&T);
	for(i=0; i<T ; i++)
	{
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		dx = x1 - x2;
		dy = y1 - y2;
		
		// r1,r2 swap()�Ǵ�
		if(r1>r2)
		{
			temp =r1;
			r1 = r2;
			r2 -temp;
		 } 
		 //�񱳰� ���
		 add = r1+r2;
		 add = pow(add,2);
		 sub = r2 -r1;
		 sub = pow(sub,2);
		 d = pow(dx,2)+pow(dy,2);
		 
		 //���� �Ǵ� �� ���
		 if( d<add && d>sub ) // �� ���� �������� ������ ���  (������ 2��)
		 {
		 	printf("2"); 
		 }
		 else if( d == add || (d == sub && d!=0) ) //�� ���� �����ϰų� �����ϴ� ��� (������ 1��)
		 {
		 	printf("1");
		 }
		 else if( d<sub || d>add ) // ������ 0�� �ΰ�� 
		 {
		 	printf("0");
		 }
		 else if (d == 0)  // �ο��� ��ġ�ϴ� ��� 
		 {
		 	 if(r1 == r2)   
		 	 {
		 	 	printf("-1"); // ������ ���Ѵ� 
			 }
			 else
			 {
			 	printf("0"); // ������ 0 
			 }
		 }
		printf("\n"); 
	}
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <math.h> 
int main() 
{ 
  int testcase; 
  int x1, y1, r1, x2, y2, r2; 
  int i = 0; 
  int intersection_point = 0;
  scanf("%d", &testcase); // �׽�Ʈ���̽��� ���� �Է� 
 
  for (i; i < testcase; i++) 
  { 
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2); 
	
		int sum = r1 + r2; // �� ���� �������� �� 
		int difference = abs(r1 - r2); // �� ���� �������� �� 
		// �� ���� �߽� ������ �Ÿ� 
		double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); // 1. �� ���� ��ġ�ϴ� ��� (������ ���Ѱ�) 
		  
		if (distance == 0 && r1 == r2) { 
		  intersection_point = -1; 
		} // 2. �� ���� �����ϰų� �����ϴ� ��� (������ 1��) 
		else if (distance == sum || distance == difference) { 
		  intersection_point = 1; 
		} // 3. �� ���� �������� ������ ��� (������ 2��) 
		else if (difference < distance && distance < sum) { 
		  intersection_point = 2; 
		} // 4. �� ���� ������ �ʴ� ��� (������ 0��) 
		else{
		  intersection_point = 0; 
		}
	    printf("%d\n", intersection_point); 
  } 
  return 0; 
}

