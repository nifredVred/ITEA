// Test.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>
#include <Limits>
#include <cmath>


int main(int arg, char const* argv[])
{
	constexpr int Integer_Max_Value = std::numeric_limits<int>::max();
	constexpr int Integer_Min_Value = std::numeric_limits<int>::min();
	double a, b, c;

	std::cout << "C++ Program to Solve Quadratic" << std::endl
		<< "Please enter coefficients: a, b and c in rang ["
		<< Integer_Max_Value << " to " << Integer_Min_Value << "] to solve the square equation\n" << std::endl
		<< "Please enter a" << std::endl;

	std::cin >> a;

	if (a != 0 && a >= Integer_Min_Value && a <= Integer_Max_Value) {

		std::cout << std::endl << "Please enter b" << std::endl;
		std::cin >> b;

		if (b >= Integer_Min_Value && b <= Integer_Max_Value) {

			std::cout << std::endl << "Please enter c" << std::endl;
			std::cin >> c;

			if (c >= Integer_Min_Value && c <= Integer_Max_Value) {

				const unsigned int NUMBER_2 = 2;
				const unsigned int NUMBER_4 = 4;
				const auto D = std::pow(b, 2) - NUMBER_4 * a * c;

				if (D == 0) {
					auto x_1 = (-b) / (NUMBER_2 * a);
					auto x_2 = x_1;

					std::cout << "There is only one real root x1 = x2 = " << x_1 << "\n";
				}

				else if (D > 0) {
					auto x_1 = (-b - std::sqrt(D)) / (NUMBER_2 * a);
					auto x_2 = (-b + std::sqrt(D)) / (NUMBER_2 * a);

					std::cout << "There are two real roots x1 = " << x_1 << " and x2 = " << x_2 << std::endl;
				}

				else if (D < 0) {

					std::cout << "This equation does not have a solution" << "\n";

				}
			}
			else std::cout << "c dose not fit the range from" << Integer_Min_Value << " to " << Integer_Max_Value << "\n";

		}
		else std::cout << "b dose not fit the range from" << Integer_Min_Value << " to " << Integer_Max_Value << "\n";

	}
	else std::cout << "a dose not fit the range from" << Integer_Min_Value << " to " << Integer_Max_Value << "\n";





	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
