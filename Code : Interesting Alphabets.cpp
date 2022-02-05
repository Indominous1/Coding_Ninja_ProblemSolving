Problem Statement-
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE

Input format :
N (Total no. of rows)
  
Output format :
Pattern in N lines

Constraints :
0 <= N <= 26
  
Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH

Sample Input 2:
7
Sample Output 2:
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG

Solution-
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j>=1;j--)
        {
            cout<<char(65+n-j);
        }
        cout<<endl;
    }
}
