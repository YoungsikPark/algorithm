#include <stdio.h>
#include <string.h>

int main(){
    int cnt = 0;
    char s[1000000]={0,};

    scanf("%[^\n]s",s); // 공백을 포함하여 입력받기 %[^\n]s
    
    for(int i = 0; s[i]!='\0';i++){
        if(s[i]==' '){
        cnt++;    
        }
        if((s[0]==' ')&&(s[strlen(s)-1]==' ')){
            cnt -=2;
        }
        else if(s[0]==' '){
            cnt -=1;
        }
        else if(s[strlen(s)-1]==' '){
            cnt -=1;
        }
    }
    printf("%d",cnt);
    return 0;
}
//위 소스코드와 비교해볼것.
# include <stdio.h> 
int main() {
    int i,cnt=0; 
    char s[1000001]; 
    scanf("%[^\n]s",s);
    
    for(i = 0; s[i]!='\0'; i++) { 
      if(s[i] !=' ') { 
        if(i>0 && s[i-1] != ' ') 
            continue; 
         else 
             cnt++; 
      } 
    } 
    
    printf("%d",cnt); 
    return 0; 
}