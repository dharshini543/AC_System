#include "Wire.h"
#include "Switch.h"
#include<iostream>

Wire::Wire(float length, float thickness, float price, string colour, string brand)
{
    m_length = length;
    m_thickness = thickness;
    m_price = price;
    m_colour = colour;
    m_brand = brand;

    displayWireDetails();
}

void Wire::displayWireDetails()
{
    cout << endl;
    cout << "------Wire Details-------" << endl;
    cout << "Length :" << m_length << "m" << endl;
    cout << "Thickness :" << m_thickness << "cm" << endl;
    cout << "Price :" << m_price << endl;
    cout << "Colour :" << m_colour << endl;
    cout << "Brand :" << m_brand << endl;

}


