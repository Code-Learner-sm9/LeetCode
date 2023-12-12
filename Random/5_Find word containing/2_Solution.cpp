// https://leetcode.com/problems/find-words-containing-character/
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> ans;
        for(int i=0;i<words.size();i++)
        {
            for(char j: words[i])
            {
                if(j==x)
                {
                    ans.push_back(i);
                    break;
                }
            }
        }
        return ans;
    }
};
int main() {
      
    char x;cin>>x;
    vector<string> inputString;
    string input;

    cout << "Enter strings (Ctrl+Z or Ctrl+D to end input):" << endl;

    while (cin >> input) {
        inputString.push_back(input);
    }

    Solution ob;
    vector<int> result =ob.findWordsContaining(inputString,x);
    cout << "\nEntered strings:" << endl;
    for (auto str : result) {
        cout << str << " ";
    }

    return 0;
}
