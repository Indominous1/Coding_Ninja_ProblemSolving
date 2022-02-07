Problem Statement-
Print the following pattern for the given number of rows.
Pattern for N = 4
   1
  232
 34543
4567654
The dots represent spaces.

Input format :
Integer N (Total no. of rows)
  
Output format :
Pattern in N lines

Constraints :
0 <= N <= 50
  
Sample Input 1:
5
Sample Output 1:
    1
   232
  34543
 4567654
567898765
          
Sample Input 2:
4
Sample Output 2:
   1
  232
 34543
4567654

Solution-
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<n-i+1;j++)
        {
            cout<<" ";
        }
        for(int j=i;j<=((2*i)-1);j++)
        {
            cout<<j;
        }
        for(int j=(2*(i-1));j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
    return 0;
}
