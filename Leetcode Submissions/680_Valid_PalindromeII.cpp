#include <iostream>
using namespace std;

class Solution {
public:
    bool is_Palindrome(string s, int l, int r)      //Function of check palindrome.
    {
        while(l < r)
        {
            if(s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;                    // return true of string is a palindrome.
    }
    
    bool validPalindrome(string s) 
    {
        int n = s.length();
        int j = n - 1, i =0;
        while(i < j)
        {
            if(s[i] != s[j])   //If s[i]!=s[j], we check palindrome by first removing the i element, then j element 
            {
                return (is_Palindrome(s, i + 1, j) || is_Palindrome(s, i ,j - 1)); // remove ith element, then jth
            }
            ++i ,--j;
        }
        return 1;       //if everything passes, return true.
    }
};

// SOMEONE ELSE'S EASY SOLUTION : 

// class Solution {
// public:
//     bool validPalindrome(string s) {
        
//         //first time check with incrementing 'i'
        
//         int i = 0;
//         int j = s.size()-1;
//         int cnt1 = 0;
        
//         while(i<j)
//         {
//             if(s[i] == s[j])
//             {
//                 i++;
//                 j--;
//             }
//             else
//             {
//                 cnt1++;
//                 i++;
//             }
//             if(cnt1 > 1) //we can only skip 1 element
//                 break;
//         }
        
//         //second time check with decrementing 'end' 
        
//         int start = 0;
//         int end = s.size()-1;
//         int cnt2=0;
        
//         while(start < end)
//         {
//             if(s[start] == s[end])
//             {
//                 start++;
//                 end--;
//             }
//             else
//             {
//                cnt2++;
//                 end--;
//             }
//             if(cnt2 > 1) //can only skip 1 element
//                 break;
//         }
        
//         if(cnt1 == 1 || cnt2 ==1) //if both are 1 means we have only skipped 1 element which is true
//             return true;
//         if(cnt1 == 0 || cnt2==0) //if both are 0 that means we have not deleted any element which is true
//             return true;
        
//         return false;
//     }
// };