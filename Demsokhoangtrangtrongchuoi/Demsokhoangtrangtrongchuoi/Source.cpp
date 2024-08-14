#include <iostream>
#include <string>

int countSpaces(const std::string& str) {
	int count = 0;
	for (char c : str) {
		if (c == ' ') {
			count++;
		}
	}
	return count;
}

int main() {
	std::string input;
	std::cout << "Nhập chuỗi: ";
	std::getline(std::cin, input);

	int spaceCount = countSpaces(input);
	std::cout << "Số lượng khoảng trắng trong chuỗi: " << spaceCount << std::endl;

	return 0;
}
