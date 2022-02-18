#include<stdio.h>
#include<string.h>

int main(){
    
    char word[1000001]; //문자열만 가능  
    int alphabetCnt[26]={0,}; // 알파벳 수자
    int count[1000001]={0,};
    int i,j,k = 0;

    scanf("%s",word);
    for(int i = 0;word[i];i++){   
        if(word[i]>='a' && word[i]<='z')
        {
            word[i] -= 32;
        }
    } // 모든 입력받은 문자를 대문자로 변환 (소문자 아스키 코드값이 더 높음)

    for(int i=0;word[i];i++){
        for(int j=0;word[j];j++)
        {
            if(word[i]==word[j]){
            count[i]++;
            }
        }
    }
    
    // 대문자중 중첩되어 있는 문자열을 확인
}