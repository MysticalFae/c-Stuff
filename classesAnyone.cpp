#include <iostream>

class test
{
std::string name;
int age;

public:
test(std::string name,int age)
{
    this->name=name;
    this->age=age;
};

bool drinking()
{
bool drink=false;
if(this->age>=21)
{
    drink=true;
}
//std::cout<<drink<<"\n";
return drink;
};

};

int main()
{
    test obj1("Bob",14);
    bool ans=obj1.drinking();
    if(ans==1)
    {
        std::cout<<"U can drink!"<<"\n";
    }
    else
    {
        std::cout<<"You can't drink"<<"\n";
    }
  

}





