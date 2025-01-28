#ifndef ACUNIT_H
#define ACUNIT_H

#include <string>
using namespace std;

class AcUnit
{
private:
    int   m_ACnum;
    float m_length;
    float m_width;
    double m_capacity;
    string m_Brand;
    string m_colour;

public:
    AcUnit(int ACnum, float length, float width, double capacity, string Brand, string colour);
    void turnOnAC();
    void turnOffAC();
    void displayACdetails();
};

#endif // ACUNIT_H
