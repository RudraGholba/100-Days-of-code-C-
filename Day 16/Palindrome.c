#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int z=a;
    int n=0;
    while(a!=0){
        for(int i=1;i<=a;i++){
            int r=a%10;
            a=(a-r)/10;
            n=(n*10)+(r);
            if(a==0){
                break;
            }
        }
    }
    if (z==n){
        printf("Palindrome.");
    }
    else if (z!=n){
        printf("Not Palindrome.");
    }
    return 0;
}