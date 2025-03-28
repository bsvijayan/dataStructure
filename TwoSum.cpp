 vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>restVect;
        std::map<int,int>intMap;
        
        for(int i=0;i<nums.size();i++)
        {
            int substract=target-nums[i];
            if(intMap.find(substract)!=intMap.end())
            {
                return {i,intMap[substract]}; 
            }
            intMap.insert({nums[i],i});

        }
        return {};
        
    }
