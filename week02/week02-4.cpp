//week02-4.cpp 學習計畫 basic 第二集
//leetcode 389. find the difference
//給你兩個字串,
class Solution {
public:
    char findTheDifference(string s, string t) {
        int H[26] = {}; //用陣列統計左邊s的字母
            for (char c : s){ //C++ 進階 for 迴圈 , 可把字母 一個一個取出來
            H[c-'a'] += 1; //統計字母出現次數 (這個字母又多了一個)
            }
            for (char c : t){
                H[c-'a']-=1;
                if ( H[c-'a'] < 0 ) return c;//這個字母不夠用 找到答案了
            }
            return 0;
    }
};
