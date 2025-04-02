class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int, int> map;
        for(int i=0;i<nums.size();i++){
            map[nums[i]]=i;
        }
        
        for( auto& pair: map){
            int p=0;
            if(map.find(target - pair.first) != map.end()){
                if(pair.second==map[target-pair.first] ){
                    for(int i=0;i<nums.size();i++){
                        if(nums[i]==target-pair.first){
                            v.push_back(i);
                            p++;
                        }
                        if(p==2){
                            break;
                        }
                        
                    }
                    if(p==1){
                        v.clear();
                        p=0;
                        continue;
                    }
                    else{
                        break;
                    }
                }
                if(p==0){
                    v={pair.second,map[target-pair.first]};
                }
                break;  
            }
        }
        return v;
    }     
};
