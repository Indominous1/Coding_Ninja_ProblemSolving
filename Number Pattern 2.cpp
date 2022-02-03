Problem Statement-
  
Print the following pattern
Pattern for N = 4

The dots represent spaces.
      1
    2 3
  3 4 5
4 5 6 7
  
Input Format :
N (Total no. of rows)
  
Output Format :
Pattern in N lines

Sample Input :
5
Sample Output :
        1
      2 3
    3 4 5
  4 5 6 7
5 6 7 8 9
The dots represent spaces.
 
Solution-
 #include<iostream>
using namespace std;

int main(){

     int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int k=i;
        for(int j=1;j<=n;j++)
        {
            if(j<(n-i+1))
            {
                cout<<" ";
            }
            else
            {
            cout<<k;
            k++;
        }
        }
        cout<<endl;
    }
   return 0;
}
