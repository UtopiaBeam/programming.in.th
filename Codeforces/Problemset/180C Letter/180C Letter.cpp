#include<cstdio>
#include<algorithm>
using namespace std;
int dp[2];
char a[100005];
int main(){
    gets(a);
    for(int i=0;a[i];i++){
        dp[1]=min(dp[0],dp[1])+(a[i]>='A' && a[i]<='Z');
        dp[0]=dp[0]+(a[i]>='a' && a[i]<='z');
    }
    printf("%d\n",min(dp[0],dp[1]));
    return 0;
}
