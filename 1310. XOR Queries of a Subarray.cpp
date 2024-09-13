class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
         int n = arr.size();
    std::vector<int> prefixXOR(n + 1, 0);
    
    for (int i = 0; i < n; ++i) {
        prefixXOR[i + 1] = prefixXOR[i] ^ arr[i];
    }

    std::vector<int> result;
    for (const auto& query : queries) {
        int left = query[0];
        int right = query[1];
        result.push_back(prefixXOR[right + 1] ^ prefixXOR[left]);
    }

    return result;
    }
};
