#include <iostream>
#include <vector>
using namespace std;

void solve(string str, string output, int index, vector<string>& ans)
{
    // Base case
    if (index >= str.length()) {
        ans.push_back(output);
        return;
    }

    // Exclude current element
    solve(str, output, index + 1, ans);

    // Include current element
    char element = str[index];
    output.push_back(element);
    solve(str, output, index + 1, ans);
}

vector<string>  subsequence(string str)
{
    vector<string> ans;
    string output = " ";
    int index = 0;
    solve(str, output, index, ans);
    return ans;
}

int main()
{  
    string str  = "abc";
    vector<string> result = subsequence(str);

    for( const string& sub : result)
    {
        cout << sub << endl;
    }
  
    return 0;
}