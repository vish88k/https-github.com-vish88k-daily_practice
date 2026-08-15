class Solution {
public:
    string removeSubstring(string s, int k) {
        string ans = "";

        for(char c : s) {
            ans += c;

            if(ans.size() >= 2 * k) {
                bool match = true;

                // Check last k characters are '('
                for(int i = ans.size() - 2*k; i < ans.size() - k; i++) {
                    if(ans[i] != '(') {
                        match = false;
                        break;
                    }
                }

                // Check last k characters are ')'
                if(match) {
                    for(int i = ans.size() - k; i < ans.size(); i++) {
                        if(ans[i] != ')') {
                            match = false;
                            break;
                        }
                    }
                }

                if(match) {
                    ans.erase(ans.size() - 2*k, 2*k);
                }
            }
        }
    

        return ans;
    }
};