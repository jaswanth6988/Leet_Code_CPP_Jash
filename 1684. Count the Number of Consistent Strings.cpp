class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
         unordered_set<char> allowed_set(allowed.begin(), allowed.end());
         int count = 0;

         for (const string& word : words) {
        bool is_consistent = true;
        for (char c : word) {
            if (allowed_set.find(c) == allowed_set.end()) {
                is_consistent = false;
                break;
            }
        }
        if (is_consistent) {
            count++;
        }
    }
    
    return count;
    }
};
