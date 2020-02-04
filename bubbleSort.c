#include "stdio.h"
//bubble sort

void swap(int *x,int *y);

int main(void) {
  int n,i,temp,j;
  printf("How many numbers you want to sort?\n");
  scanf("%d",&n);
  int num[n];
	printf("Enter Numbers: \n");
  for(i=0; i<n; i++){
    scanf("%d",&num[i]);
  }
  for(i=0; i<n; i++){
    for(j=0; j<n-i-1; j++){
			if(num[j]>=num[j+1])
			swap(&num[j],&num[j+1]);
    }
  }
	printf("Sorted output: \n");
  for(i=0; i<n; i++){
    printf("%d ",num[i]);
  }
  return 0;
}
void swap(int *x,int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}