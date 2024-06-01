//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int swapNibbles(int n) {
    
 
    
    int str1 = (n & 0xF0) >> 4;  // Get the left nibble and shift right by 4 bits
    int str2 = (n & 0x0F) << 4; // Get the right nibble and shift left by 4 bits
    int result = str1 | str2; // Combine the swapped nibbles
    return result;
    }
    
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.swapNibbles(n) << endl;
    }
    return 0;
}
// } Driver Code Ends