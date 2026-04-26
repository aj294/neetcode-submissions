class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {

        int low=1,high=INT_MIN;
        for(auto i:piles){
            if(high<i)
            high=i;
        }
        int kmin;
        while(low<=high){
            int mid=(low+high)/2;
            int totalHours=0;
            for(auto i:piles){
                totalHours+=(i+mid-1)/mid;
            }
            if(totalHours<=h){
                kmin=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
            cout<<"mid"<<mid<<endl;
        }
        return kmin;
    }
};
