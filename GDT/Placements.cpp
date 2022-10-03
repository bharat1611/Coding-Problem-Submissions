#include <bits/stdc++.h>
using namespace std;

vector<int> OffersReceived(vector<int>v)
{
    vector<int> temp;
    int n = v.size();
    for(int i = 0; i < n; i++)
    {
        if(v[i] == 1)
            temp.push_back(i);
    }
    return temp;
}

int maximumOffer(vector<int> OfferedSal, vector<int> maxJobOffer, int minSalary, vector<int> companyHired, vector<int> companyOffered)
{
    int temp = -1,  k= companyOffered.size();
    int gotSalary = -1;
    for(int i = 0; i < k; i++)
    {
        int t = companyOffered[i];
        if(maxJobOffer[t] > companyHired[t] && OfferedSal[t] >= minSalary && OfferedSal[t] > gotSalary)
        {
            gotSalary = OfferedSal[t];
            temp = t;
        }
        
    }
    return temp;
}
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    int n, m;
	    cin >> n >> m;
	    vector<int> minSalary(n);
	    for(int i = 0; i < n; i++)
	        cin >> minSalary[i];
	   
	    vector<int> OfferedSal(m), maxJobOffer(m);
	    for(int i = 0; i < m; i++)
	        cin>>OfferedSal[i] >> maxJobOffer[i];
	        
	    vector<vector<int>> qualified(n, vector<int> (m));
	    for(int i = 0; i < n; i++)
	    {
	        string s;
	        cin>>s;
	       for(int j = 0; j < m; j++)
	            qualified[i][j] = s[j] - '0';
	       
	    }
		long long hiredCandidate = 0, totalSalary = 0;
	   vector<int> companyHired(m);
	   for(int i = 0; i < m; i++)
	        companyHired[i] = 0;
	   
	   for(int i = 0; i < n; i++)
	   {
	       vector<int> companyOffered = OffersReceived(qualified[i]);
	       int maxOffer = maximumOffer(OfferedSal, maxJobOffer, minSalary[i], companyHired, companyOffered);
	       if(maxOffer != -1)
	       {
	           hiredCandidate++;
	           totalSalary += OfferedSal[maxOffer];
	           companyHired[maxOffer] ++;
	       }
	   }
	   int companyNotHired = 0;
	   for(int i = 0; i < m; i++)
	   {
	       if(companyHired[i] == 0) companyNotHired++;
	   }
	   cout << hiredCandidate << " " << totalSalary << " " << companyNotHired << endl;
	}
	return 0;
}
