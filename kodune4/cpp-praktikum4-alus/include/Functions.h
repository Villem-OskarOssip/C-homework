#ifndef SOLVEEQUATION_H
#define SOLVEEQUATION_H

/*! Functions class */

/**
 * Swaps the values of the parameters
 * @param x
 * @param y
 */
template<class T>
void swap_ref (T &x, T &y){
  T t = x;
  x = y;
  y = t;
}

/**
 * Swaps the values of the parameters
 * @param x
 * @param y
 */
template<class T>
void swap_ptr (T *x, T *y){
    T t = *x;
    *x = *y;
    *y = t;
}

bool solve (double a, double b, double c, double &x1, double &x2);

#endif
