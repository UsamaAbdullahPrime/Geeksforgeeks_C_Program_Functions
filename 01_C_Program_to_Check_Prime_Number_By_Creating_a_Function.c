#include <stdio.h>

int main()
{   /*
    To find a Prime number we can devide it by
    two if theres remainder 0 then its not prime
    but for two it can be derivable by 2 and remainder is 0
    but it is a prime number
    */
    int inputt;
    printf("Input a number to see if its prime or not:");
    scanf("%d",&inputt);


    if(num(inputt)==0){
        printf("%d is not prime number\n",inputt);
    }
    else if(num(inputt)==1){
        printf("%d is prime number\n",inputt);
    }

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
