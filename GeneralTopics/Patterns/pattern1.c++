#include<iostream>
using namespace std;
int main()
{
//  pattern 1:  *****
//              *****
//              *****

// code:
// for(int i=0;i<3;i++)
// {
//     for(int j=0;j<5;j++)
//     cout<<"*";
//     cout<<endl;
// }


// pattern 2: *****
//            *   *
//            *****

// code:
// cout<<"Enter no of rows";
// int rows;
// cin>>rows;
//           for(int i=0;i<5;i++)
//           cout<<"*";
//           cout<<endl;
//           for(int j=1;j<rows-1;j++)
//           {
//             cout<<"*";
//             for(int k=0;k<3;k++)
//             cout<<" ";
//             cout<<"*";
//             cout<<endl;
//           }
//            for(int i=0;i<5;i++)
//           cout<<"*";

// pattern 3:  *
//             **
//             ***
//             ****

// code:
// for(int i=0;i<4;i++)
// {
//     for(int j=0;j<i+1;j++)
//     cout<<"*";
//     cout<<endl;
// }

// pattern 4: ****
//            ***
//            **
//            *

// code:
// for(int i=0;i<4;i++)
// {
//     for(int j=0;j<4-i;j++)
//     cout<<"*";
//     cout<<endl;
// }

// pattern 5: 1
//            12
//            123
//            1234
//            12345

// code:
// int count=1;
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<i+1;j++)
//         cout<<count++;
//         cout<<endl;
//         count=1;
// }

// pattern 6: 12345
//            1234
//            123
//            12
//            1

// code:
// int count=1;
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<5-i;j++)
//     cout<<count++;
//     cout<<endl;
//     count=1;
// }

// pattern 7: *
//           * *
//          * * *
//         * * * *
//        * * * * *
       
// code:
// for(int i=0;i<5;i++)
// {
//     for(int j=0;j<5-i-1;j++)
//     cout<<" ";
//     for(int k=0;k<i+1;k++)
//     cout<<"* ";
//     for(int j=0;j<5-i-1;j++)
//     cout<<" ";
//     cout<<endl;
// }

// pattern 8: * * * * *
//             * * * *
//              * * *
//               * *
//                * 

// code:
// for(int i=0;i<5;i++)
// {
//     for(int k=0;k<i;k++)
//     cout<<" ";
//     for(int j=0;j<5-i;j++)
//     cout<<"* ";
//     cout<<endl;
// }

// pattern 9: ******
//            *   *
//            *  *     
//            * *
//            **
//            * 

// code: swatha hun nhi kelay bc!!
    // for(int i=0;i<6;i++)
    // {
    //     for(int j=0;j<6;j++)
    //     {
    //         if(i==0||j==0||(j==6-i-1))
    //         cout<<"*";
    //         else
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // pattern 10: *
    //            * *
    //           *   *
    //          *     *
    //         *       *
    //        ***********

    // code :
    // for(int i=0;i<6;i++)
    // {
    //     if(i==5)
    //     {
    //         for(int l=0;l<10;l++)
    //         cout<<"*";
    //     }
    //     for(int k=0;k<6-i-1;k++)
    //         cout<<" ";
    //     for(int j=0;j<=10;j++)
    //     {
    //         if(j==0||j==2*i)
    //         cout<<"*";
    //         else
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}
