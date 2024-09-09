#include <iostream>
using namespace std;

int main() { 

    int num;

    cout << "Ingresa un número: ";
    cin >> num;

for (int x = 1; x <= num; x++){
    cout << to_string (x) + "\n";
}

return 0;
}