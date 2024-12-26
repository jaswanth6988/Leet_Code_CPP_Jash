// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         unordered_set<int> set1(nums.begin(), nums.end());
//         //sort(nums.begin(),nums.end());
//         int n = set1.size();
//         if(n<3&&n==2){
//             return nums[1];
//         }else if(n==1){
//             return nums[0];
//         }else{
//             return nums[n-3];
//         }

//     }
// };

// class Solution {
// public:
//     int thirdMax(vector<int>& nums) {
//         set<int> uniqueNums(nums.begin(), nums.end());
//         if (uniqueNums.size() < 3) {
//             return *max_element(uniqueNums.begin(), uniqueNums.end());
//         }
//         auto it = uniqueNums.end(); 
//         --it;
//         --it; 
//         --it; 
//         return *it;
//     }
// };


class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.rbegin(), nums.rend());
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
   // set<int> uniqueNums(nums.begin(), nums.end());
        if (nums.size() < 3) {
            return nums[0];
        }
        return nums[2];
    }
};
