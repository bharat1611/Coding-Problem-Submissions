
class Solution 
{
public:
    bool isValid(string s) 
    {
        stack<char> st;
        for (const char& c : s)
        {
            if (c == '(' || c == '[' || c == '{')
            {
                st.push(c);
            }
            else
            {
                if (st.empty())
                    return false;
                
                char temp = st.top();
                if ((c == ')' && temp != '(') || (c == ']' && temp != '[') || (c == '}' && temp != '{'))
                    return false;
                
                st.pop();
            }
        }
        
        return st.empty();
    }
};

// class Solution {
// public:
//     bool isValid(string s) {
        
//         stack<char> st;
        
//         for(auto it: s){
            
//             // If we find '(' or '[' or '{' in the given string we push it into the stack 
//             if(it == '(' || it == '[' || it == '{')
//             {
//                 st.push(it);
//             }
            
//             // If we find ')' or ']' or '}' in the given string we move to the else condition 
//             else
//             {
//                 // This is to handle the edge case if only ']' or '}' or ')' is present in the given string  
//                 if(st. size() == 0)
//                 {
//                     return false;
//                 }
//                 // We taker the top most element from the stack which will be either of the these three '(' or '[' or '{'
//                 char ch = st.top();
//                 st.pop();
                
//                 // If we find that it is corresponding to the current iteration (closing bracket) of the string then we just continue with our iteration 
//                 if((it == ')' && ch == '(') || (it == ']' && ch == '[') || (it == '}' && ch == '{'))
//                 {
//                     continue;
//                 }
//                 // If the above condition does not satisfy then certainly a wrong closing bracket is present 
//                 else
//                     return false;
//             }
//         }
//         // We are also not returning 'true' directly here, becuase an edge case of a single opening bracket is also handled here which would return false as there is corresponding closing bracket present to it. 
//         return st.empty();
        
//     }
// };