#include <stdio.h>
int main(){
    char string[1001];
    int num;
    scanf("%s %d", &string, &num); //&string => strinig 이것도 되네
    printf("%c", string[num-1]);
    return 0;
}