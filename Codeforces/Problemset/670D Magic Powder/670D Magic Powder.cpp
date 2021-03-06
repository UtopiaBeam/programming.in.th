#include<cstdio>
#define L long long
int n;
L k,a[100002],b[100002];
bool chk(L x){
    L t=k;
    for(int i=0;i<n;i++){
        if(a[i]*x-b[i]>0)
            t-=a[i]*x-b[i];
        if(t<0)     return false;
    }
    return true;
}
L bs(L s,L e){
    if(s==e)    return s;
    L m=(s+e+1)/2;
    if(chk(m))      return bs(m,e);
    return bs(s,m-1);
}
int main(){
    scanf("%d %I64d",&n,&k);
    for(int i=0;i<n;i++)
        scanf("%I64d",&a[i]);
    for(int i=0;i<n;i++)
        scanf("%I64d",&b[i]);
    printf("%I64d\n",bs(0,(L)2e9));
    return 0;
}
