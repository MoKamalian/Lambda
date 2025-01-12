
/**
 * author: amir kamalian
 * date:   31 dec 2024
 * */

#include "../inc/lambda.hpp"
#include "../inc/matrix.hpp"

/** Constructor */
Matrix::Matrix(const u_int32_t m, const u_int32_t n) : rows(m), columns(n), is_square(m == n) {

}

/** Copy Constructor */
Matrix::Matrix(Matrix& matrix): rows(matrix.get_rows()), columns(matrix.get_columns()),
                                is_square(matrix.get_is_square()) {

}

/** getters */

u_int32_t Matrix::get_rows() const {
    return this->rows;
}

u_int32_t Matrix::get_columns() const {
    return this->columns;
}

bool Matrix::get_is_square() const {
    return this->is_square;
}


