#include<stdio.h>
 int main(){
     int A,B,V;
     int day;

     scanf("%d %d %d",&A,&B,&V);

     day = (V-B-1)/(A-B)+1;
     printf("%d",day);
     return 0;
     // 달팽이가 목표지점에 도달한 날에는 미끄러 지는걸 감안하면 안됨!!
 }