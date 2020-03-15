    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v;
        unordered_map<int , int> h;
        int n = nums.size();
        for(int i=0; i<n; i++){
            int val = target-nums[i];
            if(h.count(val)>0 && h[val]!=i){
                v.push_back(i);
                v.push_back(h[val]);
                return v;
            }
            else{
                h.insert(make_pair(nums[i],i));
            }
        }
        return v;
    }