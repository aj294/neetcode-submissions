class Solution {
public:
    double distance(vector<int> v1,vector<int> v2){
        
        double x=v1[0]-v2[0]; x=x*x; 
        double y=v1[1]-v2[1]; y=y*y; 
        double total=x+y;
        double root=sqrt(total);
     
        return root;
    }
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        multimap<double,vector<int>> m;

        for(auto i:points){
            m.insert({distance(i,{0,0}),i});
            if(m.size()>k){
            m.erase(--m.end());
            
            }
        }
        vector<vector<int>> ans;
        for(auto i:m){
            ans.push_back(i.second);
        }
        return ans;
    }
};
