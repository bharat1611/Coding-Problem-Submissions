#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        int l = s.length();
        bool enc = false;
        int i = 0, negative = 1;
        long num = 0, digit = 0;
        
        for(int i = 0; i < l ; i++)
        {
            if(!enc && s[i] == ' ')
                continue;
            
            else if(!enc && s[i] == '-')
            {
                negative = -1;
                enc = true;
            }
            else if(s[i] == '-')
                return negative*num;
                
            else if(!enc && s[i] == '+')
            {
                negative = 1;
                enc = true;
            }
            else if(s[i] == '+')
                return negative*num;
                
            else if((int)s[i] >=48 && (int)s[i] <=57)
            {
                enc = true;
                
                if(negative*num>INT_MAX/10)
                    return INT_MAX;
              else if(negative*num<INT_MIN/10)
                  return INT_MIN;
                num = num*10 + ((int)s[i] - 48);
                
            }
            else
                break;
            
        }
        
        if(negative*num>INT_MAX)
            return INT_MAX;
        
        if(negative*num<INT_MIN)
            return INT_MIN;
        
        return negative*num;
    }
};

// class Solution {
// public:
// int myAtoi(string s) {
//      int sign=1;
//      bool encounter=false;
//      long long int ans=0;
//      for(int i=0;i<s.length();i++){
//          if(!encounter&&s[i]==' ')continue;
//          if(!encounter&&s[i]=='-')sign=-1,encounter=true;
//          else if(s[i]=='-') return sign*ans;
//          else if(!encounter&&s[i]=='+')sign=1,encounter=true;
//          else if(s[i]=='+')return sign*ans;
         
//          else if(s[i]>='0'&&s[i]<='9'){
//              encounter=true;
//              if(sign*ans>INT_MAX/10)return INT_MAX;
//              else if(sign*ans<INT_MIN/10)return INT_MIN;
//              else ans=ans*10+(s[i]-'0');
//          }
//          else break;
//      }
//     // cout<<sign<<" "<<s;
//      if(sign*ans>INT_MAX)return INT_MAX;
//      if(sign*ans<INT_MIN)return INT_MIN;
//      return sign*ans;
   
// }
// };