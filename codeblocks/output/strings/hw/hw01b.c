#include <stdio.h>
#include <stdlib.h>

void greetings();

int main()
{
    greetings();
    return 0;
}

void greetings()
{
    printf("Hello, world!\n");
    return; /* not sure this return statement is necessary/as it, automatically, returns) */
}
