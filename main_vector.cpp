#include <iostream>
#include <vector>

void printVector(const std::vector<int>&);
void removeNumber(std::vector<int>&, const int&);

int main() {

	std::vector<int> main_vector;
	for (int i = 0; i < 10; i++) {
		main_vector.push_back(rand() % 15);
	}
	printVector(main_vector);
	int input_number;
	std::cout << "Enter number you need to delete: ";
	std::cin >> input_number;
	removeNumber(main_vector, input_number);
	printVector(main_vector);

	system("pause");
	return 0;
}

void removeNumber(std::vector<int>& vec, const int& input_number) {
	unsigned int i = 0;
	while ( i < vec.size() ) {
		if (vec[i] == input_number) {
			vec.erase(vec.begin() + i);
		}
		else {
			i++;
		}
	}
}

void printVector(const std::vector<int>& vec) {
	for (auto i : vec) {
		std::cout << i << " ";
	}
	std::cout << "\n";
}