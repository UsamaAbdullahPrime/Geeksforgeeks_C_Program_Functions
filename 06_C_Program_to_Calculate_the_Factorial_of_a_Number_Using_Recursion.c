#include <stdio.h>
int main(){
    int n;
    printf("Input Integer: !");
    scanf("%d",&n);
    printf("Fact is %d\n",sum(n));
    return 0;
}
int sum(int n){
    int sumx=0;
    if(n<=1){
        return n;
    }
    sumx=n*(sum(n-1));
    return sumx;
}
