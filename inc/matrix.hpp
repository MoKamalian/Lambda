
/**
 * author: amir kamalian
 * date:   31 dec 2024
 * */
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>

template<typename Values>
class Matrix {
private:
    std::uint32_t rows;
    std::uint32_t columns;
    std::vector<Values> matrix;

public:
    explicit Matrix(const std::uint32_t r, const std::uint32_t c);
    Matrix(Matrix& matrix);
    Matrix(Matrix&& matrix) noexcept;



};





#endif

