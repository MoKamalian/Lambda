
/**
 * author: amir kamalian
 * date:   31 dec 2024
 * */
#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <memory>

class Matrix {
private:
    const std::uint32_t rows = 0 ;
    const std::uint32_t columns = 0;
    const bool is_square;
    /** matrix */
    std::unique_ptr<std::unique_ptr<double[]>[]> matrix;

public:
    explicit Matrix(const std::uint32_t m, const std::uint32_t n);
    Matrix(Matrix& matrix);
    Matrix(Matrix&& matrix) noexcept;
    ~Matrix() = default;

    /** getters */

    [[nodiscard]] std::uint32_t get_rows() const;

    [[nodiscard]] std::uint32_t get_columns() const;

    [[nodiscard]] bool get_is_square() const;

    [[nodiscard("matrix values")]] double get_index(std::uint32_t m, std::uint32_t n) const;

    /** operator overloads */

    std::unique_ptr<double[]> operator[](std::uint32_t row) {
        if(row<=this->rows) {
            return std::move(this->matrix[row]);
        }
        /** return value for if outside of bounds */
    }

    Matrix operator+(Matrix& m) noexcept;

    Matrix operator-(Matrix& m) noexcept;

    Matrix operator*(Matrix& m) noexcept;

};


#endif

