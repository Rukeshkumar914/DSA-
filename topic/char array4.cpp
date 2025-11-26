//check palindrome ya Not
#include<iostream>
using namespace std;

int checkpalindrome(char a[],int n)
{
    int s = 0;
    int e =n-1;

    while (s<=e)
    {
        if (a[s] != a[e])
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
int main ()
{
    char name [20];
    cout << "Enter your name " << endl;
    cin >> name;

    cout << "your name is :";
    cout << name << endl;
    int len = getlength(name);
    cout << "Length: " << len << endl;

    cout << "Palindrome or Not :" << checkpalindrome(name, len) << endl;

    reverse(name, len);
    cout<< " Your name is :";
    cout << name << endl;

}