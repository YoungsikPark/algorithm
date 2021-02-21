#include<stdio.h>
#include<string.h>

int main(
    
    char word[1000001]; //문자열만 가능  
   // int alphabetCnt[26]={0,}; // 알파벳 수자
    int i ,k,count;

    scanf("%s",word);
    for(int i = 0;word[i];i++){   
        if(word[i]>='a' && word[i]<='z')
        {
            word[i] -= 32;
        }
    } // 모든 입력받은 문자를 대문자로 변환 (소문자 아스키 코드값이 더 높음)

    for(int i=0;word[i];i++){
        for(int j=0;word[j];j++){
            if(j<i){
            word[i]==word[j]
            break;
            else if(str[i] == str[j])
            count++;
        }
        if(word[0]==word[i]){
                count++;
        }
        if(str[1])==str[i]{
            count++
        }
        if(str[2]==str[i]{

        })
        else if(){
        }
    }
    
    // 대문자중 중첩되어 있는 문자열을 확인

    

)