#include <stdio.h>
#include <stdlib.h>

// int main(int argc, char *argv[]){
//     int a[2][3]={
//         {1,2,3},
//         {4,5,6}
//     };
//     // printf("Base address: %d\n", a);
//     // printf("**(a+0)=%d\n", **(a+0));
//     // printf("**(a+0)+1=%d\n", **(a+0)+1);
//     // printf("**(a+1)=%d\n", **(a+1));
//     printf("All the elements are:\n");
//     for(int i = 0; i < 2; i++){
//         for(int j = 0; j < 3; j++){
//             printf("%d\t",*(*(a+i)+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }

int main(int argc, char *argv[]) {
  int r_size, c_size;
  printf("Enter the number of rows: ");
  scanf("%d", &r_size);
  printf("Enter the number of columns: ");
  scanf("%d", &c_size);
  /*Dma to store all the base addresses of the first row index*/
  int **a = (int **)malloc(r_size * sizeof(int *));
  if (a == NULL) {
    printf("Memory allocation failed\n");
    return (1);
  } else {
    printf("Memory allocation successful\n");
    for (int i = 0; i < r_size; i++) {
      *(a + i) = (int *)malloc(c_size * sizeof(int)); /* *(a+i)= a[i]*/
      if (*(a + i) == NULL) {
        printf("Memory allocation failed\n");
        return (1);
      }
    }
  }
  for (int i = 0; i < r_size; i++) {
    for (int j = 0; j < c_size; j++) {
      printf("Enter the element at [%d][%d]: ", i, j);
      scanf("%d", *(a + i) + j);
    }
  }
  printf("All the elements are:\n");
  for (int i = 0; i < r_size; i++) {
    for (int j = 0; j < c_size; j++) {
      printf("%d\t", *(*(a + i) + j));
    }
    printf("\n");
  }
  return 0;
}