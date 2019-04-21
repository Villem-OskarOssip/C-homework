#ifndef MYARRAY_H
#define MYARRAY_H

#include <unordered_set>

/*! Dynamic array implementation class */

template<class T>
class MyArray {
public:
    /**
     * Array content pointer
     */
    T *content;

    /**
     * Default constructor
     */
    MyArray() {
        content = new T[0];
        size = 0;
    }

    /**
     * Copy constructor
     * @param a array
     */
    MyArray(const MyArray &a) {
        content = a.content;
        size = a.getSize();
    }

    /**
     * Assignment constructor
     * @param a array
     */

    MyArray &operator=(const MyArray &a) {
        content = a.content;
        size = a.getSize();
        return *this;
    }

    /**
     * Destructor
     */
    ~MyArray() {
        delete[] content;
    }

    /**
     * Returns the size of the array
     */
    unsigned int getSize() const {
        return size;
    }

    /**
     * Adds an element to the end of the array
     * @param element
     */
    void addElement(T element) {
        T *uus = new T[size++];
        for (int i = 0; i < size - 1; ++i) {
            uus[i] = content[i];
        }
        uus[size - 1] = element;
        content = uus;

    }
    /**
     * Returns the element at the specified index
     * @param i index
     * @return element at that index or an error
     */
    T &elementAt(unsigned int i) {
        if (i >= size || i < 0) {
            throw ("Index is out of bounds.");
        }
        return content[i];
    }

protected:
    /**
     * Size of the array
     */
    unsigned int size;
};


#endif
