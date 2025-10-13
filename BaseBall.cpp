class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> ans;
        int sum = 0;
        for(int i = 0; i < operations.size(); i++) {
            if (operations[i] == "+") {
                int newScore = ans.back() + ans[ans.size() - 2];
                ans.push_back(newScore);
            }
            else if (operations[i] == "C") {
                if (!ans.empty()) {
                    ans.pop_back();
                }
            }
            else if (operations[i] == "D") {
                if (!ans.empty()) {
                    ans.push_back(2 * ans.back());
                }
            }
            else {
                ans.push_back(stoi(operations[i]));
            }
        }
        for(int score : ans) {
            sum += score;
        }
        return sum;
    }
};
