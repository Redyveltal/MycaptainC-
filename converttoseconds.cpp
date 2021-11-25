#include<iostream>
using namespace std;

class seconds_calculator
{
    int hr,min,sec;
public:
    void input(void);
    int sec_cal();
};

void seconds_calculator :: input(void)
{
    cout<<"Enter time :\nHours : ";
    cin>>hr;
    cout<<"Minutes : ";
    cin>>min;
    cout<<"Seconds : ";
    cin>>sec;
}

int seconds_calculator :: sec_cal(){
    int s=(hr*60*60)+(min*60)+(sec);
    return s;
}

int main(){
seconds_calculator alpha;
alpha.input();
cout<<"==========================";
cout<<"\nTime in seconds: "<<alpha.sec_cal();

return 0;
}
