Problem Statement-
Print the following pattern for given number of rows.
  
Input format :
Line 1 : N (Total number of rows)

Sample Input :
   5
Sample Output :
1234554321
1234**4321
123****321
12******21
1********1
  
Solution-
#include<iostream>
using namespace std;


int main(){

  // Write your code here
     int i, j, k, m,n;
    cin>>n;
 for(i=n; i>=1; i--)
 {
  for(j=1; j<=i; j++)
   cout << j;
  for(k=i; k<n; k++)
   cout << "**";
  for(m=i; m>=1; m--)
   cout << m;
  cout << "\n";
 }
 return 0;

}
