#include <iostream>
#include <string>

using namespace std;
int main() {
    int secnum;
    int minutes;
    int hours;
    int seconds;
    cout<<"enter a large integer representing a total number of seconds"<<endl;
    cin>>secnum;
    hours = secnum / 3600;
    minutes = (secnum % 3600) / 60;
    seconds = secnum % 60;

    cout<<secnum<<"seconds equals "<<hours<<"hours "<<minutes<<"minutes "<<seconds<<"seconds"<<endl;
    return 0;
}