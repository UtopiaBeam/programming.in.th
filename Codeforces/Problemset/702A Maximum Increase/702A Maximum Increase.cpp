#include<cstdio>
#include<algorithm>
using namespace std;
int mx=0,a[100002],s=1,n;
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        if(a[i]<=a[i-1])    s=i;
        mx=max(mx,i-s+1);
    }
    printf("%d\n",mx);
    return 0;
}
