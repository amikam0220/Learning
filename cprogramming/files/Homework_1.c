#include <stdio.h>
typedef long long int ll;
int main()
{
    ll v = 3e8;
    ll t = 365 * 24 * 60 * 60;
    ll s = v * t;
    printf("The distance is %lld", s);
    return 0;
}