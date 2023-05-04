#include <stdio.h>

void update(int *a,int *b) {
    int sum=0;
int sub=0;
sum=*a+*b;

  if (*a>*b){
    sub=*a-*b;
      }
  else{
sub=-(*a-*b);

}
*a=sum;
  *b=sub;
}
int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}