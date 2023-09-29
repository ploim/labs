//The laboratory work was made by a student of the group 231-351 Pavliuchenko Michael Sergeevich
//Number 136 (z)

#include <iostream>
#include <cmath>

unsigned int factorial (unsigned int m)
{
    if (m == 0)
    {
        return 1;
    }
    else
    {
        return m * factorial(m - 1);
    }
}

int main()
{
    float n;
    float a;
    int sch;
    float res = 0;
    std::cout << "Программа, вычисляющая ((-1)^n * an)/n! на основании введенных n и a1, a2, ..., an" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
    std::cout << "Введите значение для натурального числа n: ";
    std::cin >> n;

    if ((n == int(n)) && (n >= 1))
    {
        std::cout << "Введите значения для a (" << n << " шт.)" << std::endl;
            for (sch = 1; sch <= n; sch++)
            {
                std::cin >> a;
                res += (pow((-1), sch) * a) / factorial(sch);
            }
        std::cout << "Результат вычисления: " << res;
    }
    else
    {
        std::cout << "Это число не является натуральным. Ввидите натуральное n." << std::endl;
    }
}