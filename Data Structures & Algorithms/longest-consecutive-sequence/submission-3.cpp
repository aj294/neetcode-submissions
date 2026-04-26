class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
  
       int n=nums.size();
       if(n<=1)
       return n;

        //n unordered_map
       unordered_set<int> s;

       for(auto i:nums){
        s.insert(i);
       }
       int sequence=1;

       for(auto i:nums){
        
        if((s.find(i)!=s.end())&&(s.find(i-1)==s.end())){
            cout<<"i"<<i<<" ";
            s.erase(i);
            i++;
            int temp=1;
            while(s.find(i)!=s.end())
            {temp++; s.erase(i);i++;
            }
            if(temp>sequence)
            sequence=temp;
        }
       }
       return sequence;
    }
};
