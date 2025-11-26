// pointer in function
#include<iostream>
using namespace std;

void print (int *p)
{
    cout << *p << endl;

}
void update (int *p)
{
    *p = *p+1;
}

int main ()
{
    int value = 5;
    int *p = &value ;

    cout << "Before " << *p << endl;
    update(p);

    cout << "Before " << *p << endl;
    return 0;
}