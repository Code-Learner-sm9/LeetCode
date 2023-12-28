//https://leetcode.com/problems/backspace-string-compare/description/
//https://phitron.io/ph453/video/ph453-15-2-backspace-string-compare-leetcode-
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> st;
        stack<char> stt;
        for(char c: s)
        {
            if(c=='#')
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(c);
            }
        }
        for(char c: t)
        {
            if(c=='#')
            {
                if(!stt.empty())
                {
                    stt.pop();
                }
            }
            else
            {
                stt.push(c);
            }
        }
        // if(st == stt) return true;
        // else return false;
        //alternative
        return st==stt;

    }
};