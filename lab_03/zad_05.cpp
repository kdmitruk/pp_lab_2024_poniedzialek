#include <iostream>

using namespace std;

/*int main()
{
    float x, sum=0;
    cout<<"Podaj liczbe: "<<endl;
    cin>>x;
    while(x!=0){
        sum+=x;
        cin>>x;
    }
    cout<<sum;
    return 0;
}*/
int main()
{
    float x, sum=0;
    cout<<"Podaj liczbe: "<<endl;
    do{
        cin>>x;
        sum+=x;
    }while(x!=0);
    cout<<sum;
    return 0;
}
