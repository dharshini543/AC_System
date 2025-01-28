#include "AcUnit.h"
#include "Switch.h"
#include "Wire.h"

using namespace std;

int main()
{
    AcUnit ac1(1, 40, 40, 1.5, "Voltas", "white");
    AcUnit ac2(2, 40, 40, 1.5, "Voltas", "white");
    AcUnit ac3(3, 40, 40, 1.5, "Voltas", "white");
    AcUnit ac4(4, 40, 40, 1.5, "Voltas", "white");
    AcUnit ac5(5, 40, 40, 1.5, "Voltas", "white");
    AcUnit ac6(6, 40, 40, 1.5, "Voltas", "white");
    AcUnit ac7(7, 40, 40, 1.5, "Voltas", "white");

    Switch s1(1, 10, 5, 50, "philips", "white", false);
    Switch s2(2, 10, 5, 50, "philips", "white", true);
    Switch s3(3, 10, 5, 50, "philips", "white", false);
    Switch s4(4, 10, 5, 50, "philips", "white", true);
    Switch s5(5, 10, 5, 50, "philips", "white", false);
    Switch s6(6, 10, 5, 50, "philips", "white", true);
    Switch s7(7, 10, 5, 50, "philips", "white", false);

    Wire wire(100, 2, 1000, "Black", "Finolex");

    return 0;
}
