#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number:\n");
    scanf("%d",&a);
    if(a==2){
        printf("Prime number.");
    }
    for(int i=2;i<a;i++){
        int r=a%i;
        if (r==0){
            printf("Compostie.");
            break;
        }
        else if((i+1)==a){
            printf("Prime number.");
            break;
        }
        //printf("%d",r);
    }
    if(a==1){
        printf("Neither Prime nor Composite.");
    }
    return 0;
}