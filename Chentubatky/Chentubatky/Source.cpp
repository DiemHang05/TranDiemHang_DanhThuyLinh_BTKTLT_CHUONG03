#include <iostream>
#include <string>

std::string insertWordAtPosition(const std::string& original, const std::string& word, int position) {
	if (position < 0 || position > original.length()) {
		std::cout << "Vị trí không hợp lệ!" << std::endl;
		return original;
	}

	std::string result = original.substr(0, position) + word + original.substr(position);
	return result;
}

int main() {
	std::string originalString, wordToInsert;
	int position;

	std::cout << "Nhập chuỗi ban đầu: ";
	std::getline(std::cin, originalString);

	std::cout << "Nhập từ cần chèn: ";
	std::getline(std::cin, wordToInsert);

	std::cout << "Nhập vị trí cần chèn (tính từ 0): ";
	std::cin >> position;

	std::string modifiedString = insertWordAtPosition(originalString, wordToInsert, position);
	std::cout << "Chuỗi sau khi chèn: \"" << modifiedString << "\"" << std::endl;

	return 0;
}
