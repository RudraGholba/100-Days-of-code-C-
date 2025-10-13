#include<stdio.h>
int main()
{
    char c[15];
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    int l=0;
    for (int i=0;i<=10;i++){
        int n=a%2; 
        c[i]=n;
        if (a==1){
            c[i+1]=1;
            break;
        }
        a=a/2;
        l+=1;
    }
    for(int i=l;i>=0;i--){
        printf("%d",c[i]);
    }
    return 0;
}