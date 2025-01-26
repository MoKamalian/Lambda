
/**
 * author: amir kamalian
 * date:   31 dec 2024
 * */

#include "../inc/lambda.hpp"
#include "../inc/matrix.hpp"

/** Constructor:
 * @param m number of rows
 * @param n number of columns
 * By default an m x n matrix object is initialized as a zero matrix if given no input values.
 */
Matrix::Matrix(const std::uint32_t m, const std::uint32_t n) : rows(m), columns(n), is_square(m == n) {

    matrix = std::make_unique<std::unique_ptr<double[]>[]>(m);
    for(int i = 0; i<m; i++) {

        std::unique_ptr<double[]> temp_ptr = std::make_unique<double[]>(n);
        for(int j = 0; j<n; j++) {

            temp_ptr[j] = 0;

        }
        matrix[i] = move(temp_ptr);
    }

}

/** Copy Constructor */
Matrix::Matrix(Matrix& matrix): rows(matrix.get_rows()), columns(matrix.get_columns()),
                                is_square(matrix.get_is_square()) {

}

/** getters */

std::uint32_t Matrix::get_rows() const {
    return this->rows;
}

std::uint32_t Matrix::get_columns() const {
    return this->columns;
}

bool Matrix::get_is_square() const {
    return this->is_square;
}

/** retrieve matrix values */
double Matrix::get_index(std::uint32_t m, std::uint32_t n) const {
    if(m<=this->rows and n<=this->columns) {
        return matrix[m][n];
    }
    /** return value for if outside of bounds */
}




