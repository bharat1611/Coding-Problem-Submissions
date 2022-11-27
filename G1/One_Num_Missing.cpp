#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {1,2,3,4};
    int n = nums.size();
    for(int i = 0 ; i < n; i++)
    {
        nums[((nums[i] % n) - 1) % n] += n;
    }
    for(auto i : nums)
    {
        if(i <= n){
            cout << "Missing Number is : " << i + 1 << endl;
            break;
        }
    }
}