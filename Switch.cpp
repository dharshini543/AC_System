#include "Switch.h"
#include<iostream>

Switch::Switch(int switchNo,float length,float width,float price,string brand,string colour,bool isOn)
{
    m_switchNo = switchNo;
    m_length = length;
    m_width = width;
    m_price = price;
    m_brand = brand;
    m_colour = colour;
    m_isOn =isOn;

    displaySwitchDetails();
}

void Switch::turnOnSwitch()
{
    m_isOn = true;
}

void Switch::turnOffSwitch()
{
    m_isOn = false;
}

void Switch::displaySwitchDetails()
{
    cout << endl;

    if(m_switchNo == 1)
    {
        cout << "-----Switch Details-----" << endl;
    }

    cout << "SwitchNo :" << m_switchNo << endl;
    cout << "Length :" << m_length << "cm" << endl;
    cout << "width :" << m_width << "cm" << endl;
    cout << "Price :" << m_price << endl;
    cout << "Brand :" << m_brand << endl;
    cout << "Colour :" << m_colour << endl;
    cout << "State :" << m_isOn << endl;
}
