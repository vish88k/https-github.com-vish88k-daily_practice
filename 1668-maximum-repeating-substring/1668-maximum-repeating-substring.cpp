class Solution {
public:
    int maxRepeating(string sequence, string word){
        int n=sequence.size();
        if(word.size()>n){
            return 0;
        }
        int count=0;
          string temp = word;

        while (sequence.find(temp) != string::npos) {
            count++;
            temp += word;
        }
          return count;
        }
};
       