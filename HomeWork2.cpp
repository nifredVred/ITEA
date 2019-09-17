
#include <Limits>
#include <cmath>
#include <iostream>

int main(int arg, char const* argv[]) {
	constexpr int Integer_Max_Value = std::numeric_limits<int>::max();
	constexpr int Integer_Min_Value = std::numeric_limits<int>::min();
	long long a;

	std::cout << "C++ Program to Solve Quadratic" << std::endl
		<< "Please enter coefficients: a, b and c in rang ["
		<< Integer_Max_Value << " to " << Integer_Min_Value
		<< "] to solve the square equation\n"
		<< std::endl
		<< "Please enter a" << std::endl;

	std::cin >> a;

	if (a != 0 && a >= Integer_Min_Value && a <= Integer_Max_Value) {
		long long b;
		std::cout << std::endl << "Please enter b" << std::endl;
		std::cin >> b;

		if (b >= Integer_Min_Value && b <= Integer_Max_Value) {
			long long c;
			std::cout << std::endl << "Please enter c" << std::endl;
			std::cin >> c;

			if (c >= Integer_Min_Value && c <= Integer_Max_Value) {

				const unsigned int NUMBER_2 = 2;
				const unsigned int NUMBER_4 = 4;
				const auto D = b * b - NUMBER_4 * a * c;
				const auto SQURE_ROOT_D = std::sqrt(D);
				const auto A_TWICE = NUMBER_2 * a;

				if (D == 0) {
					auto x_1 = (-b) / A_TWICE;

					std::cout << "There is only one real root x1 = x2 = " << x_1 << "\n";
				}
				else if (D > 0) {
					auto x_1 = (-b - SQURE_ROOT_D) / A_TWICE;
					auto x_2 = (-b + SQURE_ROOT_D) / A_TWICE;

					std::cout << "There are two real roots x1 = " << x_1
						<< " and x2 = " << x_2 << std::endl;

				}
				else if (D < 0) {
					std::cout << "This equation does not have a solution"
						<< "\n";
				}
			}
			else
				std::cout << "c dose not fit the range from" << Integer_Min_Value
				<< " to " << Integer_Max_Value << "\n";

		}
		else
			std::cout << "b dose not fit the range from" << Integer_Min_Value
			<< " to " << Integer_Max_Value << "\n";

	}
	else
		std::cout << "a dose not fit the range from" << Integer_Min_Value << " to "
		<< Integer_Max_Value << "\n";

	return 0;
}
