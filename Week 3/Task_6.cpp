#include<iostream>

int main(){
	int n = 0;
	std::cin >> n;
	int temp = n;
	bool flag = true;
	std::cout << temp << " ";
	while (flag){
		temp += n;
		std::cout << temp << " ";
		if (temp + n > 100) flag = false;
	}
	return 0;
}
