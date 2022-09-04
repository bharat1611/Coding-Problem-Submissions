class FindSumPairs {
public:
    map<int, int> mp1, mp2;
    vector<int> nums;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        nums = nums2;
        for(auto i : nums1)
            mp1[i]++;
        for(auto j : nums2)
            mp2[j]++;
    }
    void add(int index, int val) {
        mp2[nums[index]]--;
        nums[index] += val;
        mp2[nums[index]]++;
    }
    
    int count(int tot) {
         int ans = 0;
        for(auto i : mp1)
        {
            if(mp2[tot - i.first]) 
                ans += i.second * mp2[tot - i.first];
        }
        return ans;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */