class Solution {
public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int> k;
        int n = arr.size();
        for(int i=0;i<n;i++){
            int pask = abs(arr[i]) - 1;
            if(arr[pask] < 0){
                k.push_back(abs(arr[i]));
            }else{
                arr[pask] = -arr[pask];
            }
        }
     return k;
    }
     
};
