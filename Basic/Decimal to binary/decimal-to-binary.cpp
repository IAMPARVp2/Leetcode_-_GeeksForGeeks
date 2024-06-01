//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

void toBinary(int N)
{
    
     if (N == 0) {
        cout << "0";
        return;
    }string binary = " ";
     while (N > 0) {
        // Determine if the current bit is '0' or '1' and prepend it to the string
        if (N % 2 == 1) {
            binary = '1' + binary;
        } else {
            binary = '0' + binary;
        }
        N = N / 2;  // Divide N by 2 to move to the next bit
    }

    cout << binary;  // Output the binary string

    
        
}

//{ Driver Code Starts.

int main() {
	//code
	
	int t;
	cin>>t;
	
	
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    toBinary(n);
	    cout<<endl;
	}
	return 0;
}
// } Driver Code Ends