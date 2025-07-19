class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int total = 0;
        for(string& s: operations){
            if(s == "C"){
                total -= ans.back();
                ans.pop_back();
            }
            else if(s=="D"){
                ans.push_back(2*ans.back());
                total += ans.back();
            }
            else if(s == "+"){
                int newScore = ans.end()[-1] + ans.end()[-2];
                ans.push_back(newScore);
                total += newScore;
            }
            else{
                int val = stoi(s);
                ans.push_back(val);
                total += val;
            }
        }
        return total;
    }
};
