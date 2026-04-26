class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int low=0,high=numbers.size()-1;

        while(low<high){
            int temp=numbers[low]+numbers[high];
            if(temp<target) low++;
            else if(temp>target) high--;
            else return {low+1,high+1};
        }
        return {-1,-1};
    }
};
