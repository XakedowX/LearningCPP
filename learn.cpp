#include <iostream>
#include <cmath>

using namespace std;

double power(double base, int exponent)
{
    double result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }

    return result;
}


void myMessageForYouGuys();


int main()
{
    int base, exponent;
    
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;

    cout << power(base, exponent) << endl;

    myMessageForYouGuys();
}


void myMessageForYouGuys()
{
    cout << "Why are you wasting your time on me? I mean thanks but...Are you here to see my progress?" << endl;
}