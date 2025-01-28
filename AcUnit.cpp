#include "AcUnit.h"
#include<iostream>

AcUnit::AcUnit(int ACnum, float length, float width,double capacity,string Brand,string colour)
{
    m_ACnum = ACnum;
    m_length = length;
    m_width = width;
    m_capacity = capacity;
    m_Brand = Brand;
    m_colour = colour;

    displayACdetails();
}

void AcUnit::displayACdetails()
{
    cout << endl;
    if(m_ACnum == 1)
    {
        cout << "-----AC Details--------" << endl;
    }
    cout  << "ACnum :" << m_ACnum << endl;
    cout << "Length :" << m_length << "cm" << endl;
    cout << "width :" << m_width << "cm" << endl;
    cout << "Capacity :" << m_capacity << "Tons" << endl;
    cout << "Brand :" << m_Brand << endl;
    cout << "Colour :" << m_colour << endl;
}
