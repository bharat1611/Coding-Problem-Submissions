#include <unordered_map>
vector<int> majorityElement(vector<int> v) {
	unordered_map<int, int> mp;
	int n = v.size();
	vector<int> ans;
	int k = floor(v.size()/3);
	for(int i = 0 ; i < v.size(); i++){
		mp[v[i]]++;
	}

	for(auto i: mp){
		if(i.second > k)
			ans.push_back(i.first);
	}
	sort(ans.begin(), ans.end());
	return ans;
}