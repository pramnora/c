#include <stdio.h>
#include <stdlib.h>

void add(int x,int y);

int main()
{
    int x=1;
    int y=1;
    add(x,y);
    return 0;
}

void add(int x,int y)
{
    printf("%d\n",x+y);
}
