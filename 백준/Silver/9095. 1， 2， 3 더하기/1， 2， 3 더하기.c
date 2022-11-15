#include <stdio.h>

int main()
{
    int T,n;
    scanf("%d",&T);
    int st[11]={0,};
    st[0]=1;
    st[1]=2;
    st[2]=4;
    int dap[11]={0,};

    for(int i=0;i<T;i++)
    {
        scanf("%d",&n);//n=4라면

        for(int j=3;j<=n;j++)
        {
            st[j]=st[j-1]+st[j-2]+st[j-3];//결과값은 5의 것
        }
        dap[i]=st[n-1];//n-1로 4의 값
    }
    for(int i=0;i<T;i++)
    {
    printf("%d\n",dap[i]);
    }
    return 0;
}
