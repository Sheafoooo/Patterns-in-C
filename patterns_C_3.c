// Programs using functions ^_^


#include <stdio.h>

void OppArow(int x );
void SolidRhombus(int x );
void HollowRhombus(int x );

int main ()
{


//38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 38 

/*

// Two arrows mirrored 

// Enter the odd number w :- 5

//      *            *      
//       *          *
//        *        *
//         *      *
// **********    ***********
//         *      *
//        *        *
//       *          *
//      *            *
  
    int w ; 
f1:
printf("Enter the odd number w :- ");
scanf("%d", &w);
if ( w%2==0 )
{
    printf("You Entered an Even Number\n");
    goto f1 ;
}

    OppArow(w);

*/

//39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39 39  

/*  

// solid parallelogram

// Enter the number w :- 4

//     ****
//    ****
//   ****
//  ****

int w ; 
printf("Enter the number w :- ");
scanf("%d", &w);
SolidRhombus(w);

*/

//40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40 40

/*

// hollow parallelogram

// Enter the number w :- 7

//        *******
//       *     *
//      *     *
//     *     *
//    *     *
//   *     *
//  *******
int w ; 
printf("Enter the number w :- ");
scanf("%d", &w);
HollowRhombus(w);

*/

}

void OppArow(int x )
{
for (int i=1 ; i<=x ; i++)
{
    for (int j= 1 ; j<= 5*x ; j++)
    {
        if ((i==x && (j>3*x || j<=2*x )) || j==i+x || j==3*x+(x-i) )
        {
            printf("*");
        }
    else 
    {
        printf(" ");
    }

    }
    printf("\n");
}

for (int i=x-1 ; i>=1 ; i--)
{
    for (int j= 1 ; j<= 5*x ; j++)
    {
        if ( j==i+x || j==3*x+(x-i))
        {
            printf("*");
        }
    else 
    {
        printf(" ");
    }

    }
    printf("\n");
} 
}

void SolidRhombus(int x )
{
    for (int i=x ; i>=1 ;i--)
    {
        for (int j=1; j<= 2*x-1 ; j++)
        {
            if (j>=i && j<x+i)
            {
                printf("*");
            }
            else
            {
                 printf(" ");
            }
        }
         printf("\n");
    }
}

void HollowRhombus(int x )
{
    for (int i=x ; i>=1 ;i--)
    {
        for (int j=1; j<= 2*x-1 ; j++)
        {
            if ((j>=i && i==x) || (i==1 && j<x+1 )||  j==x+i-1 || j==i )
            {
                printf("*");
            }
            else
            {
                 printf(" ");
            }
        }
         printf("\n");
    }
}

