#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a>=2){
        b=a-1;
        c=pow(2,b);
        d=pow(2,a)-1;
        printf("%d",c*d);

    }
    else if(a<=1){
        printf("Can not be a Perfect number.");
    }
    return 0;
}