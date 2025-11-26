#include<iostream>
using namespace std;



char toLowerCase(char ch)
{
    if (ch >='a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch -'A' + 'a';

        return temp;
    }
    
    
}

bool checkpalindrome(char a[],int n)
{
    int s = 0;
    int e =n-1;

    while (s<=e)
    {
        if(toLowerCase (a[s]) != toLowerCase (a[e]))
        {
            return 0; // it mean false
        }
        else
        {
            s++;
            e--;
        }
        

    }
    return 1; // it means true
    
}

void reverse(char name[], int n)
{
    int s = 0;
    int e = n-1;
    while (s<e)
    {
        swap(name[s++],name[e--]);
    }
    
}

int getlength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
    
}

char getMaxOccCharacter(string s)
{
    int arr [26] = {0};

    for (int  i = 0; i <(int)s.length(); i++)
    {
        char ch = s[i];

        int number = 0;
        if (ch>='a' && ch <= 'z')
        {
            number = ch -'a';
        
        }
        else
        {
            number = ch - 'A';
        }
        arr[number]++;
    }
    int maxi = -1, ans = 0;
    for (int i = 0; i <(int) s.length(); i++)
    {
        if (maxi < arr [i])
        {
            ans = i;
            maxi = arr [i];  
        }
        
    }
    char finalAns = 'a'+ans;
    return finalAns;    
}

int main ()
{
    string s;
    cin >> s; 

    cout<< getMaxOccCharacter(s) << endl;

}
