#include<cstdio>
#include<algorithm>
using namespace std;
long long dp[2005],t[2005],c[2005],n;
int main(){
    scanf("%I64d",&n);
    for(int i=0;i<n;i++)
        scanf("%I64d %I64d",&t[i],&c[i]);
    for(int i=1;i<=n;i++)   dp[i]=20000000000000000;
    for(int i=0;i<n;i++){
        for(int j=n-1;j>=0;j--){
            int tmp=j+t[i]+1;
            if(tmp>n)   tmp=n;
            dp[tmp]=min(dp[tmp],dp[j]+c[i]);
        }
    }
    printf("%I64d\n",dp[n]);
    return 0;
}
