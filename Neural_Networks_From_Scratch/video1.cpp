#include <iostream>
#include <vector>

void video_1()
{
	// https://www.youtube.com/watch?v=Wo5dMEP_BbI&t=524s&ab_channel=sentdex

	std::cout << "===== Video 1 =====" << std::endl;

	std::vector<double> inputs{ 1.2, 5.1, 2.1 };
	std::vector<double> weights{ 3.1, 2.1, 8.7 };
	double bias{ 3.0 };

	double output = inputs.at(0) * weights.at(0) + inputs.at(1) * weights.at(1) + inputs.at(2) * weights.at(2) + bias;

	std::cout << output << std::endl;

	std::cout << "-------------------" << std::endl;
}