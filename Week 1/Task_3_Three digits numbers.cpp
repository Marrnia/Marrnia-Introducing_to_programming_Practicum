#include<iostream>
#include<vector>
#include<algorithm>

int main(){
	int num = 0;
	std::cin >> num;
	int sum = 0;
	std::vector<int> digits;
	while (num){
		sum += num % 10;
		digits.push_back(num%10);
		num /= 10;
	}
	reverse(digits.begin(),digits.end());
	for(int i : digits){
		std::cout << i << " ";
	}
	std::cout << "-> " << sum;
	return 0;
}
