#ifndef FORME_H
#define FORME_H

#include "Point.h"

template<typename T>
class Forme : public Point {
public:
    Forme() : Point<T>() {};

    virtual T perimetre() const = 0;
    virtual T surface() const = 0;
protected:
};

#endif // FORME_H