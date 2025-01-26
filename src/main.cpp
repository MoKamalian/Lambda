
/**
 * author: amir kamalian
 * date: 30 dec 2024
 * */


#include <iostream>
#include <memory>
#include "../inc/matrix.hpp"

using std::cout, std::endl;

int main() {

    int m = 3;
    int n = 3;
    // simple test
    Matrix M = Matrix(m, n);

    std::uint32_t rows = M.get_rows();
    std::uint32_t columns = M.get_columns();
    bool square = M.get_is_square();

    cout << "m = " << rows << "\tn = " << columns << "\t square = " << square << endl;

    for(int i=0; i<m; i++) {
        auto temp = M[i];
        for(int j=0; j<n; j++) {
            cout << temp[j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
