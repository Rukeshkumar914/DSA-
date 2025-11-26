#include<iostream>
#include<cstring>
using namespace std;
 
class Hero
{
    private:
    int health; 

    public:
    char *name;
    char level;
    
    Hero ()
    {
        cout <<"simple constructor called " << endl;
        name = new char[100];
    }

    // parameterised constructor
    Hero(int health)
    {
        this -> health = health;
    }

    Hero (int health, char level)
    {
        this -> level = level;
        this -> health = health;
    }
    // copy constructor
    Hero(Hero& temp)
    {
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name = ch;

        cout<<" copy constructor called "<< endl;
        this->health = temp.health;
        this->level= temp.level;
    }

    void print()
    {
        cout << endl;
        cout<<" [ Name : " << this->name<< " , ";
        cout<<"health : " << this->health << " , ";
        cout<< "level :" <<this-> level << " ] ";
        cout << endl<< endl;

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
    
    // destructor
    ~Hero ()
    {
        cout << "Destructor called " << endl;
    }
};
int main ()
{
    // static
    Hero a;
    
    // Dynamic
    Hero *b = new Hero();
    delete b;

    return 0;
}