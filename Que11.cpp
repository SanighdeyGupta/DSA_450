class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int temp = 0;
        int n = nums.size();
        int arr[n];
        for(int i=0;i<n;i++){
            arr[i] = 0;
        }
        for(int i=0;i<n;i++){
            arr[nums[i]]++;
        }
        for(int i=0;i<n;i++){
            if(arr[i]>1){
                temp = i;
                break;
            }
        }
        return temp;
    }
};