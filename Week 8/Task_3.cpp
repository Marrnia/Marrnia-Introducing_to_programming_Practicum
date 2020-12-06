#include <iostream>

void setPrice(double);
void setDiscount(double);
double returnPrice(double, double);

int main() {
    double price = 0.0;
    double discount = 0.0;
    std::cin >> price >> discount;
    setPrice(price);
    setDiscount(discount);
    std::cout << returnPrice(price,discount) << std::endl;
    return 0;
}

double returnPrice(double price, double discount) {
    return price - (price * discount/100);
}

void setPrice(double price) {
    if (!std::cin) {
        std::cin.clear();
        std::cin.ignore(0x7fffffff,'\n');
        throw std::invalid_argument("Not a number.");
    }
    if (price < 0) {
        throw std::invalid_argument("Price must be a positve nubmer.");
    }
}

void setDiscount(double discount) {
    if (!std::cin) {
        std::cin.clear();
        std::cin.ignore(0x7fffffff, '\n');
        throw std::invalid_argument("Not a number.");
    }
    if (discount < 0 || discount > 100) {
        throw std::invalid_argument("Discount must be between 0% and 100%.");
    }
}
