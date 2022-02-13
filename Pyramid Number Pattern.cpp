Problem Statement- 
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  212
 32123
4321234
  
Input format : N (Total no. of rows)

Output format : Pattern in N lines

Sample Input :
5
Sample Output :
    1
   212
  32123
 4321234
543212345
      
Solution-
#include<iostream>
using namespace std;

int main(){

  // Write your code here  
    int i,j,row;
    cin>>row;

    for(i=1;i<=row;i++)
    {
        for(j=1;j<=row-i;j++)
        {
            cout<<" ";
        }

        for(j=i;j>=1;j--)
        {
            cout<<j;
        }

        for(j=2;j<=i;j++)
        {
            cout<<j;        
        }
        cout<<endl;
    }

    return 0;
}
