class Solution {
public:
    bool isPalindrome(string s) {
        string ns = "";
        for(auto c: s){
            if(isalnum(c))
                ns += tolower(c);
        }
       //cout << ns;
        int p1{0},p2{(int)ns.length()-1};
        while(p1 < p2){
            if(ns[p1] != ns[p2]) return false; 
            p1++;
            p2--;
        }
       // if(ns.length() <= 1) return false;
        return true;
    }
};
