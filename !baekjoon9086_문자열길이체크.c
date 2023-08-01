#include <stdio.h>
int main(){
    char str[1001];
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int count = 0, a = 0;
        scanf("%s", &str);
        while(str[a++] > 0) count++;
        printf("%c%c\n", str[0], str[count-1]);
    }
    return 0;
}