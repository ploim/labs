//The laboratory work was made by a student of the group 231-351 Pavliuchenko Michael Sergeevich

#include <iostream>
#include <iomanip>

int main()
{
    const float R = 13.7;
    float s, fi;
    std::cout 
		<< "Hello, user. \n" 
		<< "This program contains the solution to the following problem: \n" 
		<< "[Initial data]: \n" 
		<< "R = 13.7 \n"
		<< "Fi = input \n\n"
    << "[To do]: \n"
    << "Find the square of a sector with a radius of 13.7 and number of radians Fi \n\n"
		<< "[Solution]: \n";

    std::cout << "Enter the number of radians Fi: ";
    std::cin >> fi;
    s = (fi * R * R) / 2;
    std::cout << std::fixed << std::setprecision(3) << "The square of a sector with a radius of 13.7 and number of radians " << fi << " is: " << s << std::endl;

}