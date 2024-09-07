#this is the the 9th quetion on the leet code palindrome number check which has a 9ms of runtime for the below code of mine 

class Solution {
public:
    bool isPalindrome(int x) {
        
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }
        
        int rem = 0;
        int reversed = 0;
        
        while (x > reversed) {
            rem = x % 10;             
            reversed = reversed * 10 + rem;  
            x = x / 10;               
        }

        if (x == reversed || x == reversed / 10) {
            return true;
        }
        
        return false;
    }
};
