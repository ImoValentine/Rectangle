#ifndef RECTANGLE_H_H
#define RECTANGLE_H_H
#include <isostrean>

using namespace std;

class

{
    public:
        Rectangle();//default constructor
        Rectangle (double w, double l); //member variables
                                        //overloaded constructor
        ~Rectangle()//destructor
        void setWidth(double w); //mutator- changes member variable; - void return type
        void setLenght(double l);//mutator

        double getWidth() const;//accessor- accesses member variable
        double getLength() const;//accessor
        double getArea() const;//accessor

    private:
};

#endif // RECTANGLE_H_H
