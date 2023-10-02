#include <iostream>
#include <vector>
using namespace std;

vector<double> convertTemperature(double celsius) {
    vector<double> result;
    double k = celsius+273.15;
    double f = (celsius*1.80)+32.00;
    result.push_back(k);
    result.push_back(f);
    return result;
}

int main() {
    vector<double> result = convertTemperature(65.70);
    cout<<result[0]<<" "<<result[1];
    return 0;
}