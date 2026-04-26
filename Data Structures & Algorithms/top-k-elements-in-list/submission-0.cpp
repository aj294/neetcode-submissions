class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;//here key is number and value is frequency
        for(auto i:nums)
        freq[i]++;

        map<int,vector<int>> value;//here key is frequency and value is number
        
        for(auto f:freq){
            value[f.second].push_back(f.first);
            cout<<"key="<<f.first<<"value="<<f.second<<endl;
        }
        // for(auto v:value){

        //     cout<<"first="<<v.first<<"second="<<v.second[0]<<endl;
        // }
        vector<int> ans;
        auto it=value.end();
        //it--;
        //mistake start from end not begin
        cout<<"hi";
        while(ans.size()!=k){
            it--;
            vector<int> temp=it->second;
            cout<<ans.size()<<endl;
            for(auto i:temp)
            ans.push_back(i);
        }
        return ans;
    }
};
