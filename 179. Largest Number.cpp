class Solution {
public:
    static bool compare(const string &a, const string &b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> numStrs;

        for (int num : nums) {
            numStrs.push_back(to_string(num));
        }

        sort(numStrs.begin(), numStrs.end(), compare);

        if (numStrs[0] == "0") {
            return "0";
        }

        stringstream largest;
        for (const string &numStr : numStrs) {
            largest << numStr;
        }

        return largest.str();
    }
};
//jaswanth6988
