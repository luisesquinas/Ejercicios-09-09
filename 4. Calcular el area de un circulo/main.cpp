#include <iostream>
using namespace std;

int main() {
    double PI = 3.1416;
    double radio; 
    double area;

    cout << "Radio del círculo (en cm): ";
    cin >> radio;

    area = PI * radio * radio;

    cout << "El área del círculo son " + to_string (area) + " cm";

    return 0;
}
