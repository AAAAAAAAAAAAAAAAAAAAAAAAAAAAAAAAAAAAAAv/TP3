#ifndef POINT_H
#define POINT_H

template<typename T>
class Point {
public:
    explicit Point(T x, T y);
    ~Point() = default;

protected:
    T x_;
    T y_;
};

template<typename T>
Point<T>::Point(T x, T y) : x_(x), y_(y) { }

#endif // POINT_H

