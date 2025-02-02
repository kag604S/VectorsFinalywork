#ifndef VECTOR_H
#define VECTOR_H

class Vector {
private:
    double x, y;

public:
    Vector();
    Vector(double x, double y);


    void setX(double value);
    void setY(double value);
    double getX() const;
    double getY() const;

    Vector operator+(const Vector& other) const;
    Vector operator-(const Vector& other) const;
    Vector operator*(double scalar) const;

    double length() const;

};

#endif
