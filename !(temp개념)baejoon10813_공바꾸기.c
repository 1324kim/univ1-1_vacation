#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int box[n];

    for (int i = 0; i < n; i++)
    {
        box[i] = i + 1;
    }

    int a, b, temp;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        temp = box[a-1];
        box[a-1] = box[b-1];
        box[b-1] = temp; 
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", box[i]);
    }
    

    return 0;
}