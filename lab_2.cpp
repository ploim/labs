//The laboratory work was made by a student of the group 231-351 Pavliuchenko Michael Sergeevich

#include <iostream>
#include <math.h>

void task1(float x1, float y1)
{
    float s;
    const int R = 1;
    float Rsquared;
    Rsquared = R * R;
    s = x1 * x1 + y1 * y1;
    if (s <= Rsquared)
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }
}
void task2(float x2, float y2)
{
    float s1, s2;
    const float Rsmall = 0.5;
    const float Rbig = 1;
    float Rsmall_squared;
    float Rbig_squared;
    Rsmall_squared = Rsmall * Rsmall;
    Rbig_squared = Rbig * Rbig;
    s1 = x2 * x2 + y2 * y2;
    if ((s1 >= Rsmall_squared) && (s1 <= Rbig_squared))
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }

}
void task3(float x3, float y3)
{
    if
    (
        (x3 <= 1 && x3 >= -1) &&
        (y3 <= 1 && y3 >= -1)
    )
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }
}
void task4(float x4, float y4)
{
    if
    (
        (x4 + y4 <= 1) && 
        ((-x4) + y4 <= 1) && 
        (x4 - y4 <= 1) && 
        ((-x4) - y4 <= 1)
    )
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }
}
void task5(float x5, float y5)
{
    if
    (
        (2 * x5 + y5 <= 1) &&
        ((-2) * x5 + y5 <= 1) &&
        ((-2) * x5 - y5 <= 1) &&
        (2 * x5 - y5 <= 1)
    )
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }
}
void task6(float x6, float y6)
{
    if
    (
        ((-x6) / 2 + y6 <= 1) &&
        ((-x6) / 2 - y6 <= 1) &&
        (x6 <= sqrt(1 - y6*y6))
    )
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }
}
void task7(float x7, float y7)
{
    if
    (
        (y7 <= 2 * x7 + 2) &&
        (y7 <= 2 - 2 * x7) &&
        (y7 >= -1)
    )
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }
}
void task8(float x8, float y8)
{
    if
    (
        (x8 >= -1) &&
        (x8 <= 1) &&
        (y8 >= (-2)) &&
        (y8 <= 1) &&
        (y8 <= abs(x8))
    )
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }
}
void task9(float x9, float y9)
{
    if 
    (
        ((y9 <= 0) && (y9 <= 2 * x9 + 3) && (y9 >= x9/3 - (float)1/3)) 
        ||
        ((y9 <= (-x9)) && (y9 >= 0) && (y9 <= 2 * x9 + 3))
    )
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }
}
void task10(float x10, float y10)
{
    if 
    (
        ((y10 >= abs(x10)) || (y10 >= 1))
    )
    {
        std::cout << "The point with coordinates x, y belongs to the shaded plane" << std::endl << std::endl;
    }
    else
    {
        std::cout << "The point with coordinates x, y does not belong to the shaded plane" << std::endl << std::endl;
    }
}

int main()
{
	int choice = 0;
    float x,y;
    std::cout 
		<< "Hello, user. \n" 
		<< "This program contains the solution to the following problem: \n" 
		<< "[Initial data]: \n" 
		<< "x = input \n"
		<< "y = input \n\n"
        << "[To do]: \n"
        << "Determine whether the point with coordinates x, y belongs to the shaded plane \n\n"
		<< "[Solution]: \n";
    std::cout << "Enter value for x: ";
    std::cin >> x;
    std::cout << "Enter value for y: ";
    std::cin >> y;

	while (true) 
	{
		std::cout << "Type task number 1 - 10 (0 to Exit): \n ";
		std::cin >> choice;
		switch (choice)
		{
		case 1:
		{
			task1(x,y);
			break;
		}
		case 2:
		{
			task2(x,y);
			break;
		}
		case 3:
		{
			task3(x,y);
			break;
		}
		case 4:
		{
			task4(x,y);
			break;
		}
		case 5:
		{
			task5(x,y);
			break;
		}
		case 6:
		{
			task6(x,y);
			break;
		}
		case 7:
		{
			task7(x,y);
			break;
		}
		case 8:
		{
			task8(x,y);
			break;
		}
		case 9:
		{
			task9(x,y);
			break;
		}
		case 10:
		{
			task10(x,y);
			break;
		}
		default:
		{
			std::cout << "Exiting...";
			return 0;
		}
		}
	}
}