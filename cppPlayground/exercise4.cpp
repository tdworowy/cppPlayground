#include <iostream>

int main() {
	int line = 0;
	char ch;

	while (std::cin.get(ch) and ch !='Q') {
		if (ch != "\n")
			line++;;
		
	}
}


//int main() {
//	int line = 0;
//	char ch;

//	while (std::cin.get(ch)) {
//		if (ch == 'Q')
//			break;
//		if (ch != "\n")
//			continue;
//		line++;
//	}
//}
