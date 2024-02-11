#include <iostream>
class Solution {
public:
    bool isPalindrome(int x) {
        long h=x, revnum=0, rem;
        while(h!=0) //looop until h == 0
        {
            rem=h%10; //find remainder of user input x when divided by 10
            revnum=revnum*10+rem; //assign reversed number to outcum of equation here
            h/=10; //divide h by 10 and assign
        }
        if((x==revnum) && (x>=0))
            return true;
        else
            return false;
    }
};