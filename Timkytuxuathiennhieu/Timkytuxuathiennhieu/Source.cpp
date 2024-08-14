#include <iostream>
#include <string>
#include <map>

char findMostFrequentChar(const std::string& str) {
	std::map<char, int> charCount;

	// Duyệt qua từng ký tự trong chuỗi và tăng biến đếm cho ký tự đó
	for (char c : str) {
		charCount[c]++;
	}

	char mostFrequentChar = '\0'; // Ký tự xuất hiện nhiều nhất
	int maxCount = 0; // Số lần xuất hiện nhiều nhất

	// Duyệt qua map để tìm ký tự có số lần xuất hiện nhiều nhất
	for (const auto& pair : charCount) {
		if (pair.second > maxCount) {
			maxCount = pair.second;
			mostFrequentChar = pair.first;
		}
	}

	return mostFrequentChar;
}

int main() {
	std::string inputString;

	std::cout << "Nhập chuỗi: ";
	std::getline(std::cin, inputString);

	char mostFrequentChar = findMostFrequentChar(inputString);

	if (mostFrequentChar != '\0') {
		std::cout << "Ký tự xuất hiện nhiều nhất là: '" << mostFrequentChar << "'" << std::endl;
	}
	else {
		std::cout << "Chuỗi không có ký tự nào." << std::endl;
	}

	return 0;
}
