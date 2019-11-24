#include<stdio.h>
int main()
{
    int k, i, j, sum2, sum1,n;
    for  (int i=n; i <n; i++)
    {
        sum1 = 0;
            for (k=1; k<i; k++)
            {
                if (i%k==0)
                sum1=sum1+1;
            }
        for(j=n; j<=n; j++)
        {
                sum2 = 0;
                for(k=1; k<j; k++)
                {
                    if (j%k==0)
                        sum2=sum2+k;
                    }
                if ((sum1==j)&&(sum2==i))
                    printf("%d %d\n", j, i);
        }
    }
    return 0;
}
