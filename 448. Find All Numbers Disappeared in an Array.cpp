// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> k;
//         int n = nums.size();
//         int ref = 1;
//         int a=0;
//         sort(nums.begin(), nums.end());
//         for(int i=0;i<n;i++){
//             if(nums[i]!=ref){
//                 k.push_back(ref);
//             }
//             ref++;
//         }

//         return k;
//     }
// };


//2 ms.
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> k;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int index = abs(nums[i]) - 1; 
            if (nums[index] > 0) {
                nums[index] = -nums[index]; 
            }
        }
        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) {
                k.push_back(i + 1); 
            }
        }

        return k;
    }
};





//39 ms.
// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int> k;
//         int n = nums.size();
//         unordered_set<int> present(nums.begin(), nums.end());
//         for (int ref = 1; ref <= n; ref++) {
//             if (present.find(ref) == present.end()) {     
//                 k.push_back(ref);
//             }
//         }
//         return k;
//     }
// };
