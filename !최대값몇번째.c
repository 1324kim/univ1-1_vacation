#include <stdio.h>

int main()
{
    int num, count, max = 0;
    for(int i = 0; i < 9; i++){
        scanf("%d", &num);
        if(num > max){
            count = i + 1;
            max = num;
        }
    }
    printf("%d\n%d", max, count);
    return 0;
}