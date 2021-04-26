#include <math.h> 
#include <stdio.h> 

int input_data(double *a, double *b, double *c) 
{ 
   printf("계수 a 를입력하시오 : "); 
   scanf("%lf", a); 
   printf("계수 b 를입력하시오 : "); 
   scanf("%lf", b); 
   printf("계수 c 를입력하시오 : "); 
   scanf("%lf", c); 
   
    if((*a==0)&&(*b==0))
	{
	  return 0;  //a와 b의 값이 모두 0인경우에는 무한음수(#IND00)에 빠질수 있기때문에 return 값을 0으로 함 
	}
	else
	{  
	  return 1; 
	}
} 

void calculate(double a, double b, double c) 
{ 
    double D; double x1, x2; // 2차 방정식의 판별식 

	D = (b * b) - 4 * a *c;  // b^2-4ac 
	
	if(a == 0) // 중근
    {
	  printf("방정식의 근은 %.6lf 입니다 \n", (-c / b)); 
	} 
    else if(D < 0) // 허근 
    { 
      printf("실근은 존재하지 않습니다\r\n");
    } 
    else // 실근
	{
     printf("방정식의 근은 %.6lf 입니다 \n", (-b + sqrt(D)) / (2 * a)); 
	 printf("방정식의 근은 %.6lf 입니다 \n", (-b - sqrt(D)) / (2 * a)); 
	} 
} 

int main(int argc, char **argv) 
{ 
  double a, b, c; 
  while(1) 
  { 
    if(input_data(&a, &b, &c) == 0) 
	{ 
 		continue;  // 3개의 값이 0으로 나올때는 넘어가지 않음 
	} 	 
	 calculate(a, b, c); 
	return 0; 
  } 
}