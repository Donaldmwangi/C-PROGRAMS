#include <iostream>
using namespace std;

int main() {
    double principal, rate, time, simpleInterest;

 
    cout << "Enter the Principal amount: ";
    cin >> principal;

    cout << "Enter the Rate of interest (in %): ";
    cin >> rate;

    cout << "Enter the Time (in years): ";
    cin >> time;

    
    simpleInterest = (principal * rate * time) / 100;

    
    cout << "The Simple Interest is: " << simpleInterest << endl;

    return 0;
}
