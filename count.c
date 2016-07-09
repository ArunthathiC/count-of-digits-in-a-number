#include<stdio.h>
void main(){
  long int n;
  int count=0,i,r;
  scanf("%ld",&n);
  for(i=0;i<=n;i++){
    r=n%10;
    n=n/10;
    count++;
  }
  printf("%d",count);
  }
