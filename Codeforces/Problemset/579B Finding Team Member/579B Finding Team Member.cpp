#include<cstdio>
#include<map>
#define P pair<int,int>
#define F first
#define S second
using namespace std;
int n,t,b[802]={1};
map<int,P> a;
int main(){
    scanf("%d",&n);
    for(int i=2;i<=2*n;i++)
        for(int j=1;j<i;j++){
            scanf("%d",&t);
            a[t]=P(i,j);
        }
    for(int i=1000000;i>0;i--)
        if(!b[a[i].F] && !b[a[i].S])
            b[a[i].F]=a[i].S,b[a[i].S]=a[i].F;
    for(int i=1;i<=2*n;i++)
        printf("%d ",b[i]);
    return 0;
}