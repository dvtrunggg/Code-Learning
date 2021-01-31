#include <iostream>
using namespace std;
struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    inflatable guest =
    {
        "Glorious Gloria",    //namevalue
        1.88,                //volum value
        29.99                //price value
    };                        //guest is structure variable of type inflatable
    inflatable pal =
    {
        "Audacious Arthur",
        3.12,
        32.99
    };                        //pal is second variable of type inflatable
    //Note: som implementations require using static inflatable guest =
    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << endl;
    //pal.name is the name member of the pal variable
    cout << "You can have both for $" << guest.price + pal.price << endl;
    return 0;
}
