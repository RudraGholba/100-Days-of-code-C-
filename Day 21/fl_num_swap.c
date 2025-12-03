#include <stdio.h>
int main()
{
    int a,b,c=0,g;
    printf("Enter a number:\n");
    scanf("%d",&a);
    b=a;
    if(a>=0&&a<10){
        printf("ERROR404");
    }
    else if(a>10&&a<=99){
        int r=b%10;
        printf("%d",r);
        b=(b-r)/10;
        printf("%d",b);
        return 0;
    }
    else if(a>=100){
        int r=b%10;
        printf("%d",r);
        b=(b-r)/10;
        while(b>=10){
            r=b%10;
            b=(b-r)/10;
            c+=1;
            if(a<=10){
                break;
            }
        }
        b=a;
        b=(b-(b%10))/10;
        char f[c];
        for(int i=0;i<=c;i++){
            r=b%10;
            f[i]=r;
            b=(b-r)/10;
            if(b<=9){
                g=b;
                break;
            }
        }
        int i=sizeof(f);
        //printf("%d\n",i);
        while(i>=0){
            printf("%d",f[i-1]);
            if((i-1)==0){
                break;
            }
            i-=1;
        }
        printf("%d",g);
    }
    return 0;
}