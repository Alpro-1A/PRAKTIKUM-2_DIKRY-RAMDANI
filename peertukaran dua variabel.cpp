#include <iostream>

using namespace std;

int main()
{
    int firstValue = 10;
    int secondValue = 8;
    int temp;

    cout << "PERTUKARAN DUA VARIABEL \n" << endl;
    cout << "variabel pertama : " <<firstValue<< endl;
    cout << "variabel kedua : " <<secondValue<< endl;

    temp = firstValue;
    firstValue = secondValue;
    secondValue = temp;

    cout << "\n HASIL PERTUKARAN DUA VARIABEL \n" << endl;
    cout << "variabel peertama : " <<firstValue<< endl;
    cout << "variabel kedua : " <<secondValue<< endl;

    return 0;

}
