#include <iostream>
#include <string>
#include <cctype>

std::string capitalizeWords(std::string str) {
	bool capitalizeNext = true;

	for (size_t i = 0; i < str.length(); ++i) {
		if (std::isspace(str[i])) {
			capitalizeNext = true;
		}
		else if (capitalizeNext) {
			str[i] = std::toupper(str[i]);
			capitalizeNext = false;
		}
		else {
			str[i] = std::tolower(str[i]);
		}
	}

	return str;
}

int main() {
	std::string input;
	std::cout << "Nhập chuỗi: ";
	std::getline(std::cin, input);

	std::string formattedString = capitalizeWords(input);
	std::cout << "Chuỗi sau khi định dạng: \"" << formattedString << "\"" << std::endl;

	return 0;
}
