#include<cstdio>
#include<algorithm>
using namespace std;
int a[200005],n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        a[i]-=n-1-i;
    }
    sort(a,a+n);
    for(int i=1;i<n;i++)
        if(a[i]==a[i-1]){
            printf(":(\n");     return 0;
        }
    for(int i=0;i<n;i++)
        printf("%d ",a[i]+n-1-i);
    return 0;
}
