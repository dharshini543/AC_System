#ifndef SWITCH_H
#define SWITCH_H

#include <string>

using namespace std;

class Switch
{
private:
    int m_switchNo;
    float m_length;
    float m_width;
    float m_price;
    string m_brand;
    string m_colour;
    bool m_isOn;

public:
    Switch();
    Switch(int switchNo, float length, float width, float price, string brand, string colour, bool isOn);
    void turnOnSwitch();
    void turnOffSwitch();
    void displaySwitchDetails();
};

#endif // SWITCH_H
