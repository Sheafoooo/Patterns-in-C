#include <stdio.h>

int main()
{

  // 00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
  
  /*

  //  solid rectangle

  // Length  : 7
  // Width : 5
  // *****
  // *****
  // *****
  // *****
  // *****
  // *****
  // *****

    int  i, j, l, w;

      printf("Length  : ");
      scanf("%d", &l  );
      printf("\nWidth : ");
      scanf("%d", &w);

      if ( l>1 &&  l<10  &&  w<10 && w>1 )
      {
        for (i = 1; i <= l ; i++)
        {
          for (j = 1 ; j <= w ; j++)
          {
            printf("*");
          }
          printf("\n");
        }
      }
      else
      {
        printf("The number you entered is not valid her");
      }
    
  */
  // 11111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111

  /*
  // hollow 3*5 rectangle

  // Length  : 6
  // Width : 7
  // *******
  // *     *
  // *     *
  // *     *
  // *     *
  // *******

  int i, j, l, w;
  printf("Length  : ");
  scanf("%d", &l);
  printf("\nWidth : ");
  scanf("%d", &w);

  for (i = 1; i <= l; i++)
  {
    for (j = 1; j <= w; j++)
    {
      if ((i == 1 || i == l) || (j == 1 || j == w))
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

  // 222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222222

  /*
   // Half pyramid

    //  N = 7
    // *
    // **  
    // ***
    // ****
    // *****
    // ******
    // *******

   int n ,i , j;
   printf(" N = ");
   scanf("%d",&n);

  for (i=1 ; i<=n ; i++)
  {
    for (j=1 ; j<=i ; j++)
    {
      printf("*");
    }
    printf("\n");

  }
  */


  // 333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333333
  
/*
  // Inverted Half Pyramid

  // ****
  // ***
  // **
  // *

  int  i, j;
  for (i = 4; i >=1 ; i--)
  {
    for (j = 1; j <= i; j++)
    {
      printf("*");
    }
    printf("\n");
  }
  */

  // 444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444444
 
  /*

  // hollow inverted half pyramid

  // N= 7
  // *******
  // *    *
  // *   *
  // *  *
  // * *
  // **
  // *

  int i , j , n ;
  printf("N= ");
  scanf("%d",&n);

  for (i = n; i >= 1; i--)
  {
    for (j = 1; j <= i; j++)
    {
      if (j==i || j==1 || i==n)
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

  //555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555555

  /*
  // full pyramid 1

  // N= 6
  //      *     
  //     ***
  //    *****
  //   *******
  //  *********
  // ***********

  int i, j, n;
  printf("N= ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (j + i >= (n + 1) && j - i <= (n - 1) )
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

  // 666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666666

  /*
  
  // full pyramid 2

  // N= 5
  //     *    
  //    * *
  //   * * *
  //  * * * *
  // * * * * *

  int i, j, n;
  printf("N= ");
  scanf("%d", &n);
  for (i = 1; i <=n; i++)
  {
    for (j = 1; j <= (2*n -1); j++)
    {
      if (j + i >= (n + 1) && j - i <= (n - 1) && ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)))
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

  // 777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777777

  /*

  // inverted full pyramid 1

  // N= 6
  // ***********
  //  *********
  //   *******
  //    *****
  //     ***
  //      *

  int i, j, n;
  printf("N= ");
  scanf("%d", &n);
  for (i = n; i >= 1; i--)
  {
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (j + i >= (n + 1) && j - i <= (n - 1) )
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

  // 888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888888
  
  /*

  // inverted full pyramid 2

  // N= 7
  // * * * * * * *
  //  * * * * * *
  //   * * * * *
  //    * * * *
  //     * * *
  //      * *
  //       *

  int i, j, n;
  printf("N= ");
  scanf("%d", &n);
  for (i = n; i >= 1; i--)
  {
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (j + i >= (n + 1) && j - i <= (n - 1) && ((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)))
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

  // 999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999999

  /*

  // hollow full pyramid 1

  // N= 7
  //       *      
  //      * *
  //     *   *
  //    *     *
  //   *       *
  //  *         *
  // *************

  int i, j, n;
  printf("N= ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (j + i == (n + 1) || j-i == (n - 1) || i==n )
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

  // 101010101010101010101010101010101010101010101010101010101010101010100101010101010101010101010101010101010101010101010101010010101010101010

  /*

  // hollow full pyramid2

  // N= 6
  //      *     
  //     * *
  //    *   *
  //   *     *
  //  *       *
  // * * * * * *

  int i, j, n;
  printf("N= ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (j + i == (n + 1) || j - i == (n - 1) || (i==n && j%2!=0) )
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

  // 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11 11
  
  /*
    // half pyramid with numbers

    // Enter N = 5
    // 1
    // 12
    // 123
    // 1234
    // 12345

    int i , j , n ;
    printf("Enter N = ");
    scanf("%d",&n);
    for (i=1 ; i<=n ; i++)
    {
      for ( j =1 ; j<= i  ; j++)
      {
        printf("%d",j);
      }
      printf("\n");
    }

  */

  // 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12 12

  /*
  // inversed half pyramid with numbers

  // Enter K = 5

  // 12345
  // 1234
  // 123
  // 12
  // 1

  int i , j , k;
  printf("Enter K = ");
  scanf("%d",&k);
  for (i = k ; i>=1 ; i--)
  {
    for (j = 1 ; j<= i ; j++)
    {
      printf("%d",j );
    }
    printf("\n");
  }

  */

  // 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13 13

  /*

  // hollow half pyramid with numbers

  // Enter k = 7
  // 1
  // 12
  // 1 3
  // 1  4
  // 1   5
  // 1    6
  // 1234567

  int i , j , k ;
  printf("Enter k = ");
  scanf("%dm",&k);
  for ( i =1 ; i<= k ; i++)
  {
    for ( j =1 ; j<= i ; j++)
    {
      if (j==1  ||i==k  || j==i )
      {
        printf("%d",j);
      }
      else
      {
         printf(" ");
      }
    }
    printf("\n");
  }
  
  */

  // 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14 14
  /*
  
  // full pyramid with numbers

  //     1    
  //    232
  //   34543
  //  4567564
  // 567896785

   int n = 5, k, l;

   for (int i = 1; i <= n; i++)
   {
     k = i + 1;
     l = i + 1;

     for (int j = n; j <= (3 * n - 2); j++)
     {

       if (i + j == (2 * n) || j - i == (2 * n - 2))
       {
         printf("%d", i);
       }
       else if (i + j > 2 * n && j - i < 2 * n - 2 && j <= 2 * n - 1)
       {

         printf("%d", k);
         k++;
       }
       else if (i + j > 2 * n && j - i < 2 * n - 2 && j > 2 * n - 1)
       {

         printf("%d", l);
         l++;
       }
       else
       {
         printf(" ");
       }
     }
     printf("\n");
   }
   
  */

  // 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15 15
  
  /*

    // hollow full pyramid with numbers 1

    //     1    
    //    2 2
    //   3   3
    //  4     4
    // 567898765

    int n = 5, l=8;
    for (int i = 1; i <= n; i++)
    {
      for (int j = n; j <= (3*n-2); j++)
      {
        if (i + j == (2 * n) || j - i == (2 * n - 2))
        {
          printf("%d", i);
        }
        else if (i ==5 && j<=9 )
        {
          printf("%d",j);
        }
        else if (i == 5 && j > 9)
        {
          printf("%d", l);
          l-- ;
        }
        else
        {
          printf(" ");
        }
      }
      printf("\n");
    }

  */

  // 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16 16
/*
  
  // hollow full pyramid with numbers 2

  //     1    
  //    1 2
  //   1   3
  //  1     4
  // 1 2 3 4 5

  int n = 5 ;

  for (int i = 1 ; i<=n ; i++)
  {
    for ( int j = 1 ; j<=2*n-1 ; j++)
    {
      if (i+j == n+1 && i!=5 )
      {
        printf("1");
      }
      else if (j - i == n - 1 && i != 5)
      {
        printf("%d",i);
      }
      else if ( i ==5 && j<=5  )
      {
        printf("%d ",j);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }

*/

  // 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17 17

/*  

// hollow inverted half pyramid with numbers

// 12345
// 2  5
// 3 5
// 45
// 5

 int n = 5 ;
  for (int i = 1 ; i<= n ; i++)
  {
    for (int j = 1 ; j<=n ; j++)
    {
      if ( i== 1)
      {
        printf("%d",j);
      }
      else if (j==1 )
      {
        printf("%d",i);
      }
      else if (i+j == n+1)
      {
        printf("%d",n);
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }

*/
  

  // 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18 18

  /*

 // other type of pyramids n-1

 //     1
 //     121
 //     12321
 //     1234321
 //     123454321

     int n = 5,
         m;
 for (int i = 1 ; i<=n ; i++)
 {
   m = i - 1;
   for (int j =1 ; j<=2*i-1 ; j++ )
   {
     if (j<=i)
     {
       printf("%d", j);
     }
     else
     {


       printf ("%d",m);
       m--;
     }

   }
   printf("\n");
 }
 */

  // 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19 19
  /*
    // other type of pyramids n - 2 "same as the previous example but with alpha characteres A B C"

    // A
    // ABA
    // ABCBA
    // ABCDCBA
    // ABCDEDCBA
    char m, x=65;
    int n = 69 ;
    for (int i = 65; i <= 69; i++)
    {
      m = i - 1;
      for (int j = 65; j <= (2 *(i-64) - 1)+64 ; j++)
      {
        if (j <= i)
        {
          printf("%c", j);
        }
        else
        {

          printf("%c", m);
          m--;
        }
      }
      printf("\n");
    }
  */

  // 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20 20

  // other type of pyramids n -3

  //        1
  //       121
  //      12321
  //     1234321
  //    123454321
  //   12345654321
  //  1234567654321

  /*
    int n , k ;
    printf("Enter a number from 1---> 9 \nN = ");
    scanf("%d",&n);
    printf("\n\n");

    for (int i = 1 ; i<=n ; i++)
    {
      for (int j =1 ; j<=2*n-1 ; j++)
      {
          if (i+j>n && i+j<= 2*n && j<=n)
          {
            k = i + j - n;
             printf("%d",k );
          }
          else if (j-i<n && j-i>0 && j>n)
          {
            k = n-(j-i) ;
            printf("%d",k);
          }

          else
          {
            printf(" ");
          }
      }
      printf("\n");

    }
    */

  // 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21 21

  /*
   // other type of pyramids n-4

   //   ****1****
   //   ***2*2***
   //   **3*3*3**
   //   *4*4*4*4*
   //   5*5*5*5*5


   int n, k;
   printf("Enter one digit = ");
   scanf("%d",&n);

   for (int i =1 ; i<= n ; i++)
   {
     for (int j =1 ; j<= (2*n)-1 ; j++)
     {

         if (((i % 2 == 0 && j % 2 == 0) || (i % 2 != 0 && j % 2 != 0)) && i + j >= n + 1 && j - i <= n - 1)
         {
           printf("%d", i);
         }
         else
         {
           printf("*");
         }

     }
     printf("\n");
   }

 */

  // 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22 22

  /*
   // other type of pyramid n-5

   // 1
   // 2 3
   // 4 5 6
   // 7 8 9 10
   // 11 12 13 14 15
   // 16 17 18 19 20 21
   // 22 23 24 25 26 27 28

        int x,
        y = 1;
    printf("Enter an integer number \n");
    printf("X = ");
    scanf("%d", &x);
    for (int i = 1; i <= x; i++)
    {
      for (int j = 1; j <= i; j++)
      {
        printf("%d ", y);
        y++;
      }
      printf("\n");
  }
  */
  // 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23 23
 
  /*
  
  // solid diamond pattern n-1

  // Enter width of the diamond 
  // W = 4
  //    *   
  //   * *
  //  * * *
  // * * * *
  //  * * *
  //   * *
  //    *

  int x;
  printf("Enter width of the diamond \n");
  printf("W = ");
  scanf("%d", &x);
  for (int i = 1; i <= x; i++)
  {
    for (int j = 1; j <= 2 * x - 1; j++)
    {
      if ((i + j >= x + 1) && ((j % 2 == 0 && i % 2 != 0) || (j % 2 != 0 && i % 2 == 0)) && (j - i <= x - 1))
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
  for (int i = x - 1; i >= 1; i--)
  {
    for (int j = 1; j <= 2 * x - 1; j++)
    {
      if ((i + j >= x + 1) && ((j % 2 == 0 && i % 2 != 0) || (j % 2 != 0 && i % 2 == 0)) && (j - i <= x - 1))
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

  // 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24 24
  
  /*
  // solid diamond pattern n-2

  // Enter the width of the Diamond 
  // X = 4
  //    *   
  //   ***
  //  *****
  // *******
  //  *****
  //   ***
  //    *

  int x ;
  printf("Enter the width of the Diamond \n");
  printf("X = ");
  scanf("%d",&x);
  for (int i = 1 ; i<=x ; i++)
  {
   for (int j=1 ; j<=2*x-1 ; j++)
   {
     if (j+i>=x+1 && j-i <=x-1)
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
  for (int i = x-1 ; i>=1 ; i--)
  {
   for (int j= 1 ; j<= 2*x-1 ; j++)
   {
     if (j+i>=x+1 && j-i <= x-1 )
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

  // 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25 25

  /*
   // Hollow Diamond

  // W = 5

  //     *    
  //    * *
  //   *   *
  //  *     *
  // *       *
  //  *     *
  //   *   *
  //    * *
  //     *

   int x ;
   printf("Enter the width of the diamond \n");
   printf(" W = ");
   scanf("%d",&x);

   for (int i=1 ; i<=x ; i++)
   {
    for (int j = 1 ; j<= 2*x-1 ; j++)
    {
      if (i+j == x+1 || j-i == x-1)
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
   for (int i = x-1 ; i >= 1; i--)
   {
     for (int j = 1; j <= 2 * x - 1; j++)
     {
       if ((i + j == x + 1 ) || (j - i == x - 1))
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

  // 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26 26
  
  /*

  // half solid diamond n-1
  // W = 4
  // *
  // **
  // ***
  // ****
  // ***
  // **
  // *

  int x , y ,z=1 ;
  printf("Enter the width of the diamond, please ^_^\n");
  printf("W = ");
  scanf("%d",&x);

  for (int i =1 ; i<=2*x-1; i++)
  {
    if (i<=x )
    {
      y=i ;
    }
    else if (i>x && i<= 2*x)
    {
      y = x-z ;
      z++;
    }
   for (int j =1 ; j<= i ; j++)
    {
      if (j<=y )
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

  // 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27 27
  
  /*
  // half solid diamond n-2
  // W = 4
  // *
  //  *
  // * *
  //  * *
  // * *
  //  *
  // *
  int x, y, z = 1;
  printf("Enter the width of the diamond, please ^_^\n");
  printf("W = ");
  scanf("%d", &x);

  for (int i = 1; i <= 2 * x - 1; i++)
  {
    if (i <= x)
    {
      y = i;
    }
    else if (i > x && i <= 2 * x)
    {
      y = x - z;
      z++;
    }
    for (int j = 1; j <= i; j++)
    {
      if (j <= y && ((y%2==0 && j%2==0)||(y%2!=0 && j%2!=0)))
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