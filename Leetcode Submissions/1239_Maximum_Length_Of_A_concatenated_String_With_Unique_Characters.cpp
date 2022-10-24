class Solution
{
public:
    void solve(int ind, vector<string> &arr, int &ans, map<char, int> &ispresent)
    {
        if (ind == arr.size())
        {
            if (ans < ispresent.size())
                ans = ispresent.size();
            return;
        }
        string str = arr[ind];
        int flag = 0;
        for (int i = 0; i < str.length(); i++)
        {
            ispresent[str[i]]++;
            if (ispresent[str[i]] > 1)
                flag = 1;
        }
        if (flag == 0)
            solve(ind + 1, arr, ans, ispresent);

        for (int i = 0; i < str.length(); i++)
        {
            if (ispresent.find(str[i]) != ispresent.end())
                ispresent[str[i]]--;
            if (ispresent[str[i]] == 0)
                ispresent.erase(str[i]);
        }
        solve(ind + 1, arr, ans, ispresent);
    }

    int maxLength(vector<string> &arr)
    {
        int ans = 0;
        map<char, int> ispresent;
        solve(0, arr, ans, ispresent);
        return ans;
    }
};