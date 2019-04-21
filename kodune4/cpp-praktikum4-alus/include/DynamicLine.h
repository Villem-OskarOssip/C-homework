#ifndef DYNAMICLINE_H
#define DYNAMICLINE_H

/*! DynamicLine implementation */
template<class T>
class DynamicLine {

public:
    T *p1;
    T *p2;
    /**
     * Constructor for creating a dynamic line
     * @param v1 first vertex
     * @param v2 second vertex
     */
	DynamicLine (T *v1, T *v2) {
		// TODO
	}

	/**
     * Copy constructor
     * @param l line
     */
    DynamicLine(const DynamicLine &l) {
        p1 = l.p1;
        p2 = l.p2;
    }
	/**
     * Assignment operator
     * @param l line
     */
    DynamicLine &operator=(const DynamicLine &l) {
        p1 = l.p1;
        p2 = l.p2;
        return *this;
    }
	/**
     * Destructor
     */
    ~DynamicLine() {
    }

};

#endif // DYNAMICLINE_H
