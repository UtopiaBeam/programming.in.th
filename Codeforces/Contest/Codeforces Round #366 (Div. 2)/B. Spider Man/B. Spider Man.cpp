#include<cstdio>
int n,x,t;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&t);
        x+=t-1;     x%=2;
        printf("%d\n",2-x);
    }
    return 0;
}