#include <iostream>
#include <cmath>



int quarter_of(int month){
    // Q1 -> {1,  2,  3 }
    // Q2 -> {4,  5,  6 }
    // Q3 -> {7,  8,  9 }
    // Q4 -> {10, 11, 12}
    return std::ceil((float(month) / 3.0));
}

int main () {
    // for (int i = 1; i <= 12; i++) {
    //     std::cout << "Month " << i << " -> Q. " << std::ceil(i / 3) << std::endl;
    // }

    // 
    // for (int i = 1; i <= 12; i++) {
    float test = 1 / 3;
        std::cout
                << "ceil(+2.4) = " << std::ceil(+2.4) << '\n'
                << "ceil(-2.4) = " << std::ceil(-2.4) << '\n'
                << "ceil(-0.0) = " << std::ceil(-0.0) << '\n'
                << "ceil(+0.3) = " << std::ceil(float(1) / float(3)) << '\n'
                << "ceil(-Inf) = " << std::ceil(-INFINITY) << '\n';
                // << "ceil(-Inf) = " << std::ceil(i / 3) << '\n';
    // }
}