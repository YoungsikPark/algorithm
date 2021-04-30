#include<stdio.h>
 
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    
    while(n > 0)
    {
        cnt++;
        n -= cnt;
    }
 // 위아래 분모를 따로계산하고, 등비 등차를 계산하면 된다.
 // 문제설명이 좀 난해했음. 
    if(cnt % 2 == 0) 
    {
        printf("%d/%d", cnt +n, 1 + (-n)); 
    }
    else
    {
        printf("%d/%d", 1 + (-n), cnt +n);
    }
    return 0;
}
