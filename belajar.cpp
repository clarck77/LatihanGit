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

    cout << endl;
    int add = a + b;
    cout << "hasil dari penambahan antara a dan b adalah: " << add;

    cout << endl;
    int subtract = a - b;
    cout << "hasil dari pengurangan antara a dan b adalah: " << subtract;

    return 0;
}