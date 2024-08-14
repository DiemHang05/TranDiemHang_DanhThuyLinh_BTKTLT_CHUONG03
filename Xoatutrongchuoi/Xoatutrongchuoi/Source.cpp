#include <iostream>
#include <string>

std::string removeWordFromString(const std::string& original, const std::string& wordToRemove) {
	size_t pos = original.find(wordToRemove);

	if (pos != std::string::npos) {
		// Xóa từ và khoảng trắng sau từ nếu có
		std::string result = original;
		result.erase(pos, wordToRemove.length());

		// Xóa khoảng trắng thừa nếu từ cần xóa nằm ở giữa hoặc cuối chuỗi
		if (pos < result.length() && std::isspace(result[pos])) {
			result.erase(pos, 1);
		}

		// Xóa khoảng trắng thừa nếu từ cần xóa nằm ở đầu chuỗi
		if (pos == 0 && !result.empty() && std::isspace(result[0])) {
			result.erase(0, 1);
		}

		return result;
	}
	else {
		std::cout << "Từ cần xóa không tồn tại trong chuỗi!" << std::endl;
		return original;
	}
}

int main() {
	std::string originalString, wordToRemove;

	std::cout << "Nhập chuỗi ban đầu: ";
	std::getline(std::cin, originalString);

	std::cout << "Nhập từ cần xóa: ";
	std::getline(std::cin, wordToRemove);

	std::string modifiedString = removeWordFromString(originalString, wordToRemove);
	std::cout << "Chuỗi sau khi xóa: \"" << modifiedString << "\"" << std::endl;

	return 0;
}
