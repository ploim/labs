//The laboratory work was made by a student of the group 231-351 Pavliuchenko Michael Sergeevich
//Number 58 (b)

#include <iostream>
#include <cmath>

void task2(float x2) //Номер 58(б) (мой)
{
    float y;

    if (x2 < -1)
    {
        y = 1/x2*x2;
    }
    else if (x2 <= 2 && x2 >= -1)
    {
        y = x2*x2;
    }
    else if (x2 >= 2)
    {
        y = 4;
    }
    std::cout << "f(a) = " << y << std::endl;
    

}
void task1(float x1) //Номер 58(а)
{
    float y;
    if (x1 < 0)
    {
        y = -x1;
    }
    else if (x1 > 0)
    {
        y = -(x1*x1);
    }
    std::cout << "f(a) = " << y << std::endl;

}
void task3(float x3) //Номер 58(в)
{
    float y;
    if (x3 < 0)
    {
        y = abs(x3 + 1);
    }
    else if (x3 > 0)
    {
        y = abs(x3 - 1);
    }
    else if (x3 == 0)
    {
        y = 1;
    }
        std::cout << "f(a) = " << y << std::endl;
}
void task4(float x4) //Номер 58(г)
{
    float y;
    if (x4 < 0)
    {
        y = -x4;
        std::cout << "f(a) = " << y << std::endl;
    }
    else if (x4 > 0 && x4 < 1)
    {
        y = x4;
        std::cout << "f(a) = " << y << std::endl;
    }
    else if (x4 > 1 && x4 < 2)
    {
        y = 1;
        std::cout << "f(a) = " << y << std::endl;
    }
    else if (x4 > 2)
    {
        y = (-2) * (x4 - 2.5);
    }
    std::cout << "f(a) = " << y << std::endl;
}

int main()
{
    float x;
    std::cout << "Программа, вычисляющая f(a) на основании данного графика б)" << std::endl;
    std::cout << "-----------------------------------------------------------" << std::endl;
	int choice = 0;
	while (true)
	{
		std::cout << std::endl
		<< "Введите номер задания: " << std::endl
		<< "1. Задание а) \n"
		<< "2. Задание б) \n"
		<< "3. Задание в) \n"
        << "4. Задание г) \n"
		<< "5. Выход \n\n";
		std::cin >> choice;
		switch (choice)
		{
		    case 1:
		    {
                std::cout << "Введите действительное число a: ";
                std::cin >> x;
                task1(x);
			    break;
		    }
		    case 2:
		    {
                std::cout << "Введите действительное число a: ";
                std::cin >> x;
                task2(x);
			    break;
		    }
		    case 3:
		    {
                std::cout << "Введите действительное число a: ";
                std::cin >> x;
                task3(x);
			    break;
		    }
            case 4:
		    {
                std::cout << "Введите действительное число a: ";
                std::cin >> x;
                task4(x);
			    break;
		    }
		    default:
		    {
			    std::cout << "Произведен выход.";
			    return 0;
		    }
		}
	}
}