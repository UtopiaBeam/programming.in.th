#include<cstdio>
int n,a[2005][2],cnt=0;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d %d",&a[i][0],&a[i][1]);
    for(int i=0;i<n-2;i++)
        for(int j=i+1;j<n-1;j++)
            for(int k=j+1;k<n;k++)
                if((a[i][1]-a[j][1])*(a[j][0]-a[k][0])!=(a[j][1]-a[k][1])*(a[i][0]-a[j][0]))
                    cnt++;
    printf("%d\n",cnt);
    return 0;
}
