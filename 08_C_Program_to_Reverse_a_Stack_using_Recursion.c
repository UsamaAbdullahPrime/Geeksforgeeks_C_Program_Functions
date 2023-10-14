#include <stdio.h>
#include<math.h>
int main(){
    int n,value=0,rem=0;
    printf("Input Integer: ");
    scanf("%d",&n);
    printf("%d",rev(n,value));
    return 0;
}
int rev(int n,int value){
    int rem;
    if(n>0){
        rem=n%10;
        n=n/10;
        value=value*10;
        value=value+rem;
       // printf("value %d",value);
        return rev(n,value);
    }
}
