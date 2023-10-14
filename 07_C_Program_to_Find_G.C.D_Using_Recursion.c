#include <stdio.h>
int main(){
    int a,b;
    printf("Input two Integer: ");
    scanf("%d%d",&a,&b);
    printf("GCD is %d\n",gcd(a,b));
    return 0;
}
int gcd(int a,int b){
    if(a==0){
        return b;
    }
   else if(b==0){
        return a;
    }
    else
    {
        gcd(b,a%b);
    }
}
