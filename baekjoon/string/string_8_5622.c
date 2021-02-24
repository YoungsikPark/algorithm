#include <stdio.h>

int main()
{
    int time[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
    char word[16]={0,};
    int result = 0;

    scanf("%s",word);
    for(int i=0;word[i]!='\0';i++){
        result += time[word[i]-'A']; //아스키 문자 A로 기준값을 잡는다. 소문자면 값이 달라질수 있음. 대문자변경식 넣을까?
    }
   printf("%d",result);
   
}