#include <iostream>
#include <vector>

void video_2()
{
	// https://www.youtube.com/watch?v=lGLto9Xd7bU&ab_channel=sentdex

	std::cout << "===== Video 2 =====" << std::endl;

	std::vector<double> inputs{ 1.0, 2.0, 3.0, 2.5 };

	std::vector<double> weights1{ 0.2, 0.8, -0.5, 1.0 };
	std::vector<double> weights2{ 0.5, -0.91, 0.26, -0.5 };
	std::vector<double> weights3{ -0.26, -0.27, 0.17, 0.87 };

	double bias1{ 2.0 };
	double bias2{ 3.0 };
	double bias3{ 0.5 };

	double output1 = inputs.at(0) * weights1.at(0) + inputs.at(1) * weights1.at(1) + inputs.at(2) * weights1.at(2) + inputs.at(3) * weights1.at(3) + bias1;
	double output2 = inputs.at(0) * weights2.at(0) + inputs.at(1) * weights2.at(1) + inputs.at(2) * weights2.at(2) + inputs.at(3) * weights2.at(3) + bias2;
	double output3 = inputs.at(0) * weights3.at(0) + inputs.at(1) * weights3.at(1) + inputs.at(2) * weights3.at(2) + inputs.at(3) * weights3.at(3) + bias3;

	std::vector<double> output = { output1, output2, output3 };

	std::cout << output.at(0) << ", " << output.at(1) << ", " << output.at(2) << std::endl; // 4.8, 1.21, 2.385

	std::cout << "-------------------" << std::endl;
}
