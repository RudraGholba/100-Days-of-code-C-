#include <stdio.h>
#include <string.h>
int main()
{
    int a,i=0,n=0;
    printf("Enter length of number:\n");
    scanf("%d",&n);
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a==0){
        printf("ERRO 404");
    }
    int s[n];
    while(a!=0){
            int r=a%10;
            if(r==0){
                s[i]=1;
            }
            else if(r==1){
                s[i]=0;
            }
            a=(a-r)/10;
            if(a==0){
                break;
            }
            i+=1;
    }
    i=1;
    while((-i)>=(-n)){
        printf("%d",s[i]);
        i--;
    }
    return 0;
}