class Solution {
public:
    bool static comp(const vector<int>&x,const vector<int>&y)
    {
        return (x[0]+x[1]) < (y[0]+y[1]); 
    }
    
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        
        int m=nums1.size();
        int n=nums2.size();
        
        vector<vector<int>>ans;
        
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j){
                 ans.push_back({nums1[i],nums2[j]});
             }
         }
        sort(ans.begin(),ans.end(),comp);
        
        int sz=ans.size();
        
        k=min(k,sz);
        
        ans.resize(k);
        
        return ans;
        
    }
};