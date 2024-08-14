#include <iostream>
#include <string>
#include <map>

void countCharacterOccurrences(const std::string& str) {
	std::map<char, int> charCount;

	// Duyệt qua từng ký tự trong chuỗi và tăng biến đếm cho ký tự đó
	for (char c : str) {
		charCount[c]++;
	}

	// In ra số lần xuất hiện của mỗi ký tự
	for (const auto& pair : charCount) {
		std::cout << "Ký tự '" << pair.first << "' xuất hiện " << pair.second << " lần." << std::endl;
	}
}

int main() {
	std::string inputString;

	std::cout << "Nhập chuỗi bất kỳ: ";
	std::getline(std::cin, inputString);

	countCharacterOccurrences(inputString);

	return 0;
}
