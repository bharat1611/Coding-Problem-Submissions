// class Solution {
// public:
//     int strStr(string haystack, string needle) {
//         int h = haystack.length();
//         int n = needle.length();
        
//         if(n == 0 )
//             return 0;
        
//         if(h < n && n!= 0)
//             return -1;
        
//         if(h==1 && n==1)
//         {
//             if(haystack[0] == needle[0])
//                 return 0;
//             return -1;
//         }
        
//         int p1 = 0, p2 =0;
//         for(int i = 0; i< h ;i++)
//         {
            
//             if(haystack[p1] == needle[p2])
//             {
//                 ++p2;
//             }
//             ++p1;
//             if(p2 == n)
//                 return i-1;
            
                
//         }
//         return -1;
//     }
// };


class Solution {
public:
    int strStr(string haystack, string needle) {
        int result=haystack.find(needle);
        return result;
        }
};