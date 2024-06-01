//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  

    string oddEven(string s) {
      
     int frequency[26] = {0};
        
        // Step 2: Count frequencies
        for (char c : s) {
            frequency[c - 'a']++;
        }
        
        // Step 3: Initialize x and y
        int x = 0, y = 0;
        
        // Step 4: Classify characters
        for (int i = 0; i < 26; ++i) {
            int position = i + 1; // position in the alphabet (1-based index)
            int freq = frequency[i];
            
            if (position % 2 == 0 && freq % 2 == 0 && freq > 0) { // Even position and even frequency
                x++;
            } else if (position % 2 != 0 && freq % 2 != 0) { // Odd position and odd frequency
                y++;
            }
        }
        
        // Step 5: Determine if sum is EVEN or ODD
        return (x + y) % 2 == 0 ? "EVEN" : "ODD";
    }
};




//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        string s;
        getline(cin, s);

        Solution obj;
        string res = obj.oddEven(s);

        cout << res << "\n";
    }
}

// } Driver Code Ends