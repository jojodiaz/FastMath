#include <type_traits>

template<typename T>
concept Number = std::is_arithmetic<T>::value;

template<Number T>
T predict_y(T m, T x, T b);

template<Number T>
T predict_x(T m, T y, T b);