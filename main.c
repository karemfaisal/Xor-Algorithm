#include<stdio.h> /* To Let Standard Functions Work */
#include<math.h> /* To let Log2 Function Works */

/* Function to Convert Ascii To Binary and Store every Digit in a Var Then Xor The Inputs  */
/* Coded by Karem Ali */

/* _____________________________________ */


int AsciiToBinary (char A , char B)
{
    int binary[8]; /* Save every Digit in Var */
    int binary_B[8]; /* Save every Digit in Var */
    int x ,i , l;
    /* For Char A */
    x=A;
    for(i=7;i>=0;i--)
    {
   l=log2(x);
if (i==l){   /* Calculate 1s & 0s */
    binary[i]=1;
 x-=pow(2,i);
}
    else
        binary[i]=0;
    }
    /* For Char B */
     x=B;
    for(i=7;i>=0;i--)
    {
   l=log2(x);
if (i==l){   /* Calculate 1s & 0s */
    binary[i]=1;
 x-=pow(2,i);
}
    else
        binary_B[i]=0;
    }

   for(i=7;i>=0;i--)
   {
    x = binary[i] + binary_B[i] ;
    x = x % 2 ;
 printf("%d",x);
 if(i==4)
    printf(" ");
   }
   printf(" ");
}
