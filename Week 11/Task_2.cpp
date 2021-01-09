#include <iostream>

int reverseNum(const int &);
int reverseNum(const int &,const int &);

int main() {
    std::cout << reverseNum(123) << '\n';
    return 0;
}

int reverseNum(const int &num) {
    return reverseNum(num,0);
}

int reverseNum(const int &num,const int &reverse) {
    if (num == 0) {
        return reverse;
    }
    return reverseNum(num/10,(reverse*10) + (num%10));
}
