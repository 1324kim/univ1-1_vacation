#include <stdio.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    int box[n];
    for (int i = 0; i < n; i++)
    {
        box[i] = i+1;
    }

    int a, b, length, temp;
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);
        length = b-a+1; //길이개념 기억
        for (int j = 0; j < (length)/2; j++)
        {
            temp = box[a+j-1];
            box[a+j-1] = box[b-j-1];
            box[b-j-1] = temp;
        }    
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", box[i]);
    }
    return 0;
}

/*
int main()
{
   int a[101];  
   int tmp;
   int N, M, i, j; 
   
   scanf("%d %d", &N, &M); 
   
   for (int i = 1; i <= N; i++) {
      a[i] = i; 
   }  

   
   while (M--) {                이런방법도 있는데 기억하면 좋을듯

      scanf("%d %d", &i, &j);
      
      while (!(i > j)) {

         tmp = a[i];
         a[i] = a[j];
         a[j] = tmp;
         i++;  
         j--;
      }
   }


   for (int i = 1; i <= N; i++) {
      printf("%d ", a[i]);
   }
}
*/