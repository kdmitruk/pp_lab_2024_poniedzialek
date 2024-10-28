#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;
int main() {
    int arr[5];
    srand(time(0));
    for(int i=0;i<5;i++)
        arr[i]=rand()%10+1;
    for(int i=0;i<5;i++)
        cout<<arr[i]<<' ';
    cout<<endl;
    int sum=0, prod=1;
    float sum2=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
        prod*=arr[i];
        sum2+=1./arr[i];
    }
    float avg=sum/5.;
    sum=0;
    for(int i=0;i<5;i++){
        sum+=pow(arr[i]-avg, 2);

    }

    cout<<"Suma = "<<sum<<endl;
    cout<<"Srednia arytmetyczna = "<<setprecision(10)<<avg<<endl;
    cout<<"Srednia geometryczna = "<<pow(prod,1./5)<<endl;
    cout<<"Srednia harmoniczna  = "<<5./sum2<<endl;
    cout<<"Odchylenie standardowe  = "<<sqrt(sum/4.)<<endl;
    return 0;
}
