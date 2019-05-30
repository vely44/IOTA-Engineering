#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>

class vehicle{
    
    public:
    static int firstid;
    int id_;
    vehicle();
    vehicle(std::string type);
    void show();
    protected:
    std::pair<double,double> home_location;
    std::pair<double,double> live_location;
    double km_;
    private:
    std::string type_;
};

class driver{
    
    public:
    static int firstid;
    int id_;
    driver();
    driver(int age,std::string name);
    void show();
    int showid();
    
    protected:
    std::pair<double,double> home_location;
    std::pair<double,double> live_location;
    double km_;

    private:
    std::string name_;
    int age_;
    double funds_;

};

class family{
    
    public:
    static int firstid;
    int id_;
    family();
    family(int no_of_drivers,std::string name);
    void show();
    
    protected:
    std::pair<double,double> home_location;
    double total_km_;

    private:
    std::string name_;
    int no_of_drivers_;
    std::array <int,9> drivers_;

};


class account{
    
    public:
    static int firstid;
    int id_;
    account();
    account(int no_of_families,std::string name);
    void show();
    
    protected:
    double total_km_;

    private:
    std::string name_;
    int no_of_families_;
    std::array <int,9> families_;

};

//Account Functions
account::account(int no_of_families, std::string name):
    name_{name},no_of_families_{no_of_families},id_{firstid},total_km_{0}
{firstid++;}

void account::show()
{
    std::cout<<"Account Info"<<std::endl<<"ID:"<<id_<<std::endl<<"Name:"<<name_<<std::endl<<"Km:"<<total_km_<<std::endl<<"Families:"<<no_of_families_<<std::endl;
}


//Family Functions
family::family(int no_of_drivers, std::string name):
    name_{name},no_of_drivers_{no_of_drivers},id_{firstid},total_km_{0}
{firstid++;}

void family::show()
{
    std::cout<<"Family Info"<<std::endl<<"ID:"<<id_<<std::endl<<"Name:"<<name_<<std::endl<<"Km:"<<total_km_<<std::endl<<"Drivers:"<<no_of_drivers_<<std::endl;
}

//Vehicle Functions
vehicle::vehicle(): vehicle{"new_no_name_type"}
{firstid++;}

vehicle::vehicle(std::string type):
    type_{type},km_{0},id_{firstid}
{firstid++;}

void vehicle::show()
{
    std::cout<<"Car Info"<<std::endl<<"ID:"<<id_<<std::endl<<"Name:"<<type_<<std::endl<<"Km:"<<km_<<std::endl;
}
/*void findcar(int a)
{
    std::cout<<"Car Info"<<std::endl<<"ID:"<<id_<<std::endl<<"Name:"<<type_<<std::endl<<"Km:"<<km_<<std::endl;
}*/
//Driver Functions
driver::driver()
    : driver{99,"noname"}
{
    firstid++;
}

driver::driver(int age,std::string name):
    age_{age},
    name_{name},funds_{0},km_{0},id_{firstid}
{
    firstid++;
}

void driver::show()
{
    std::cout<<"Driver Info"<<std::endl<<"ID:"<<id_<<std::endl<<"Name:"<<name_<<std::endl<<"Age:"<<age_<<std::endl<<"Km:"<<km_<<std::endl<<"Funds:"<<funds_<<std::endl;
}
int driver::showid()
{
    return id_;
}

int driver::firstid = 0;
int vehicle::firstid = 0;
int family::firstid = 0;
int account::firstid = 0;

int main()
{
    
    driver d1{24,"Daniel"};
    driver d2{33,"Aloha"};
    driver d3{11,"Bebe"};
    driver d4{30,"Marius"};
    std::array <driver,4> drivers{d1,d2,d3,d4};
    vehicle a2{"Dacia"},a5{"Renault"},a4{"Tesla"};
    vehicle a1{"Honda"};
    vehicle a{"Nissan"};

    //Find driver by id
    int id=3;
    for(int i=0;i<=4;i++){
    if(drivers[i].showid()==id)
    {std::cout<<"ID IS"<<std::endl;
    drivers[i].show();}
    else{//std::cout<<"ID IS NOT"<<std::endl;
    }
    }
    
    /*
    a1.show();
    a2.show();
    a4.show();
    a5.show();
    a.show();
    family f1{3,"Expert"};
    f1.show();
    account ac{2,"Yeah"};
    ac.show();
    
*/


    return 44;
}