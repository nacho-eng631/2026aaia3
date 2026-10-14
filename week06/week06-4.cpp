// week06-4.cpp
//  5: °}¦C 5
//  2: °}¦C 5 2

class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> a;
        for (string s : operations) {
            if (s == "C") {
                a.pop_back();
            } else if (s == "D") {
                a.push_back(a[a.size() - 1] * 2);
            } else if (s == "+") {
                a.push_back(a[a.size() - 2] + a[a.size() - 1]);
            } else{
            a.push_back(stoi(s));
        }
    }
    int ans = 0;
    for (int num : a) {
        ans += num;
    }

 return ans;
}
};
