#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
typedef pair<int,int> pii;
int n,k,lt=0,deg[100005];
pii d[100005];
vector<pii> a;
int main(){
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++){
        scanf("%d",&d[i].first);
        d[i].second=i+1;
    }
    sort(d,d+n);
    if(d[0].first || (n>1 && !d[1].first)){
        printf("-1\n");     return 0;
    }
    for(int i=1;i<n;i++){
        while(d[lt].first<d[i].first-1) lt++;
        if(deg[lt]==k)  lt++;
        if(d[lt].first==d[i].first){
            printf("-1\n");     return 0;
        }
        deg[i]++,deg[lt]++;
        a.push_back(pii(d[lt].second,d[i].second));
    }
    printf("%d\n",a.size());
    for(int i=0;i<a.size();i++)
        printf("%d %d\n",a[i].first,a[i].second);
    return 0;
}
