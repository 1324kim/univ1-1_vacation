#include <stdio.h>
int main(){
    int attend[30] = {0}, num;
    for (int i = 0; i < 28; i++)
    {
        scanf("%d", &num);
        attend[num - 1] = 1;
    }
    for (int i = 0; i < 30; i++)
    {
        if(attend[i] == 0){
            printf("%d\n", i + 1);
        }
    }
        
    return 0;
}