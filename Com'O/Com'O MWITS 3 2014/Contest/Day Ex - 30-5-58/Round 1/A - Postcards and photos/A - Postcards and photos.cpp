#include<cstdio>
char a[105];
int ans=1,cnt=1;
int main(){
    gets(a);
    for(int i=1;a[i];i++){
        cnt++;
        if(a[i]!=a[i-1] || cnt>5)    cnt=1,ans++;
    }
    printf("%d\n",ans);
    return 0;
}
