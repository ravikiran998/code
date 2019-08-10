#include<stdio.h>
int main()
{
    int x,p;
    scanf("%d %d",&x,&p);
    p=100-p;
    while(x>0)
    {
        sum+=x;
        x=((p*x)/100);
        
    }
    printf("%d",sum);
    return 0;

}
