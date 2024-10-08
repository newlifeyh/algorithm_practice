#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int sz1=s1.length();
        int sz2=s2.length();
        int sz3=s3.length();
        if(sz1+sz2!=sz3) return false;
        vector<string>d(sz1+1, string(sz2+1, '.'));
        return inter(s1, 0, s2, 0, s3, 0, d);
    }
    bool inter(string& s1, int i1, string& s2, int i2, string& s3, int i3, vector<string>& d){
        if(i1==s1.length() && i2==s2.length()) return true;
        char &ans=d[i1][i2];
        if(ans=='+') return true;
        if(ans=='-') return false;
        ans='-';
        if(i1<s1.length() && s1[i1]==s3[i3]){
            if(inter(s1, i1+1, s2, i2, s3, i3+1, d)){
                ans='+';
            }
        }
        if(ans=='-' && i2<s2.length() && s2[i2]==s3[i3]){
            if(inter(s1, i1, s2, i2+1, s3, i3+1, d)){
                ans='+';
            }
        }
        return ans=='+';
    }
};

int main(int argc, char const *argv[])
{
    Solution abc;
    abc.isInterleave("aabcc", "dbbca", "aadbbbccca");
    return 0;
}

class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int sz1=s1.length();
        int sz2=s2.length();
        int sz3=s3.length();
        if(sz1+sz2!=sz3) return false;
        vector<int> d(sz1+1, 0);
        d[0]=1;
        for(int i=1; i<=sz1&&d[i-1]==1; ++i){
            d[i]=s1[i-1]==s3[i-1]?1:0;
        }
        for(int i=1; i<=sz2; ++i){
            d[0]=d[0]==1?(s2[i-1]==s3[i-1]?1:0):0;
            for(int j=1; j<=sz1; ++j){
                if(d[j]==1){
                    d[j]=s2[i-1]==s3[i+j-1]?1:0;
                }
                if(d[j]==0&&d[j-1]==1){
                    d[j]=s1[j-1]==s3[i+j-1]?1:0;
                }
            }
        }
        return d.back();
    }
};