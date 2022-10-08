#include <stdio.h>
#include <stdlib.h>

/* NOTE: Although the code did run successfully;
         there is a warning message which says...
         warning: implicit declaration of function: add; did you mean 'rand'/-etc.
         I think, this means that the called module add was not declared as being a header, first.
*/         

int main()
{
    int x=1;
    int y=1;
    printf("%d\n",add(x,y));
    return 0;
}

int add(int x,int y)
{
    return(x+y);
}
