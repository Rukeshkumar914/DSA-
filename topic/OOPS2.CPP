#include<iostream>
using namespace std;

class Hero
{
    // property
    private:
    int health;

    public:
    char level;

    Hero ()
    {
        cout << " constructor called " << endl;
    }

    // paramerterised constructor
    Hero (int health)
    {
       this-> health = health;
    }

    Hero (int health, char level)
    {
       this-> level = level;
       this-> health = health;
    }

    void print ()
    {
        cout << level << endl;
    }

    int getHealth ()
    {
        return health;
    }
    char getlevel ()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
};

int main ()
{
    // objected created statically
    Hero ramesh (10);
    //cout << "Addres of ramesh : " << &ramesh << endl;
    //ramesh.getHealth();
    ramesh.print();

    // dynamically
    Hero *h = new Hero(11);
    h->print();

    Hero temp(22,'R');
    temp.print();
}