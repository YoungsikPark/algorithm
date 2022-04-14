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
		
		// r1,r2 swap()판단
		if(r1>r2)
		{
			temp =r1;
			r1 = r2;
			r2 -temp;
		 } 
		 //비교값 계산
		 add = r1+r2;
		 add = pow(add,2);
		 sub = r2 -r1;
		 sub = pow(sub,2);
		 d = pow(dx,2)+pow(dy,2);
		 
		 //조건 판단 후 출력
		 if( d<add && d>sub ) // 두 원이 두점에서 만나는 경우  (교점이 2개)
		 {
		 	printf("2"); 
		 }
		 else if( d == add || (d == sub && d!=0) ) //두 원이 외접하거나 내접하는 경우 (교점이 1개)
		 {
		 	printf("1");
		 }
		 else if( d<sub || d>add ) // 교접이 0개 인경우 
		 {
		 	printf("0");
		 }
		 else if (d == 0)  // 두원이 일치하는 경우 
		 {
		 	 if(r1 == r2)   
		 	 {
		 	 	printf("-1"); // 교접이 무한대 
			 }
			 else
			 {
			 	printf("0"); // 교접이 0 
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
  scanf("%d", &testcase); // 테스트케이스의 갯수 입력 
 
  for (i; i < testcase; i++) 
  { 
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2); 
	
		int sum = r1 + r2; // 두 원의 반지름의 합 
		int difference = abs(r1 - r2); // 두 원의 반지름의 차 
		// 두 원의 중심 사이의 거리 
		double distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)); // 1. 두 원이 일치하는 경우 (교점이 무한개) 
		  
		if (distance == 0 && r1 == r2) { 
		  intersection_point = -1; 
		} // 2. 두 원이 외접하거나 내접하는 경우 (교점이 1개) 
		else if (distance == sum || distance == difference) { 
		  intersection_point = 1; 
		} // 3. 두 원이 두점에서 만나는 경우 (교점이 2개) 
		else if (difference < distance && distance < sum) { 
		  intersection_point = 2; 
		} // 4. 두 원이 만나지 않는 경우 (교점이 0개) 
		else{
		  intersection_point = 0; 
		}
	    printf("%d\n", intersection_point); 
  } 
  return 0; 
}

