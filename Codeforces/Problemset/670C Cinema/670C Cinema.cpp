#include<cstdio>
#include<map>
using namespace std;
map<int,int> M;
int n,m,x,y,a[200002],b[200002],mx=1;
int main(){
    scanf("%d",&n);
    while(n--){
        scanf("%d",&x);
        M[x]++;
    }
    scanf("%d",&m);
    for(int i=1;i<=m;i++)
        scanf("%d",&a[i]);
    for(int i=1;i<=m;i++)
        scanf("%d",&b[i]);
    for(int i=1;i<=m;i++)
        if(M[a[mx]]<M[a[i]] || (M[a[mx]]==M[a[i]] && M[b[mx]]<M[b[i]]))
            mx=i;
    printf("%d\n",mx);
    return 0;
}
