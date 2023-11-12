#include<iostream>
using namespace std;

// * * * *
// * * * *
// * * * *
// * * * *
void    pattern1(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
               cout<<"*"<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}

// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
void pattern2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
               cout<<i<<" ";
        }
         cout<<endl;
    }
     cout<<endl;
}

// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
void pattern3(int n)
{
      for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
               cout<<j<<" ";
        }
         cout<<endl;
    }
     cout<<endl;
}

  // 4 3 2 1
 //  4 3 2 1
 //  4 3 2 1
 // 4 3 2 1

void pattern4(int n)
{
      for(int i=1;i<=n;i++)
    {
        for(int j=4;j>=1;j--)
        {
               cout<<j<<" ";
        }
         cout<<endl;
    }
     cout<<endl;
}

 // 1 2 3
 // 4 5 6
 // 7 8 9

 // and

 // 9 8 7
 // 6 5 4
 // 3 2 1

void pattern5(int n)
{
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
               cout<<k<<" ";
               if(i<=2)
               {
                   cout<< " ";
               }
               k++;
        }
         cout<<endl;
    }
     cout<<endl;

  // and
 // 9 8 7
 // 6 5 4
 // 3 2 1

 int l=n*n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
               cout<<l<<" ";
               if(i>2)
               {
                   cout<< " ";
               }
              l--;
        }
         cout<<endl;
    }
     cout<<endl;

}

// *
// * *
// * * *
// * * * *

void pattern6(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
               cout<<"*"<<" ";
        }
         cout<<endl;
    }
     cout<<endl;
}

// 1
// 2 2
// 3 3 3
// 4 4 4 4
void pattern7(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
               cout<<i<<" ";
        }
         cout<<endl;
    }
     cout<<endl;
}

// 1
// 2 3
// 4 5 6
// 7 8 9 10
void pattern8(int n)
{
    int k=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
               cout<<k<<" ";
               k++;
        }
         cout<<endl;
    }
     cout<<endl;
}


// 1
// 2 3
// 3 4 5
// 5 6 7 18
void pattern9(int n)
{
    int k;
    for(int i=1;i<=n;i++)
    {
           k =  i;
        for(int j=1;j<=i;j++)
        {
            cout<<k;
            k++;
        }
         cout<<endl;

    }
     cout<<endl;
}

 // A A A
 // B B B
 // C C C
void pattern10(int n)
{
    char k = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<k<<" ";
        }
        k++;
         cout<<endl;

    }
     cout<<endl;
}

// A B C
// D E F
// G H I
void pattern11(int n)
{
    char k = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<k<<" ";
            k++;
        }
         cout<<endl;

    }
     cout<<endl;
}

// A B C
// A B C
// A B C
void pattern12(int n)
{
    for(int i=1;i<=n;i++)
    {
        char k = 'A';
        for(int j=1;j<=n;j++)
        {
            cout<<k<<" ";
            k++;
        }
         cout<<endl;

    }
     cout<<endl;
}

 // playing card pattern
void pattern13(int n)
{
    char k = 'A';
    for(int i=1;i<=n;)
    {

        for(int j=1;j<=n;j++)
        {
                char k= i;
            cout<<k<<" ";
            k++;
        }
        i++;
        k-=i;
         cout<<endl;

    }
     cout<<endl;
}

//A B C D
//B C D E
 //C D E F
 //D E F G
void pattern14(int n)
{
    for(int i=1;i<=n;i++)
    {
        char k = 'A'+i-1;
        for(int j=1;j<=n;j++)
        {
            cout<<k<<" ";
            k++;
        }
         cout<<endl;

    }
     cout<<endl;
}
 //A
 //B B
//C C C
//D D D D
void pattern15(int n)
{
    for(int i=1;i<=n;i++)
    {
        char k = 'A'+i-1;
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
        }
         cout<<endl;

    }
     cout<<endl;
}

 //D
//C D
//B C D
//A B C D
void pattern16(int n)
{
    for(int i=1;i<=n;i++)
    {
        char k = 'A'+n-1-(i-1);
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
         cout<<endl;

    }
     cout<<endl;
}

//A
//B C
//C D E
//D E F G
void pattern17(int n)
{
    for(int i=1;i<=n;i++)
    {
        char k = 'A'+i-1;
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
         cout<<endl;

    }
     cout<<endl;
}


//A
//B C
//D E F
//G H I J
void pattern18(int n)
{
    char k = 'A';
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
         cout<<endl;

    }
     cout<<endl;
}


//             *
//          * *
//      *  * *
//    * * * *
void pattern19(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int k=1;k<=n-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
         cout<<endl;

    }
     cout<<endl;
}

//   * * * *
//   *  * *
//   *  *
//   *
void pattern20(int n)
{
    for(int i=1;i<=n;i++)
    {

        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
         cout<<endl;

    }
     cout<<endl;
}


//   * *  *  *
//      *  *  *
//          *  *
//              *
void pattern21(int n)
{
    for(int i=1;i<=n;i++)
    {
      for(int k=1;k<=i-1;k++)
      {
          cout<<" ";
      }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<"*";
        }
         cout<<endl;

    }
     cout<<endl;
}

//   1 1 1 1
//      2 2 2
//         3 3
//            4
void pattern22(int n)
{
    for(int i=1;i<=n;i++)
    {
      for(int k=1;k<=i-1;k++)
      {
          cout<<" ";
      }
        for(int j=1;j<=n-i+1;j++)
        {
            cout<<i;
        }
         cout<<endl;

    }
     cout<<endl;
}

//        1
//      121
//    12321
//  1234321
void pattern23(int n)
{
    for(int i=1;i<=n;i++)
    {
      for(int k=1;k<=n-i;k++)
      {
          cout<<" ";
      }
        for(int j=1;j<=i;j++)
        {
            cout<<j;
        }
          for(int l=0;l<i-1;l++)
        {
            cout<<i-l-1;
        }
         cout<<endl;

    }
     cout<<endl;
}

//        1
//      22
//    333
//  4444
void pattern24(int n)
{
    for(int i=1;i<=n;i++)
    {
      for(int k=1;k<=n-i;k++)
      {
          cout<<" ";
      }
        for(int j=1;j<=i;j++)
        {
            cout<<i;
        }
       cout<<endl;
    }
     cout<<endl;
}

//             1
//        2   3
//    4  5   6
//7  8  9  10


void pattern25(int n)
{
    int k=1;
    for(int i=1;i<=n;i++)
    {
      for(int k=1;k<=n-i;k++)
      {
          cout<<" ";
      }
        for(int j=0;j<i;j++)
        {
           cout<<k;
           k++;
        }
       cout<<endl;
    }
     cout<<endl;
}


//    1 2 3 4 4 3 2 1
 //   1 2 3 * * 3 2 1
 //   1 2 * * * * 2 1
  //  1 * * * * * * 1


void pattern26(int n)
{
    for(int i=1;i<=n;i++)
    {
          int k=1;
        for(int j=0;j<n-i+1;j++)
        {
           cout<<k;
           k++;
        }
            for(int k=n;k>n-i+1;k--)
        {
            cout<<"*";
        }

             for(int l=0;l<i-1;l++)
        {
            cout<<"*";
        }
        for(int f=n-i+1;f>=1;f--)
        {
           cout<<f;

        }
        cout<<endl;
    }
     cout<<endl;
}

int main()
{
    int n;
    cout<<"enter number of row :"<<endl;
    cin>>n;
    cout<<endl;
    pattern1(n);
    pattern2(n);
    pattern3(n);
    pattern4(n);
    pattern5(n);
    pattern6(n);
    pattern7(n);
    pattern8(n);
    pattern9(n);
    pattern10(n);
    pattern11(n);
    pattern12(n);
    pattern13(n);
    pattern14(n);
    pattern15(n);
    pattern16(n);
    pattern17(n);
    pattern18(n);
    pattern19(n);
    pattern20(n);
    pattern21(n);
    pattern22(n);
    pattern23(n);
    pattern24(n);
    pattern25(n);
    pattern26(n);
}
