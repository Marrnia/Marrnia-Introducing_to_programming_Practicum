#include<iostream>

void _swap(int &i, int &j){
	i ^= j;
	j ^= i;
	i ^= j;
}

int main(){
	int a, b;
	std::cin >> a >> b;
	_swap(a,b);
	std::cout << "a = " << a << "\nb = " << b;
	return 0;
}
