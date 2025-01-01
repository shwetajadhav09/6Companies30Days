class Solution {
    private:
    bool comp(vector<int> &arr, int i, int j){
        for(int k=i;k<j-1;k++){
            if(arr[k]>=arr[k+1]) return false;
        }
    return true;
    }
public:

    int incremovableSubarrayCount(vector<int>& nums) {
        int n = nums.size();
        int count =0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(comp(nums,0,i) && comp(nums,j+1,n)){
                    if( i>0 && j<n-1){
                        if(nums[i-1]<nums[j+1])count++;
                    }
                    else{
                        count++;
                    }
                }
            }
        }
        return count;
    }
};