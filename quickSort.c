//Quick sort
#include <stdio.h>
#include <math.h>

void QS(int l,int h);
int part(int l,int h);
void swap(int *x,int *y);


int num[20];

int main(){
  int n;
  scanf("%d",&n);
  for(int i=0;i<n;i++){
    scanf("%d",&num[i]);
  }
  QS(0,n);
  for(int i=0;i<n;i++){
    printf("%d ",num[i]);
  }
	return 0;
}

void QS(int l,int h){
  int i ;
  if(l<h){
  i = part(l,h);
  QS(l,i);
  QS(i+1,h);
  }
}

int part(int l,int h){
  int i = l;
  int j = h;
  int pivot  = num[i];
  do{
    do{
      i++;
    }while(num[i]<pivot);
    do{
      j--;
    }while(num[j]>pivot);
    if(i<j)
	swap(&num[i],&num[j]);
  }while(i<j);
  swap(&num[l],&num[j]);

  return(j);
}
void swap(int *x,int *y){
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}
