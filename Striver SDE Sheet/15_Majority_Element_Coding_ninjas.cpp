// #include <unordered_map>
// int majorityElement(vector<int> v) {
// 	int n = v.size();
// 	unordered_map<int, int> mp;
// 	for(int i = 0 ;i < n; i++){
// 		mp[v[i]]++;
// 		if(mp[v[i]] > n/2)
// 			return v[i];
// 	}
// 	return v[0];
// }


int majorityElement(vector<int> v) {
	int n = v.size();
	int element = 0, count = 0;
	for(int i = 0 ; i < n; i++)
	{
		if(count == 0){
			count++;
			element = v[i];
		}
		else if(element != v[i]){
			count--;
		}
		else if(element == v[i])
			count++;
	}
	return element;
}