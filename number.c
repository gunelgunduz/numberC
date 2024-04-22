#include<stdio.h>
#include<stdlib.h>
#include<math.h>

//En boyuk ve en kicik reqemi tapan proqram

int main(int argc, char *argv[])
{
    int array [] = {3, 88, -22, 67, 45, 39, 10, 200, 9, 15};

    int largest = array[0], smallest=array[0];
    int i, j;

    for(i=0; i<10; i++)
   {
         if(largest<array[i])
         largest = array[i];

         if(smallest>array[i])
         smallest = array[i];
   }

   printf(" Largest Number : %d\n", largest);
   printf(" Smallest Number : %d", smallest);
    return 0;
}