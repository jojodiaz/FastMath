/// Local Includes
#include "timer.h"
#include "linear_regression.h"

/// Standard Library Includes
#include <iostream>
#include <type_traits>
#include <concepts>

/// Namespaces
using namespace std;

template <Number T> 
T predict_y(T m, T x, T b) { return m * x + b; }

template <Number T>
T predict_x(T m, T y, T b) { return (y - b) / m; }