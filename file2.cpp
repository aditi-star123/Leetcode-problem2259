#LEETCODE problem 2259:You are given a string number representing a positive integer and a character digit.
Return the resulting string after removing exactly one occurrence of digit from number such that the value of the resulting string in decimal form is maximized. The test cases are generated such that digit occurs at least once in number.


Code:
class Solution {
public:
    string removeDigit(string number, char digit) {

     string ans="";
int n=number.size();
for(int i=0;i<n;i++)
{
if(number[i]==digit)
{
    string s=number.substr(0,i)+number.substr(i+1);
    if(s>ans)
    {
    ans=s;   
    }
}
}
return ans;
    }
};
