#include<cstdio>
#include<vector>
using namespace std;
vector<int> adj[100005],ans;
int n,m,s,e,t,a[100005],dp[100005];
void dfs(int now,int pre=-1){
    dp[now]=a[now];
    for(int i=0;i<adj[now].size();i++){
        int nx=adj[now][i];
        if(nx!=pre)      dfs(nx,now),dp[now]+=dp[nx];
    }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        scanf("%d %d %d",&s,&e,&t);
        adj[s].push_back(e),adj[e].push_back(s);
        if(t==2)    a[s]=a[e]=1;
    }
    dfs(1);
    for(int i=1;i<=n;i++)
        if(a[i] && dp[i]==1)    ans.push_back(i);
    printf("%d\n",ans.size());;
    for(int i=0;i<ans.size();i++)
        printf("%d ",ans[i]);
    return 0;
}
