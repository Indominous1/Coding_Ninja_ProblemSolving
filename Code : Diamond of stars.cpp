Problem Statement-
Print the following pattern for the given number of rows.
Note: N is always odd.
  *
 ***
*****
 ***
  *
Pattern for N = 5
The dots represent spaces.
  
Input format :
N (Total no. of rows and can only be odd)
  
Output format :
Pattern in N lines

Constraints :
1 <= N <= 49
  
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
  
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *

Solution-
#include<iostream>
using namespace std;

int main(){
     int n;
     cin>>n;
     int m=(n/2)+1;
     for(int i=1;i<=m;i++)                   //upper triangle
     {

         for(int j=1;j<=m-i;j++)
         {
            cout<<" ";
         }
         for(int j=1;j<=((2*i)-1);j++)
         {
            cout<<"*";
         }
         cout<<endl;
     }
     ///////  //////////// ///////////////
    for(int i=m-1;i>=1;i--)                   //lower triangle
     {
         for(int j=m-i;j>=1;j--)
         {
            cout<<" ";
         }
         for(int j=((2*i)-1);j>=1;j--)
         {
             cout<<"*";
         }
         cout<<endl;
     }
    return 0;
}
