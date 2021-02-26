#include <stdio.h>
 
int main()
{
    int n, cnt = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
    {
        bool alphabet[26] = { 0 }, overlap = false; // false
        char input[100];
        int aryNum;
        scanf("%s", &input);
        for(int j = 0; input[j]; j++)
        {
            if(input[j] < 91) aryNum = input[j] - 65;
            else aryNum = input[j] - 97;
 
            if(alphabet[aryNum])
            {
                if(input[j-1] != input[j])
                {
                    overlap = true;
                    break;
                }
            }
            else
                alphabet[aryNum] = true;
            
        }
        if(!overlap) cnt++;
    }
    printf("%d", cnt);
    return 0;
}