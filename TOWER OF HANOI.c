#include <stdio.h>
#include <stdlib.h>

void TOH (int n, char S, char D, char T)
{

if(n==1)
    printf("Move disc from %c->%c \n",S,T);
    else
    {


    TOH(n-1, S, T, D);
    printf("Move disc %d from %c->%c \n",S,D);
    TOH(n-1, T, D, S);
    }
     printf("Move disc %d from %c->%c \n",S,D);
     TOH(n-1, T, D, S);

}
int main()
{
    int n;
     printf("Enter number of discs:");
     scanf("%d", & n);
     printf("\n sequence of moves:\n");
     TOH(n, 'S','D','T');

     int totalmoves=(1<<n)-1;
     printf("\n Total number of moves = %d\n",totalmoves);


return 0;
}




