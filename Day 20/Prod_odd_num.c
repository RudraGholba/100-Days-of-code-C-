#include <stdio.h>
#include<string.h>
int main()
{
    int a,i=0;
    char* z;
    printf("Enter a number:\n");
    scanf("%d",&a,&z);
    int b=1;
    int c=strlen(z);
    while(a!=0){
        int r=a%10;
        if((r%2)!=0){
            b*=r;
        }
        a=(a-r)/10;
        if(a==0||a==1){
            if (b==1){
                printf("No Odd digit.");
            }
            else{
                printf("%d",b);
                break;
            }
        }
        i+=1;
    }
    return 0;
}