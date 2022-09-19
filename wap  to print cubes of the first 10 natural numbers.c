
#include<stdio.h>
int main()
{
    int i=1,c=1;
    for(c=1;c<=1000;c=i*i*i)
    {
        i=i+1;
        printf(" \n %d",c);

    }
    return 0;
}
