#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=1;
    int y=1;
    int sum = add(x,y);
    printf("%d\n",sum);
    return 0;
}

int add(int x,int y)
{
    return(x+y);
}
