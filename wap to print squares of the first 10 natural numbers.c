
#include<stdio.h>
int main()
{
    int i=1,b=1,c=1;
    for(c=1;c<=100;c=i*b)
    {
        i++;
        b++;
        printf(" \n %d",c);

    }
    return 0;
}
