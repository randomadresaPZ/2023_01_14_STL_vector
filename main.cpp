#include <iostream>
#include <vector>
#include <string>


int main() {
	std::vector<int> bla;
	
	bla.reserve(50);

	for (int i = 0; i < 25; i++)
		bla.push_back(i);

	for (auto value : bla)
		std::cout << value << std::endl;

	std::cout << "Size : " << bla.size() << std::endl;

	while (bla.size()) {
		std::cout << bla.back() << std::endl; // bla[24]
		bla.pop_back();
	}

	bla.push_back(rand());
	std::cout << bla.front() << std::endl; // bla[0]
	bla.emplace(bla.begin(), rand());
	std::cout << bla.front() << std::endl; // bla[0]
	std::cout << bla[1] << std::endl; // bla[0]

}
