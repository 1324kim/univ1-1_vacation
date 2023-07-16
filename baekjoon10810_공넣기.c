#include <stdio.h>

int main(){

    int n, m;
    scanf("%d %d", &n, &m);
    
    int box[n], a, b, c;

    for (int i = 0; i < n; i++)
        box[i] = 0;
    
    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &a, &b, &c);
        for (int i = a; i <= b; i++) {
            box[i-1] = c;
        }
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", box[i]);
    }
    
    return 0;
}