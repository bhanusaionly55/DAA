#include <stdio.h>
int main() {
   int arr[100],n;
   int i, j, position, swap;
   printf("enter the number of elements : ");
   scanf("%d",&n);
   for(i=0;i<n;i++){
   	scanf("%d",&arr[i]);
   }
   for (i = 0; i < (n - 1); i++) {
      position = i;
      for (j = i + 1; j < n; j++) {
         if (arr[position] > arr[j])
            position = j;
      }
      if (position != i) {
         swap = arr[i];
         arr[i] = arr[position];
         arr[position] = swap;
      }
   }
   for (i = 0; i < n; i++)
      printf("%d ",arr[i]);
   return 0;
}
