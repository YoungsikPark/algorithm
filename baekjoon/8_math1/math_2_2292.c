#include <stdio.h>
int main(void) { 
  
    int n, i, ans = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        ans += (i-1) * 6;
        if (n <= ans) break;
    }

    printf("%d\n", i);
    return 0;
}