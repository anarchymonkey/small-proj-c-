#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main()
{
    long long int N,i,sum=0,num=0;
    long long  int largenumber[10000000000];
    scanf("%lld",&N);
    for(i=0;i<N;i++)
    {
        scanf("%lld ",&num);
        largenumber[i]=num;
        sum+=largenumber[i];
    }
    printf("%lld",sum);
    return 0;
}
