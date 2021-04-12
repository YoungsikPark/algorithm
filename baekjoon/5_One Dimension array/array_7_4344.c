#include <stdio.h>
int main()
{
    int test, student_input, score_sum;
	float avg;
    int inArr[1000], upscore=0; 

    scanf("%d", &test); //테스트 케이스 
  
    for(int i=0;i<test;i++){
        scanf("%d", &student_input); //몇명 입력받을지

        for(int j=0; j<student_input; j++) {
            scanf("%d", &inArr[j]); // 점수입력받아서 바로바로 더함
            score_sum += inArr[j];
        }
    	avg = (float)score_sum/student_input; //입력받아서 평균을 구하는 곳 
        for(int k=0; k<student_input; k++) {
           if(avg<inArr[k]){
            upscore++;}
        } 
        printf("%.3f%%\n", (float)upscore*100/student_input); //*100해서 퍼센트 확인 및 소수점 둘째자리 까지 표현 
        score_sum = 0; 
		upscore = 0;
    }
}