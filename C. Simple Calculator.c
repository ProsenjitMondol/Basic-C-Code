#include<stdio.h>
int main()
{
    long long int x,y;
    scanf("%lld%lld",&x,&y);
    printf("%lld + %lld = %lld\n",x,y,(x+y));
    printf("%lld * %lld = %lld\n",x,y,(x*y));
    printf("%lld - %lld = %lld\n",x,y,(x-y));
    return 0;
}
