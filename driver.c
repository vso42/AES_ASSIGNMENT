
#include "lib_mylib.h"
#include <stdio.h>
#include <string.h>

int main() 
{
    unsigned char ptext[] ="Assignment for SE role";

   unsigned char key[16]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
   encryptnow (ptext,key);
}
