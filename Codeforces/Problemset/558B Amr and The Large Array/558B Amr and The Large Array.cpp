#include<cstdio>
int a,s[1000005],e[1000005],b[1000005],n,mx=0,f=0,t=1<<20;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        b[a]++,e[a]=i+1;
        if(b[a]>mx)  mx=b[a];
        if(!s[a])    s[a]=i+1;
    }
    for(int i=1;i<=1000000;i++)
        if(b[i]==mx && t-f>e[i]-s[i])
            f=s[i],t=e[i];
    printf("%d %d\n",f,t);
    return 0;
}
