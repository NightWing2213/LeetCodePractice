class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        sort(strs.begin(), strs.end()); //sort into lexigraphical order
        int len = strs.size(); //get length of vector
        string start = strs[0], end = strs[len-1]; //create strings of first and last index in vector so they can be accessed
        for(int i=0; i < min(start.size(), end.size()); i++) //loop through first and last words and compare up to the length of the shortest word 
        {
            if(start[0]!=end[0]) //If first indexs don't match return null
            {
                return ans;
            }
            else //Else add each letter to empty string of ans and exit when it is no longer true
            {
                if(start[i]==end[i])
                    ans += strs[0][i];
                else
                    return ans;
            }
        }
        return ans;
    }
};