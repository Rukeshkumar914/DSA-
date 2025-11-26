#include<iostream>
#include<cstring>
using namespace std;

class Hero
{
    // property
    private:
    int health;

    public:
    char *name;
    char level;

    Hero ()
    {
        cout << "simple  constructor called " << endl;
        name = new char[100];
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
        cout << endl;
        cout<<" [ Name : " << this->name<< " , ";
        cout<<"health : " << this->health << " , ";
        cout<< "level :" <<this-> level << " ] ";
        cout << endl;

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
    void setName(char name[])
    {
        strcpy(this->name, name);
    }
};

int main ()
{
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');

    char name[7] = "Rukesh";
    hero1.setName(name);

    hero1.print();

    // use default  copy constructor

   Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'M';
    hero1.print();

    hero2.print();
    
}