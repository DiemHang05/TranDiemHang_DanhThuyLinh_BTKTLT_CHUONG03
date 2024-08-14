#include <iostream>
#include <string>

void splitName(const std::string& fullName, std::string& middleName, std::string& lastName) {
	size_t lastSpacePos = fullName.find_last_of(' ');

	if (lastSpacePos != std::string::npos) {
		middleName = fullName.substr(0, lastSpacePos);  // Chuỗi từ đầu đến vị trí cuối cùng của dấu cách
		lastName = fullName.substr(lastSpacePos + 1);    // Chuỗi từ sau dấu cách cuối cùng đến hết chuỗi
	}
	else {
		// Trường hợp không có dấu cách, toàn bộ chuỗi là tên
		middleName = "";
		lastName = fullName;
	}
}

int main() {
	std::string fullName, middleName, lastName;
	std::cout << "Nhập họ tên đầy đủ: ";
	std::getline(std::cin, fullName);

	splitName(fullName, middleName, lastName);

	std::cout << "Chuỗi họ lót: \"" << middleName << "\"" << std::endl;
	std::cout << "Chuỗi tên: \"" << lastName << "\"" << std::endl;

	return 0;
}
