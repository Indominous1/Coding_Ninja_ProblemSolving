Problem Statement-
Given a decimal number (integer N), convert it into binary and print.
The binary number should be in the form of an integer.
  
Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.

Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail
when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.

Input format :
Integer N

Output format :
Corresponding Binary number (long)
  
Constraints :
0 <= N <= 10^5

Sample Input 1 :
12
Sample Output 1 :
1100
  
Sample Input 2 :
7
Sample Output 2 :
111
  
Solution-
#include <bits/stdc++.h>
using namespace std;

long long int dectbin(int n)
{
   long int x=1;
   long long int ans=0;
    while(x<=n)
    {
        x=x*2;
    }
    x=x/2;
    while(x>0)
    {
        int last=n/x;
        n=n-(last*x);
        x=x/2;
        ans=ans*10+last;
        
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    
	cout<<dectbin(n);
    return 0;
}
