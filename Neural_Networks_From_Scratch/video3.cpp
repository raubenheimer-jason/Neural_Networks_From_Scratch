#include <iostream>
#include <vector>

void print_layer_outputs(const std::vector<double>& layer_outputs);

void video_3()
{
	// https://www.youtube.com/watch?v=tMrbN67U9d4&ab_channel=sentdex

	std::cout << "===== Video 3 =====" << std::endl;

	std::vector<double> inputs{ 1.0, 2.0, 3.0, 2.5 };

	std::vector<std::vector<double>> weights{ { 0.2, 0.8, -0.5, 1.0 }, { 0.5, -0.91, 0.26, -0.5 }, { -0.26, -0.27, 0.17, 0.87 } };

	std::vector<double> biases{ 2.0, 3.0, 0.5 };

	std::vector<double> layer_outputs{};

	//for (auto [neuron_weights, neuron_bias] : zip(weights, biases))
	for (size_t i{}; i < weights.size(); ++i)
	{
		double neuron_output{};
		for (size_t j{}; j < inputs.size(); ++j)
		{
			neuron_output += inputs.at(j) * weights.at(i).at(j);
		}
		neuron_output += biases.at(i);
		layer_outputs.push_back(neuron_output);
	}

	print_layer_outputs(layer_outputs);

	std::cout << "-------------------" << std::endl;
}

void print_layer_outputs(const std::vector<double>& layer_outputs)
{
	for (size_t i{}; i < layer_outputs.size(); ++i)
	{
		std::cout << layer_outputs.at(i);
		if (i < layer_outputs.size() - 1)
			std::cout << ", ";
		else
			std::cout << std::endl;

	}
}
