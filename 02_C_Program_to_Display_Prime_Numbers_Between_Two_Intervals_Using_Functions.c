#include <stdio.h>
int main(){
    int input,i=1;

    printf("Input Integer: ");
    scanf("%d",&input);
    while(i>0&&i<input)
    {
        if(num(i)==0){
            printf("%d is not prime number\n",i);
        }
        else if(num(i)==1){
            printf("%d is prime number\n",i);
        }
        i++;
    }
    printf("\n");
    return 0;
}

int num(int number){
    if(number==1){
        return 0;
    }
    else if(number==2)
    {
        return 1;
    }
    else if(number%2==0)
    {
        return 0;

    }
    else if (number%2!=0)
    {
        return 1;
    }
}
