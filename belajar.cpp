#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "input a: ";
    cin >> a;
    cout << endl;
    cout << "input b: ";
    cin >> b;

    cout << endl;
    int multiplication = a * b;
    cout << "hasil dari perkalian antara a dan b adalah: " << multiplication;

    cout << endl;
    int divide = a / b;
    cout << "hasil dari pembagian antara a dan b adalah: " << divide;

    return 0;
}