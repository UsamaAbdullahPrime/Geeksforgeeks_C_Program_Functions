#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(){
   int a,b,c;
    printf("Input a : ");
    scanf("%d",&a);
    printf("Input b : ");
    scanf("%d",&b);
    printf("Input c : ");
    scanf("%d",&c);

    quadric(a,b,c);

    return 0;
}
void quadric(int a,int b,int c){

    double root1,root2;
    int bac;
    bac=((b*b)-4*a*c);
    double sqr_bac=sqrt(abs(bac));
    if(bac>0){
        root1=(-b+sqr_bac)/(2*a);
        root2=(-b-sqr_bac)/(2*a);
        printf("Roots are real and different\n");
        printf("Root 1 is %lf\nRoot 2 is %lf\n",root1,root2);
        return;
    }
    else if(bac<0){
        printf("Roots are complex\n");
        printf("%lf + i%lf\n",-(double)b/(2*a),sqr_bac/(2*a));
        printf("%lf - i%lf",-(double)b/(2*a),sqr_bac/(2*a));
    }
    else if(bac==0){
        root1=(-b+sqr_bac)/(2*a);
        printf("Both Roots are equal\nroot is %lf",root1);
    }
}
