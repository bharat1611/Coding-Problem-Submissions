class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        
        if(nums.size() == 1)
            return nums[0];
        int j = size(nums);
        

        while(j > 1)
        {
            int i = 0;
            while(i < j/2){
                nums[i]= (i % 2) == 1 ? max(nums[2 * i], nums[2 * i + 1]) : min(nums[2 * i], nums[2 * i + 1]);   
                cout << i << " " << j << endl;
                i++;
            }
            j -= (j/2);
        }
        return nums[0];     
    }
};

// class Solution {
// public:
// int minMaxGame(vector<int>& a) {

//     for(int n= size(a); n>1 ; n-=(n/2)){
//         for(int i=0;i<n/2;i++) {
// 		    a[i]= (i%2)==1? max(a[2 * i], a[2 * i + 1]) : min(a[2 * i], a[2 * i + 1]);
//             cout << i << " " << n << endl;
//         }
//     }
//     return a[0];
// }
// };