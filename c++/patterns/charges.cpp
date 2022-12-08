#include <iostream>
using namespace std;

float Charges(int weight)
{
    float charge = 28.50, additionalCharge = charge + 4;
    if (weight <= 2)
    {
        return weight * charge;
    }
    else
    {
        return weight * additionalCharge;
    }
}

int main()
{
    float answer = Charges(2);
    cout << "when weight is equal to 2: " << answer << endl;
    answer = Charges(4);
    cout << "when wight is equal to 4: " << answer;
}