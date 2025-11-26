#include<iostream>
#include<vector>
using namespace std;

void solve(string digit, string output, int index, vector<string>& ans, string mapping [])
{
    // base class 
    if (index >= digit.length())
    {
        ans.push_back(output);
        return ;
    }

    int number = digit[index] - '0';
    string value = mapping[number];

    for (int i = 0; i < mapping[number] .length(); i++)
    {
        output.push_back(mapping[number][i]);
        solve(digit,output, index+1, ans, mapping);
        output.pop_back();
    }
    
}

vector<string> letterCombinations(string digits)
{
    vector<string> ans;
    if(digits.length()==0)
    return ans ;
    string output;
    int index = 0;
    string mapping[10] = {"", "","abc","def","ghi", "jkl","mno","pqrs","tuv","wxyz"}; 
    solve(digits,output,  index, ans,mapping);
    return ans;

}
  
int main ()
{
    string str = "25" ;
    vector<string>result = letterCombinations(str);

    for ( const string& sub : result)
    {
        cout << sub << endl;
    }

    return 0;
    
}