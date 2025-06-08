class Solution {
public:
    int calcrev(int num){
            int rev = 0;
            while(num!=0){
            int digit = num%10;
            rev = rev *10 + digit;
            num = num/10;  
        }
    return rev;
    }
    bool isSameAfterReversals(int num) {
        int rev1 = calcrev(num);
        int rev2 = calcrev(rev1);
        if(rev2 == num){
            return true;
        }
        else{
            return false;
        }        
    }
};