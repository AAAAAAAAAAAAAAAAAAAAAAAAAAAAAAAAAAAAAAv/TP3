#ifndef POINT_H
#define POINT_H

#include <iostream>

using std::cout;
using std::ostream;
using std::endl;
template<typename T>
class Point {
public:
    explicit Point(T x, T y);
    Point(const Point<T>& autre);
    ~Point() = default;

    void translater(T x, T y);
    T getX();
    T getY();
    ostream& afficher(ostream& flux) const;
    
protected:
    T x_;
    T y_;
};

template<typename T>
Point<T>::Point(T x, T y) : x_(x), y_(y) { }

template<typename T>
Point<T>::Point(const Point<T>& autre) {
    this->x_ = autre.x_;
    this->y_ = autre.y_;
}

template<typename T>
void Point<T>::translater(T x, T y) {
    this->x_ += x;
    this->y_ += y;
}

template<typename T>
T Point<T>::getX() {
    return this->x_;
}

template<typename T>
T Point<T>::getY() {
    return this->y_;
}

template<typename T>
ostream& Point<T>::afficher(ostream& flux) const {
    flux << "x : " << this->x_ << endl;
    flux << "y : " << this->y_;
    
    return flux;
}

template<typename T>
ostream& operator<<(ostream& flux, const Point<T>& p) {
    return p.afficher(flux);
}

#endif // POINT_H

