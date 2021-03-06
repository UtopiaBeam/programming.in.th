#include<cstdio>
int adj[55][55],deg[55],r[55],c[55],n,m,cnt=1,loop=0;
int find(int x){
    if(x!=r[x])
        r[x]=find(r[x]);
    return r[x];
}
void dfs(int x){
    c[x]=1;
    for(int i=1;i<=n;i++)
        if(!c[i] && adj[x][i])  dfs(i);
}
int main(){
    scanf("%d %d",&n,&m);
    for(int i=1;i<=n;i++)   r[i]=i;
    for(int i=0;i<m;i++){
        int s,e;
        scanf("%d %d",&s,&e);
        adj[s][e]=adj[e][s]=1;
        deg[s]++,deg[e]++;
        if(r[s]==r[e])      loop=1;
        r[find(s)]=find(e);
    }
    if(n==1){
        if(m==0)    printf("YES\n1\n1 1\n");
        else if(m==1)    printf("YES\n0\n");
        else        printf("NO\n");
        return 0;
    }
    for(int i=1;i<=n;i++)
        if(deg[i]>2){
            printf("NO\n");     return 0;
        }
    if(loop){
        dfs(1);
        for(int i=1;i<=n;i++)
            if(!c[i]){
                printf("NO\n");     return 0;
            }
        printf("YES\n0");
        return 0;
    }
    printf("YES\n%d\n",n-m);
    for(int i=1;i<n;i++)
        for(int j=i+1;j<=n;j++){
            int x=find(i),y=find(j);
            if(x!=y && deg[i]<2 && deg[j]<2){
                printf("%d %d\n",i,j);
                deg[i]++,deg[j]++;
                r[x]=y;
            }
        }
    for(int i=1;i<=n;i++)
        if(deg[i]<2)    printf("%d ",i);
    printf("\n");
    return 0;
}
