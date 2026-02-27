#include <cmath>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;
int main() {
    int x1;
    int x2;
    int y2;
    int y1;
    cout<<"Enter 4 points making x1,y1 & x2,y2."<<endl;
    cin>>x1>>y1>>x2>>y2;
int distance = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
cout<<"Your distance is:"<<distance<<endl;
    return 0;
}