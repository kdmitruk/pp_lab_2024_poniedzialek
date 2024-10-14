#include <iostream>

using namespace std;

int main()
{
    int year=1900;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"lapse year";
            }else{
                cout<<"common year";
            }
        }else{
            cout<<"lapse year";
        }
    }else{
        cout<<"common year";
    }
    return 0;
}
