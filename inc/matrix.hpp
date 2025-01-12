
/**
 * author: amir kamalian
 * date:   31 dec 2024
 * */
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>

class Matrix {
private:
    const u_int32_t rows;
    const u_int32_t columns;
    const bool is_square;
public:
    explicit Matrix(const u_int32_t m, const u_int32_t n);
    Matrix(Matrix &matrix);
    ~Matrix() = default;


    /** getters */

    [[nodiscard]] u_int32_t get_rows() const;

    [[nodiscard]] u_int32_t get_columns() const;

    [[nodiscard]] bool get_is_square() const;

};


#endif

