
/**
 * author: amir kamalian
 * date: 30 dec 2024
 * */


#include <iostream>
#include "../inc/matrix.hpp"

using std::cout, std::endl;

int main() {

    // simple test
    Matrix M = Matrix(2, 3);

    std::int32_t rows = M.get_rows();
    std::int32_t columns = M.get_columns();
    bool square = M.get_is_square();

    cout << "m = " << rows << "\tn = " << columns << "\t square = " << square << endl;

    return 0;
}
