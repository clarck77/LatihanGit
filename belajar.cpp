#include <iostream>
using namespace std;

int main(){
    int a,b;

    cout << "input a: ";
    cin >> a;
    cout << endl;
    cout << "input b: ";
    cin >> b;

    // menambahkan fungsi perkalian antara a dan b
    cout << endl;
    int multiplication = a * b;
    cout << "hasil dari perkalian antara a dan b adalah: " << multiplication;

    // menambahkan fungsi pembagian pada a dan b
    cout << endl;
    int divide = a / b;
    cout << "hasil dari pembagian antara a dan b adalah: " << divide;

    // menambahkan fungsi penambahan pada a dan b
    cout << endl;
    int add = a + b;
    cout << "hasil dari penambahan antara a dan b adalah: " << add;

    return 0;
}