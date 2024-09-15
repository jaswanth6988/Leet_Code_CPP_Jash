class Solution {
public:
    int findTheLongestSubstring(string s) {
        
    unordered_map<int, int> mp;
    mp[0] = -1;  
    int res = 0, mask = 0;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'a') mask ^= 1 << 0;
        if (s[i] == 'e') mask ^= 1 << 1;
        if (s[i] == 'i') mask ^= 1 << 2;
        if (s[i] == 'o') mask ^= 1 << 3;
        if (s[i] == 'u') mask ^= 1 << 4;

        if (mp.find(mask) != mp.end()) {
            res = max(res, i - mp[mask]);
        } else {
            mp[mask] = i;
        }
    }
    return res;

    }
};

//jaswanth6988
