#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int n,k,mn=1<<30;
char a[100002];
vector<int> v;
int main(){
    scanf("%d %d %s",&n,&k,a);
    for(int i=0;a[i];i++)
        if(a[i]=='0')   v.push_back(i);
    for(int s=0;s+k<v.size();s++){
            int e=s+k;
        int m=lower_bound(v.begin()+s,v.begin()+e+1,(v[s]+v[e])/2)-v.begin();
        mn=min(min(mn,max(v[e]-v[m],v[m]-v[s])),min(max(v[e]-v[m-1],v[m-1]-v[s]),max(v[e]-v[m+1],v[m+1]-v[s])));
    }
    printf("%d\n",mn);
    return 0;
}
