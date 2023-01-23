class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> sets(sentence.begin(), sentence.end());
        return sets.size()!=26?false:true;
      
    }
};