#include <stdio.h>
#include<math.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int z=a,s=0,t=0;
    for (int i=0;i<=a;i++){
        int r=z%10;
        z=(z-r)/10;
        t+=1;
        if (z==0){
            break;
        }
    }
    int y=a;
    for (int i=0;i<=t;i++){
        int r=y%10;
        y=(y-r)/10;
        int p=pow(r,t);
        s+=p;
    }
    if (a==s){
        printf("Armstrong number.");
    }
    else {
        printf("Not a Armstrong number.");
    }
    return 0;
}