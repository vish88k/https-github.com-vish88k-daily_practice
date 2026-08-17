class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n=columnNumber;
    
    string ans;

    while (n > 0) {
        n--;                         // make it 0-based
        int rem = n % 26;             // get character
        ans += 'A' + rem;
        n /= 26;                      // move to next character
    }

    reverse(ans.begin(), ans.end());
    return ans;
}
};