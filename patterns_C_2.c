#include <stdio.h>
int main()
{
    //28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 28 
/* 
   // halp diamond with numbers

     //Enter a number :  8
    // Enter start number :  5

    // 5
    // 66
    // 777
    // 8888
    // 777
    // 66
    // 5

    int n,m ;
   printf("Enter a number :  ") ;
   scanf("%d",&n);
   printf("Enter start number :  ");  // this number should be smaller than the first number
   scanf("%d",&m);
   printf("\n");
   for (int i=m ; i<=n ; i++)
   {
    for(int j=m ; j<=n ; j++)
    {
        if(j<=i)
        {
            printf("%d",i);
        }
        else 
        {
            printf(" ");
        }
    } printf("\n");
   }
   for (int i=n-1; i>=m; i--)
   {
    for(int j=m; j<=n-1 ; j++)
    {
        if(j<=i)
        {
            printf("%d",i);
        }
        else 
        {
            printf(" ");
        }
    } printf("\n");
   }

*/  


//29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 29 

/*
// half diamond  with numbers and astrics

// Enter x
// x = 5

//  1        
//  2*2      
//  3*3*3    
//  4*4*4*4  
//  5*5*5*5*5
//  5*5*5*5*5
//  4*4*4*4  
//  3*3*3    
//  2*2
//  1


  int x ;
  printf("Enter x \n x = ");
  scanf("%d",&x);
  for (int i =1 ; i<=x ; i++)
  {
    for (int j = 1 ; j<=i ; j++)
    {
        if (j<i)
        {
            printf("%d*",i);
        }
        else if (j==i)
        {
            printf("%d",i);
        }
        else 
        {
            printf(" ");
        }
    }
    printf("\n");
  } 
  for (int i =x ; i>=1 ; i--)
  {
    for (int j = 1 ; j<=i ; j++)
    {
        if (j<i)
        {
            printf("%d*",i);
        }
        else if (j==i)
        {
            printf("%d",i);
        }
        else 
        {
            printf(" ");
        }
    }
    printf("\n");
  } 

  */

 //30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 30 

/*

// half diamond with numbers-incremented and astrics

// Enter x 
// x = 10

//  1
//  2*3
//  4*5*6
//  7*8*9*10
//  7*8*9*10
//  4*5*6
//  2*3
//  1

 int x , y=1 ,z ;
  printf("Enter x \n x = ");
  scanf("%d",&x);
  for (int i =1 ; i<=x ; i++)
  {
    for (int j = 1 ; j<=i ; j++)
    {
        if (j<i)
        {
            printf("%d*",y);
            y++;
        }
        else if (j==i)
        {
            printf("%d",y);
            y++;
        }
        else 
        {
            printf(" ");
        }
    }
    printf("\n");
  } 

  for (int i =x ; i>=1 ; i--)
  {
    y-=i;
    z=y;

    for (int j = 1 ; j<=i ; j++)
    {
        if (j<i)
        {
            printf("%d*",z);
            z++;
        }
        else if (j==i)
        {
            printf("%d",z);
            z++;
        }
        else 
        {
            printf(" ");
        }
    }
    printf("\n");
  } 

*/

//31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 31 

/*
//half diamond with numbers surrounded by astrics

// Enter x = 4

//  *
//  *1*
//  *121*
//  *12321*
//  *1234321*
//  *12321*
//  *121*
//  *1*
//  *


int x ,y=0 ;
printf("Enter x = ");
scanf("%d",&x);
for (int i = 1 ; i<= 2*x+1 ; i+=2)
{
    y++;
    for (int j = 1 ; j<=i ; j++)
    {
        if (j==1 || j==i)
        {
            printf("*");
        }
        else if (j>1 && j<= y)
        {
            printf("%d", j-1);
        }
        else 
        {
            printf("%d",(i-j));
        }
    }
    printf("\n");
}
 
for (int i = 2*x-1 ; i>=1 ; i-=2)
{
    y--;
    for (int j = 1 ; j<=i ; j++)
    {
        if (j==1 || j==i)
        {
            printf("*");
        }
        else if (j>1 && j<= y)
        {
            printf("%d", j-1);
        }
        else 
        {
            printf("%d",(i-j));
        }
    }
    printf("\n");
}

*/

 //32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32 32
/*

// squre with a hollow diamond
// Enter s = 5

//  **** ****
//  ***   ***
//  **     **
//  *       *
//  **     **
//  ***   ***
//  **** ****


int s ;
printf("Enter s = ");
scanf("%d",&s);
for(int i=1 ; i<=s-1 ; i++)
{
    for (int j=1 ; j<=2*s-1 ; j++)
    {
        if (i+j>=s+1 && j-i<=s-1)
        {
            printf(" ");
        }
            
    
        else 
        {
            printf("*");
        }
    }
    printf("\n");
}

for (int i=s-2 ; i>=1 ; i--)
{
    for (int j=1 ; j<=2*s-1 ; j++)
    {
        if (i+j>=s+1 && j-i<=s-1)
        {
            printf(" ");
        }
            
    
        else 
        {
            printf("*");
        }
    }
    printf("\n");
}

*/

//33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 33 

/*

// Two half diamond mirrored

//  Enter s = 5 

//  *       *
//  **     **
//  ***   ***
//  **** ****
//  ***   ***
//  **     **
//  *       *


int s ;
printf("Enter s = ");
scanf("%d",&s);
for (int i=s-1 ; i>=1 ; i--)
{
    for (int j=1 ; j<=2*s-1 ; j++)
    {
        if (i+j>=s+1 && j-i<=s-1)
        {
            printf(" ");
        }
            
    
        else 
        {
            printf("*");
        }
    }
    printf("\n");
}

for(int i=2 ; i<=s-1 ; i++)
{
    for (int j=1 ; j<=2*s-1 ; j++)
    {
        if (i+j>=s+1 && j-i<=s-1)
        {
            printf(" ");
        }
            
    
        else 
        {
            printf("*");
        }
    }
    printf("\n");
}

*/

//34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34 34

/*
// x box

// Enter s = 4

// *******
// **   **
// * * * *
// *  *  *
// * * * *
// **   **
// *******

int s ;
printf("Enter s = ");
scanf("%d",&s);
for(int i=1 ; i<=s ; i++)
{
    for (int j=1 ; j<=s ; j++)
    {
        if (i==1 || j==1 || j==s || i==s || j==i || j+i==s+1)
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

*/

//35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 35 

/*

// diamond 

// Enter the width -->  x : 9

//      *    
//     ***
//    * * *
//   *  *  *
//  *********
//   *  *  *
//    * * *
//     ***
//      *


int x ,n ,m ;
printf("Enter the width -->  x : ");
scanf("%d",&x);

    m=(x+1)/2 -1  ;
    n=(x+1)/2   ;

    for(int i=1 ; i<=(x+1)/2 ;i++)
    {
        for (int j = 1 ; j<=x ; j++ )
        {
            
            if ( i==(x+1)/2 || j==(x+1)/2 )
            {
                printf("*");
               
            }
            else if (i!=1 && j==n)
            {
               printf("*");
                 
            }
            else if (i!=1 && j==m)
            {
                printf("*");
                m--;
            }
            
            else 
            {
                printf(" ");
            }
        }
        n++;
        printf("\n");
    }

     m=x-1  ;
     n=2   ;

    for(int i=(x+1)/2 -1 ; i>=1 ;i--)
    {
        for (int j = 1 ; j<=x ; j++ )
        {
            
            if ( i==(x+1)/2 || j==(x+1)/2 )
            {
                printf("*");
               
            }
            else if (i!=1 && j==n)
            {
               printf("*");
                 
            }
            else if (i!=1 && j==m)
            {
                printf("*");
                m--;
            }
            
            else 
            {
                printf(" ");
            }
        }
        n++;
        printf("\n");
    }
*/

//36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36 36


/*

// right arrow 

// Enter the odd number x :- 5

//        *    
//         *
//          *
//           *
//  ***********
//           *
//          *
//         *
//        *

int x ; 
printf("Enter the odd number x :- ");
scanf("%d", &x);

for (int i=1 ; i<=x ; i++)
{
    for (int j= -x ; j<=x ; j++)
    {
        if (i==x || j==i )
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


for (int i=x-1; i>=1; i--)
{
    for (int j=-x ; j<=x-1 ; j++)
    {
        if ( j==i )
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
*/


//37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37 37

/*

// left arrow 

//Enter the odd number x :- 5

//      *      
//     *
//    *
//   *
//  ***********
//   *
//    *
//     *
//      *


int x ; 
printf("Enter the odd number x :- ");
scanf("%d", &x);

for (int i=1 ; i<=x ; i++)
{
    for (int j= x ; j>= -x ; j--)
    {
        if (i==x || j==i )
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

for (int i=x-1; i>=1; i--)
{
    for (int j=x ; j>=-x ; j--)
    {
        if ( j==i )
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

*/

}
