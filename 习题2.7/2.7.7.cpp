// convert distance
#include <iostream>
void  show_time(int,int);//function prototype
int main ()
{
    using namespace std;
    int hours;
    int minutes;
    cout << "Enter the number of hours :"<< endl;
    cin >> hours;
    cout << "Enter the number of minutes :" << endl;
    cin >> minutes;
    show_time(hours,minutes);
    return 0;
}

void  show_time(int hours,int minutes)
{
    using namespace std;
    cout << "Time:" << hours << ":" << minutes << endl;
}





