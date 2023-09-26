//The laboratory work was made by a student of the group 231-351 Pavliuchenko Michael Sergeevich

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    cout << "Программа вычисления выражения: \n" <<
    "3*x^2*y^2 - 2*x*y^2 - 7*x^2*y - 4*y^2 + 15*x*y + 2*x^2 - 3*x + 10*y + 6 \n" <<
    "-------------------------------- \n";
    float x = 0, y = 0;
    float res = 0;
    cout << "Введите значение для перменной x: "; 
    cin >> x;
    cout << "Введите значение для перменной y: ";
    cin >> y;
    float xy = x * y;
    res = xy * (3 * xy - 2 * y - 7 * x + 15) - 4 * pow(y,2) + 2 * pow(x,2) - 3 * x + 10 * y + 6;
    cout << "Результат работы программы: " << setprecision(3) << res << endl;

    system("PAUSE");
    return 0;
}