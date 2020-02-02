#include "stdio.h"
//bubble sort
int main(void) {
  int n,i,temp,j;
  printf("How many numbers you want to sort?\n");
  scanf("%d",&n);
  int num[n];
  for(i=0; i<n; i++){
    scanf("%d",&num[i]);
  }
  for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
      if(num[i]<num[j]){
        temp = num[i];
        num[i] = num[j];
        num[j] = temp;
       // printf("%d ",num[i]);
      }
    }
  }
  for(i=0; i<n; i++){
    printf("%d ",num[i]);
  }
  return 0;
}
