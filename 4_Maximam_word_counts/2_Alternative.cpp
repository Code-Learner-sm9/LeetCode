#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int canbeTypedWord(string text,string broken)
    {
        vector<int> ch(26,0);
        for(char c:broken)
        {
            ch[c-'a']=1;
        }
        // for(char c:broken)
        // {
        //     cout<<c<<" ";
        // }
        
        int count = 0; int ans = 0;
        for(int i=0;i<text.length();i++)
        {
            if(text[i] == ' ')
            {
                if(count == 0)
                ans++;//mane kono broken letter nai
                count = 0;
            }
            else if(ch[text[i]-'a']==1)
            {
                count++;
            }
        }
        if(count ==0)
        {
            ans++;
        }
        return ans;




        // vector<int> ch(26,0);
        // for(char c: broken)
        // {
        //     ch[c-'a'] = 1;
        // }
        // int count =0,ans=0;
        // for(int i=0;i<text.length();i++)
        // {
        //     if(text[i] == ' ')
        //     {
        //         if(count == 0) 
        //         ans++;
        //         count =0;
        //     }
        //     else if(ch[text[i]-'a']==1)
        //     {
        //         count++;
        //     }
        // }
        // if(count==0)
        // {
        //     ans++;
        // }
        // return ans;

    }

};
int main()
{
    string text,broken;
    getline(cin,text);
    getline(cin,broken);
    
    Solution ob;
    int result = ob.canbeTypedWord(text,broken);
    cout<<result<<endl;
  
    return 0;
}