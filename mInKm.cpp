#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");

    cout << "Ввеите метры: ";
    float meatr;
    cin >> meatr;
    cout << "Ваши километры " << meatr / 1000;

}


