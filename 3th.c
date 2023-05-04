#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int x,y;
    float a,b;
    int sum=0;
    int sub=0;
        float sum2=0,sub2=0;

    scanf("%d ",&x);
    scanf("%d ",&y);
    scanf("%f ",&a);
    scanf("%f ",&b);    
    sum=x+y;
    sub=x-y;
    printf("%d",sum);
    printf(" %d",sub);
    sum2=a+b;
    sub2=a-b;
     printf("\n%0.1f",sum2);
    printf(" %0.1f",sub2);
    
    
    
    
    
    return 0;
}
