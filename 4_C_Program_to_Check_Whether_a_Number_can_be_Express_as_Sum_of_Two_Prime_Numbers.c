#include <stdio.h>
int main(){
    int n;
    printf("Input Integer: ");
    scanf("%d",&n);
    primex(n);
    return 0;
}










void primex(int n){
    int count=0;
    for(int i=2;i<n;i++){
        if(prime(i)==1){
            if(prime(n-i)==1){
                printf("Yes\n");
                count++;
                break;
            }
        }
    }
    if(count==0){
        printf("NO\n");
    }

}

int prime(int x){
        int ifprime=1;
        if(x==0 || x==1){
            ifprime=0;
        }
        else{
            for(int i=2;i<x;i++){
                if(x%i==0){
                    ifprime=0;
                    break;
                }
            }
        }

    return ifprime;
}
