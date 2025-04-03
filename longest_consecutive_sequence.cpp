class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]=0;
        }
        int large=1,j=0;
        for(auto & it:m){
            if(m.find(it.first -1)==m.end()){
                j=1;
                while(m.find(it.first +j)!=m.end()){
                    j++;
                }
                if(j>large)
                    large=j;
            }
        }

        return large;
    }
};
