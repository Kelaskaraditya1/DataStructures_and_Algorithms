#include<iostream>
using namespace std;
int main()
{
    // pattern 11:     *
    //                ***
    //               *****
    //              *******
    //             ********* 
    //            ***********

    // code: Swatha kelay BC!!
    // for(int i=0;i<6;i++)
    // {
    //    for(int k=0;k<6-i-1;k++)
    //    cout<<" ";
    //    for(int j=0;j<(2*i+1);j++)
    //    cout<<"*";
    //    cout<<endl;
    // }    

//     pattern 12:   
//      * 
//     * *
//    * * *
//   * * * *
//  * * * * *
// * * * * * *
//  * * * * *
//   * * * *
//    * * *
//     * *
//      *  

// code:
// for(int i=0;i<6;i++)
// {
//     for(int j=0;j<6-i-1;j++)
//     cout<<" ";
//     for(int k=0;k<i+1;k++)
//     cout<<"* ";
//     cout<<endl;
// }
// for(int i=0;i<6;i++)
// {
//     for(int j=0;j<=i;j++)
//     cout<<" ";
//     for(int k=0;k<6-i-1;k++)
//     cout<<"* ";
//     cout<<endl;
// }

//  pattern 13:   
//      * 
//     * *
//    *   *
//   *     *
//  *       *
// *         *
//  *       *
//   *     *
//    *   *
//     * *
//      *  

// code:swatha Kelay BC!!

// for(int i=0;i<6;i++)
// {
//    for(int j=0;j<5-i;j++)
//    cout<<" ";
//    for(int k=0;k<=2*i+1;k++)
//    {
//     if(k==0||k==2*i)
//     cout<<"*";
//     else
//     cout<<" ";
//    }
//     cout<<endl;
// }
// for(int i=0;i<6;i++)
// {
//     for(int j=0;j<i;j++)
//     cout<<" ";
//     for(int k=0;k<=10-i;k++)
//     {
//         if(k==0||k==(10-2*i))
//         cout<<"*";
//         else
//         cout<<" ";
//     }
//     cout<<endl;
// }


// pattern 14:
//             ***** *****
//             ****   ****
//             ***     ***
//             **       **
//             *         * 
//             *         *
//             **       **
//             ***     ***
//             ****   ****
//             ***** *****

// code: my try
//upper Side
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<5-i;j++)
//     cout<<"*";
//     for(int k=0;k<=i;k++)
//     cout<<" ";
//     for(int l=0;l<i;l++)
//     cout<<" ";
//     for(int m=0;m<5-i;m++)
//     cout<<"*";
//     cout<<endl;
// }
//Lower side:
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i+1;j++)
//     cout<<"*";
//     for(int k=0;k<=5-i-1;k++)
//     cout<<" ";
//     for(int l=0;l<5-i;l++)
//     cout<<" ";
//     for(int m=0;m<i+1;m++)
//     cout<<"*";
//     cout<<endl;
// }
// code: Luv sirs code
//upeer side:
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<5-i;j++)
//     cout<<"*";
//     for(int k=0;k<2*i+1;k++)
//     cout<<" ";
//      for(int j=0;j<5-i;j++)
//     cout<<"*";
//     cout<<endl;
// }
//lower side:
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i+1;j++)
//     cout<<"*";
//     for(int k=0;k<9-2*i;k++)
//     cout<<" ";
//     for(int j=0;j<i+1;j++)
//     cout<<"*";
//     cout<<endl;
// }

// pattern 15:  
// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5
// 5*5*5*5*5
// 4*4*4*4
// 3*3*3
// 2*2
// 1

//upper side:
// int count1=1;
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i+1;j++)
//     {
//         if(j==i)
//         {
//             cout<<count1++;
//         }
//         else
//         cout<<count1<<"*";
//     }
//     cout<<endl;
// }
//;ower side:
// int count2=5;
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<5-i;j++)
//     {
//         if(j==5-i-1)
//         {
//             cout<<count2;
//             count2--;
//         }
//         else
//         cout<<count2<<"*";   
// }
// cout<<endl;
// }

//pattern 16:    
// A
// ABA
// ABCBA
// ABCDCBA
// ABCDEDCBA
// char ch=65;
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i+1;j++)
//     cout<<ch++;
//     --ch;
//     for(int k=0;k<i;k++)
//     cout<<--ch;
//     ch=65;
//     cout<<endl;
// }
// pattern 17:
// 1 
// 121
// 12321
// 1234321
// 123454321

// code:

// int count=1;
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i+1;j++)
//     cout<<count++;
//     --count;
//     for(int k=0;k<i;k++)
//     cout<<--count;
//     cout<<endl;
//     count=1;
// }

// pattern 18: solid Square;

// code:
// for(int i=0;i<7;i++)
// {
//     for(int j=0;j<7;j++)
//     cout<<"* ";
//     cout<<endl;
// }

// pattern 19: Hollow Square

// code:

// for(int i=0;i<7;i++)
// {
//     for(int j=0;j<7;j++)
//     {
//         if(j==0||j==6||i==0||i==6)
//         cout<<"*";
//         else 
//         cout<<" ";
//     }
//     cout<<endl;
// }

// pattern 20:

// 1
// 12
// 1 3
// 1  4
// 12345

// code:

// int count=1;
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i+1;j++)
//     {
//         if(j==0||j==i||i==4)
//         cout<<count++;
//         else
//         {
//             cout<<" ";
//             count++;
//         }
//     }
//     cout<<endl;
//     count=1;
// }

// pattern 21:

//      1
//     232
//    34543
//   4567654
//  567898765

// code:
// int count=0;
// for(int i=0;i<5;i++)
// {
//     for(int k=0;k<5-i;k++)
//     cout<<" ";
//     count=i+1;
//     for(int j=0;j<i+1;j++)
//     cout<<count++;
//     --count;
//     for(int l=0;l<i;l++)
//     cout<<--count;
//     cout<<endl;
// }

// pattern 22:

//      1
//     1 2
//    1   3
//   1     4
//  1 1 2 3 5

// code:
// int count=1;
// for(int i=0;i<5;i++)
// {
//     for(int k=0;k<5-i;k++)
//     cout<<" ";
//     for(int j=0;j<2*i+1;j++)
//     {
//         if(j==0)
//         cout<<count;
//         else if(j==2*i)
//         cout<<i+1;
//         else if(i==4)
//         {
//             if(j%2==0)
//             cout<<count++;
//             else
//             cout<<" ";
//         }
//         else
//         {
//         cout<<" ";   
//         count++;
//         }
//     }
//     count=1;
//     cout<<endl;
// }

// pattern 23:

//     1
//    121
//   12321
//  1234321
// 123454321

// int count=1;
// for(int i=0;i<5;i++)
// {
//     for(int k=0;k<5-i-1;k++)
//     cout<<" ";
//     for(int j=0;j<i+1;j++)
//     cout<<count++;
//     --count;
//     for(int l=0;l<i;l++)
//     cout<<--count;
//     count=1;
//     cout<<endl;
// }


// pattern 24:

// ********1********
// *******2*2*******
// ******3*3*3******    
// *****4*4*4*4*****
// ****5*5*5*5*5****

// code:


// int count=1;
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<9-i;j++)
//     {
//         if(j==8-i)
//         {
//             for(int k=0;k<2*i+1;k++)
//             {
//                 if(k%2==0)
//                 cout<<count;
//                 else
//                 cout<<"*";
//             }
//         }
//         else
//         cout<<"*";
//     }
//     for(int l=0;l<8-i;l++)
//     cout<<"*";
//     count++;
//     cout<<endl;
// }

// pattern 25:

// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

// code:


// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i+1;j++)
//     cout<<"*";
//     for(int k=0;k<8-2*i;k++)
//     cout<<" ";
//     for(int j=0;j<i+1;j++)
//     cout<<"*";
//     cout<<endl;  
// }
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<5-i;j++)
//     cout<<"*";
//     for(int k=0;k<2*i;k++)
//     cout<<" ";   
//     for(int l=0;l<5-i;l++)
//     cout<<"*";
//     cout<<endl;
// }
 
    return 0;
}