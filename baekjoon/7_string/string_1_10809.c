#include <stdio.h>
#include <string.h>

int main()

{
    char s[100]; //input 문자열
    int arr[26]; //알파벳 위치 표시 배열
    int i;       //iterative
 
    scanf("%s", s);  
    for(i=0; i<26; i++)
    {
        arr[i]=-1;                  //알파벳 위치 -1(없음)로 초기화
    }
 
    for(i=0; i<strlen(s); i++)      //문자열 길이만큼 반복하는데
    {   if(arr[s[i]-97]==-1)        //만약 (아스키코드-97)가 -1(처음나온경우)라면
        {   
             arr[s[i]-97]=i;        //알파벳이 나온 위치를 넣기
        }
    }

    for(i=0; i<26; i++)
    {
        printf("%d ", arr[i]);      //출력
    }
    return 0;

}
