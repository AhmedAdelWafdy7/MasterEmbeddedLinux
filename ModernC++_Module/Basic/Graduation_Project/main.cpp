#include <iostream>
#include <string>
#include <vector>
#include <unistd.h> 

using namespace std;

class user;

vector<user> records;

class user
{
public:
    string name;
    uint32_t age;
    uint32_t option;
    uint32_t ID;


    const int MAX_RECORDS = 100;
    user(string n, uint32_t a);
    string getName() const;
    void setName(string n);
    void get_user_info();
    void get_user_option();
    user fetch_record(const uint32_t id);
    void print_user_info(uint32_t ID);
    void add_record(string username, uint32_t user_age);
};

user::user(string n, uint32_t a) : name(n), age(a), option(0), ID(0) {}

string user::getName() const
{
    return name;
}

void user::setName(string n)
{
    name = n;
}

void user::get_user_info()
{
    cout << "Add User. please Enter username and age:" << "\n"
         << "Name: ";
    cin >> name;
    cout << "\nAge: ";
    cin >> age;
    cout << "User record Added Successfully.\n" << "\n";
}

void user::get_user_option()
{
    cout << "\nPlease select an option:" << "\n";
    cout << "1: Add Record\n2: Fetch Record\n3: Quit\n";
    cout << "\nEnter option: ";
    cin >> option;
    cout<<"\n\n";
}

user user::fetch_record(const uint32_t id)
{
    try
    {
        return records.at(id);
    }
    catch (std::out_of_range &e)
    {
        std::cout << "Invalid user ID: " << e.what() << "\n";
        return user("NULL", 0);
    }
}

void user::print_user_info(uint32_t ID)
{
    user user_info = fetch_record(ID);
    cout << "\nUser ID: " << user_info.ID << "\n"
         << "User Name: " << user_info.name << "\n"
         << "User Age: " << user_info.age << "\n";
}

void user::add_record(string username, uint32_t user_age)
{
    user p(username, user_age);
    records.push_back(p);
}

enum class OPTION
{
    ADD_RECORD = 1,
    FETCH_RECORD = 2,
    QUIT = 3
};

int main()
{
    uint8_t terminate{1};
    cout << "User SignUp Application" << "\n\n";
    while (terminate)
    {
    
        user person("NULL", 0);
        person.get_user_option();
        uint32_t choice{person.option};
        switch (static_cast<OPTION>(choice))
        {
        case OPTION::ADD_RECORD:
            person.get_user_info();
            person.add_record(person.getName(), person.age);
            break;
        case OPTION::FETCH_RECORD:
            cout << "Please Enter User ID: ";
            cin >> person.ID;
            person.print_user_info(person.ID);
            break;
        case OPTION::QUIT:
            cout << "happy to help you,goodbye thanks... ";
            usleep(3000000);
            terminate = 0;
            break;
        default:
            cout << "Invalid option" << "\n";
            break;
        }
    }
    return 0;

}
