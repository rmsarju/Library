/*To check and print whether the number entered is prime or not using square root method*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    long int n=0;
    long int flag=0;
    scanf("%ld",&n);
    for(long int i=0;i<n;i++)
    {
        long int num=0;
        scanf("%ld",&num);
        long int a=sqrt(num);
        flag=0;
        if(num==1)
            printf("Not prime\n");
        else if(num==2)
            printf("Prime\n");
        else if(num%2==0)
            printf("Not prime\n");
        else
        {
        for(long int j=3;j<=a;j+=2)
        {
            if(num%j==0)
            {
                flag=1;
                break;
            }
        
        }
        if(flag==1)
        {
             printf("Not prime\n");
        }
        else
        {
            printf("Prime\n");
        }
        }
    }
    
    return 0;
}
