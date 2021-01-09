#include <iostream>

int Ackermann(const int &,const int &);

int main() {
    std::cout << Ackermann(2,1) << '\n';
    return 0;
}

int Ackermann(const int &x,const int &y)
{
	if(x==0)
		return y+1;
	if(x > 0 && y==0)
		return Ackermann(x-1,1);
	else
		return Ackermann(x-1, Ackermann(x,y-1));
}
