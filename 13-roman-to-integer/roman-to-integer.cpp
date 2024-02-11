class Solution {
public:
    int romanToInt(string s) {
        int total=0, k = s.length(); //set total to 0 and set k to length of string for for llop
        for(int x=0; x<k; x++) //loop through string and compare each index to rule
        { //if index meets simple condition add int equivilent to total then let loop incriment
        //use else if statements to ensure condition is only being met once
            if(s[x]=='V')
                total+=5;
            else if(s[x]=='L')
                total+=50;
            else if(s[x]=='D')
                total+=500;
            else if(s[x]=='M')
                total+=1000;
            else if(s[x]=='I')
            { //if index meets condition where this index + next index can be less than next index by itself add to total  then incriment and allow loop to incriment as well as to not count that index again
                if(s[x+1]=='V')
                {
                    total+=4;
                    x++;
                }
                else if(s[x+1]=='X')
                {
                    total+=9;
                    x++;
                }
                else
                    total++;
            }
            else if(s[x]=='X')
            {
                if(s[x+1]=='L')
                {
                    total+=40;
                    x++;
                }
                else if(s[x+1]=='C')
                {
                    total+=90;
                    x++;
                }
                else
                    total+=10;
            }
            else if(s[x]=='C')
            {
                if(s[x+1]=='D')
                {
                    total+=400;
                    x++;
                }
                else if(s[x+1]=='M')
                {
                    total+=900;
                    x++;
                }
                else
                    total+=100;
            }
        }
        return total; //return total
    }
};