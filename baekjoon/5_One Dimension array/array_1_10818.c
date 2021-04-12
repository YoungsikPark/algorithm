#include<stdio.h>

int s,i;
int min = 1000001;
int max = -1000001;
int target = 0;

int main(){
	while(1){
		scanf("%d",&s);
		if((s>0)&&(s<1000000))	{
			break;
		 }
    }
    
    for(i=0;i<s;i++)
    {
    	scanf("%d", &target);

        if (target < min) {
            min = target;
        }
        if (target > max) {
            max = target;
        }
	}
	printf("%d %d",min,max);
}