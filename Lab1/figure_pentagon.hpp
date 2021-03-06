#ifndef PENTAGON_H
#define PENTAGON_H

#include <cstdlib>
#include <iostream>
#include "figure.hpp"

class Pentagon : Figure {
    public:
        Pentagon();
        Pentagon(std::istream &is);
        Pentagon(const Pentagon& orig);

        double Square() override;
        void Print() override;

        friend std::ostream& operator<<(std::ostream& os, const Pentagon& obj);
        friend std::istream& operator>>(std::istream& is, Pentagon& obj);
        Pentagon& operator=(const Pentagon& right);

        virtual ~Pentagon();

    private:
        double side;
};
#endif
