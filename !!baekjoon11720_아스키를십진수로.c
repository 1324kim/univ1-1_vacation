#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    char arr[n];
    scanf("%s", &arr);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i] - 48;
        /*1  2  3  4  5
          49 50 51 52 53*/
    }
    printf("%d", sum);
    

    return 0;
}