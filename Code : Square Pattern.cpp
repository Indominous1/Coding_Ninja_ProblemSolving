Problem Statement-
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
4444
4444
4444
  
Input format :
Integer N (Total no. of rows)
  
Output format :
Pattern in N lines

Constraints
0 <= N <= 50
  
Sample Input 1:
7
Sample Output 1:
7777777
7777777
7777777
7777777
7777777
7777777
7777777
  
Sample Input 1:
6
Sample Output 1:
666666
666666
666666
666666
666666
666666

Solution-
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cout<<n;
        }
        cout<<endl;
    }
}
