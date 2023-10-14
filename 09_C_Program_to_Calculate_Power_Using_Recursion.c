#include <stdio.h>
int main(){
    int x,n,mx;
    printf("Input Integer: ");
    scanf("%d%d",&x,&n);
    mx=x;
    n=n+1;
    printf("%d\n",pr(x,n,mx));
    return 0;
}
int pr(int x,int n,int mx){
    //printf("%d %d\n",x,n);
    if (n>0){
        n=n-1;
        if(n==1){
            return x;
        }
        else if(n==0){
            return 1;
        }
        else{
            return pr(x*mx,n,mx);
        }
    }



}
