#include<cstdio>
int n,a[1005];
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(i%2)     a[i]=(i-a[i]+n)%n;
        else        a[i]=(a[i]-i+n)%n;
    }
    for(int i=1;i<n;i++)
        if(a[i]!=a[i-1]){
            printf("No\n");     return 0;
        }
    printf("Yes\n");
    return 0;
}