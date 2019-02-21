#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   
   int L2 = sizeof(2L);
   printf("sizeof(2L)=%d\n", L2);
   
   char ch;
   int ch2 = sizeof(ch);			
   printf("sizeof(ch)=%d\n", ch2);

   float num;	
   int num2 = sizeof(num);
   printf("sizeof(num)=%d\n", num2);

   int int2 = sizeof(int);
   printf("sizeof(int)=%d\n", int2);	

   int long2 = sizeof(long);
   printf("sizeof(long)=%d\n", long2);	

   int short2 = sizeof(short);
   printf("sizeof(short)=%d\n", short2);

   int double2 = sizeof(double);
   printf("sizeof(double)=%d\n", double2);

   return 0;
}

