#include <iostream>
#include <string>
#include <sstream>

std::string removeExtraSpaces(const std::string& str) {
	std::stringstream ss(str);
	std::string word, result;
	bool firstWord = true;

	while (ss >> word) {
		if (!firstWord) {
			result += " ";
		}
		result += word;
		firstWord = false;
	}

	return result;
}

int main() {
	std::string input;
	std::cout << "Nhập chuỗi: ";
	std::getline(std::cin, input);

	std::string cleanedString = removeExtraSpaces(input);
	std::cout << "Chuỗi sau khi xóa khoảng trắng thừa: \"" << cleanedString << "\"" << std::endl;

	return 0;
}
