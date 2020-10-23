#include<iostream>
#include<cmath>

int main(){
    int a = 10, b = 3;
    int perimeter = 2*a + 2*b;
    int area = a*b;
    std::cout << "Perimeter = " << perimeter << "\n";
    std::cout << "Area = " << area << "\n";
    
    int a1 = 11, b1 = 17, c1 = 8;
    perimeter = a1+b1+c1;
    std::cout << "Perimeter = " << perimeter << "\n";
    double p = perimeter/2.0;
    double triangleArea = sqrt(p*(p-a1)*(p-b1)*(p-c1));
    std::cout << "Area = " << (int)(triangleArea*100 + 0.5)/100.0;
    return 0;
}
