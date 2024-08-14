#include <iostream>
#include <string>

bool findNameInFullName(const std::string& fullName, const std::string& name) {
	// Tìm kiếm tên trong họ tên
	size_t pos = fullName.find(name);

	// Nếu tìm thấy tên và đảm bảo rằng nó không phải là một phần của từ khác
	if (pos != std::string::npos) {
		// Kiểm tra xem ký tự trước tên và sau tên có phải là khoảng trắng hoặc là đầu/cuối chuỗi
		bool beforeIsSpaceOrStart = (pos == 0 || std::isspace(fullName[pos - 1]));
		bool afterIsSpaceOrEnd = (pos + name.length() == fullName.length() || std::isspace(fullName[pos + name.length()]));

		return beforeIsSpaceOrStart && afterIsSpaceOrEnd;
	}

	return false;
}

int main() {
	std::string fullName, name;
	std::cout << "Nhập họ tên đầy đủ: ";
	std::getline(std::cin, fullName);

	std::cout << "Nhập tên cần tìm: ";
	std::getline(std::cin, name);

	if (findNameInFullName(fullName, name)) {
		std::cout << "Tên \"" << name << "\" đã nhập đúng." << std::endl;
	}
	else {
		std::cout << "Tên \"" << name << "\" đã nhập sai." << std::endl;
	}

	return 0;
}
