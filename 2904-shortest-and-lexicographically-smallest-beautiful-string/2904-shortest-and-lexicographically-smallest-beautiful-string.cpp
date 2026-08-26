class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
      
        int i = 0;
        int j = 0;
        int count = 0;
        string ans = "";
        int n = s.size();

        // First window: find k ones
        while (j < n && count < k) {
            if (s[j] == '1') {
                count++;
            }
            j++;
        }

        // If we couldn't find k ones
        if (count < k) {
            return "";
        }

        // j is now one position AFTER the window
        j--;

        // Remove unnecessary zeros from left
        while (i <= j && s[i] == '0') {
            i++;
        }

        string current = s.substr(i, j - i + 1);

        if (ans == "" || current.size() < ans.size() ||
            (current.size() == ans.size() && current < ans)) {
            ans = current;
        }

        // Move the window
        j++;

        while (j < n) {

            // Add new character
            if (s[j] == '1') {
                count++;
            }

            // If we now have k+1 ones,
            // remove from left until we have k
            while (count > k) {
                if (s[i] == '1') {
                    count--;
                }
                i++;
            }

            // Remove unnecessary zeros from left
            while (i <= j && s[i] == '0') {
                i++;
            }

            // Exactly k ones
            if (count == k) {
                current = s.substr(i, j - i + 1);

                if (current.size() < ans.size() ||
                    (current.size() == ans.size() && current < ans)) {
                    ans = current;
                }
            }

            j++;
        }

        return ans;
    }
};