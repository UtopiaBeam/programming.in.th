#include<cstdio>
#include<algorithm>
using namespace std;
char a;
int r,c,x,y,b[2][1005],dp[2][1005],ans=1<<20;
int main(){
    scanf("%d %d %d %d",&r,&c,&x,&y);
    for(int i=1;i<=r;i++)
        for(int j=1;j<=c;j++){
            scanf(" %c",&a);
            if(a=='#')      b[0][j]++;
            else    b[1][j]++;
        }
    dp[0][1]=dp[1][1]=2e9;
    for(int i=2;i<=c;i++)
        for(int k=0;k<2;k++)
            b[k][i]+=b[k][i-1],dp[k][i]=2e9;
    for(int i=0;i<=c;i++)
        for(int j=x;j<=y;j++)
            for(int k=0;k<2;k++)
                dp[k][i+j]=min(dp[k][i+j],dp[1-k][i]+b[k][i+j]-b[k][i]);
    printf("%d\n",min(dp[0][c],dp[1][c]));
    return 0;
}
