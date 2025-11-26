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
    // copy constructor 
    Hero(Hero& temp)
    {
        cout << "copy constructor called " << endl;
        this->health = temp.health;
        this->level = temp.level; 
    }

    void print ()
    {
        cout<<"health : " << this-> health << endl;
        cout << "level : " << this->level << endl;
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
    Hero s(70, 'c');
    s.print();

    // copy constructor
    Hero R(s);
    R.print();
}