#include<stdio.h>

char s[1000005],ans;
int num, cnt[26],maxi; // 컴파일러, 기본값에 따라 모든값이 0이다 
int main(){
    scanf("%s",s); 

    for(int i = 0; s[i] != NULL;i++){
        if('a'<=s[i] && s[i]<='z'){
            num = s[i]-'a'; // 알파벳의 개수만큼 뺴준다 
        }
        else{
            num = s[i]-'A';
        }
        cnt[num]++; // 같은 알파벳이 나오게 되면 바로출력 
        
		if(maxi<cnt[num]){
            maxi = cnt[num]; // 같은경우 대문자로 확인하기 위해 +A를 해준다 
            ans = num+'A';
        }
        else if(maxi == cnt[num]){ //개수가 같을경우에는 ? 
            ans = '?';  
        }
    }
    printf("%c",ans);
}