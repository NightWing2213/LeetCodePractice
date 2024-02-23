class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;//create character stack
        int len=s.length();//find length of string for use in loop
        for(int i=0; i<len; i++)
        {
            if(len<=1)
                return false;
            if(s[i]=='{' || s[i]=='(' || s[i]=='[')//If open bracket push to stack
            {
                stack.push(s[i]);
            }
            else if(stack.empty()||
                    (s[i]== ')' && stack.top()!= '(') ||
                    (s[i]== ']' && stack.top()!= '[') ||
                    (s[i]== '}' && stack.top()!= '{'))//if empty or close bracket doesn't match open return false
                    return false;
            else
                stack.pop();
        }
        return stack.empty();
    }
};