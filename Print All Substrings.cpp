Program Statement-
For a given input string(str), write a function to print all the possible substrings.
Substring
A substring is a contiguous sequence of characters within a string. 
  
Example: "cod" is a substring of "coding". Whereas, "cdng" is not as the characters taken are not contiguous

Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
  
Output Format:
Print the total number of substrings possible, where every substring is printed on a single line and hence the total number of output lines will be equal 
to the total number of substrings.
  
Note:
The order in which the substrings are printed, does not matter.
  
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second

Sample Input 1:
abc
Sample Output 1:
a 
ab 
abc 
b 
bc 
c 

Sample Input 2:
co
Sample Output 2:
c 
co 
o

Solution-
void printSubstrings(char str[]) {
    int n=strlen(str);
    
     for (int len = 1; len <= n; len++)
    {   
        for (int i = 0; i <= n - len; i++)
        {
            int j = i + len - 1;           
            for (int k = i; k <= j; k++)
                cout << str[k];
             
            cout << endl;
        }
    }
}

Main Code(already given)-
#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    printSubstrings(str);
}
