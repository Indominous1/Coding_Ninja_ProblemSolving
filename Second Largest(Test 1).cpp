Problem Statement-
Take input a stream of n integer elements, find the second largest element present.
The given elements can contain duplicate elements as well. If only 0 or 1 element is given, the second largest should be INT_MIN ( - 2^31 ).
  
Input format :
Line 1 : Total number of elements (n)

Line 2 : N elements (separated by space)

Sample Input 1:
 4
 3 9 0 9
Sample Output 1:
 3
   
Sample Input 2 :
 2
 4 4
Sample Output 2:
 -2147483648
   
Sample Output Explanation:
Since both the elements are equal here, hence second largest element is INT_MIN i.e. ( -2^31 )
  
Solution-
#include <bits/stdc++.h>
using namespace std;
#include <climits>

// C++ program to find second largest
// element in an array

void print2largest(int arr[], int arr_size)
{
	int i, first, second;
	if (arr_size < 2) {
		cout<<INT_MIN;
		return;
	}

	sort(arr, arr + arr_size);
      for (i = arr_size - 2; i >= 0; i--) {
		
		if (arr[i] != arr[arr_size - 1]) {
			cout<<arr[i];
			return;
		}
	}

	cout<<INT_MIN;
}

int main()
{
	int n;
    cin>>n;
	int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
	print2largest(arr, n);
	return 0;
}
