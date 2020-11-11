#include <stdio.h>
#include "exomax.h"
int main (){
    int x,y,c;
do { 
    printf ("saisir x et y:\n");
    scanf ("%d%d", &x,&y);
}
while (x<0 || y<0 || x==y);
c= max (x,y);
 printf ("afficher %d\n", c);
   
    return 0;
}