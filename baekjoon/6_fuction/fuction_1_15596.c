//언어설정 c17 lang으로 해야됨.. 퍼킹
long long sum(int *a, int n) { 
    int i; long long num = 0; 
    for(i = 0; i<n; i++) { 
        num +=a[i]; 
    } 
    return num; 
}
