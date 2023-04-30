// #include <iostream>
// #include <math.h>
// #include <vector>

// using namespace std;

// vector<float> linecurrent(float load[], float voltage[])
// {
//     float magload = sqrt((load[0] * load[0]) + (load[1] * load[1]));
//     float angleload = atan(load[1] / load[0]);

//     float magvoltage = sqrt((voltage[0] * voltage[0]) + (voltage[1] * voltage[1]));
//     float anglevoltage = atan(voltage[1] / voltage[0]);

//     float current[2] = {0, 0};
//     current[0] = ((magload / magvoltage) * cos(angleload - anglevoltage));
//     current[1] = ((magload / magvoltage) * sin(angleload - anglevoltage));

//     vector<float> calculatedcurrent;
//     calculatedcurrent.push_back(current[0]);
//     calculatedcurrent.push_back(current[1]);
//     return calculatedcurrent;
// }

// vector<float> nodevoltage(float current[], float impedance[], float voltage[])
// {
//     float magimpedance = sqrt((impedance[0] * impedance[0]) + (impedance[1] * impedance[1]));
//     float angleimpedance = atan(impedance[1] / impedance[0]);

//     float magvoltage = sqrt((voltage[0] * voltage[0]) + (voltage[1] * voltage[1]));
//     float anglevoltage = atan(voltage[1] / voltage[0]);

//     float magcurrent = sqrt((current[0] * current[0]) + (current[1] * current[1]));
//     float anglecurrent = atan(current[1] / current[0]);

//     float voltage1[2] = {0, 0};
//     voltage1[0] = (magvoltage * (cos(anglevoltage)) - magcurrent * magvoltage * (cos(anglecurrent + angleimpedance)));
//     voltage1[1] = (magvoltage * (sin(anglevoltage)) - magcurrent * magvoltage * (sin(anglecurrent + angleimpedance)));

//     vector<float> calculatedvoltage;
//     calculatedvoltage.push_back(voltage[0]);
//     calculatedvoltage.push_back(voltage[1]);
//     return calculatedvoltage;
// }

// int main()
// {
//     float power[2];
//     float impedance[2];
//     float voltage[2];

//     cout << "Enter the real and imaginary value of power of current node respectively" << endl;
//     for (int i = 0; i < 2; i++)
//     {
//         cin >> power[i];
//     }

//     cout << "Enter the real and imaginary value of impedance of line preceding to node respectively" << endl;
//     for (int i = 0; i < 2; i++)
//     {
//         cin >> impedance[i];
//     }

//     cout << "Enter the real and imaginary value of voltage of current node respectively" << endl;
//     for (int i = 0; i < 2; i++)
//     {
//         cin >> voltage[i];
//     }

//     float temp[2];
//     for (int i = 0; i < linecurrent(power, voltage).size(); i++)
//     {
//         temp[i] = linecurrent(power, voltage)[i];
//     }

//     cout << "The value of linecurrent for preceading the node is " << linecurrent(power, voltage)[0] << "+j" << linecurrent(power, voltage)[1] << endl;
//     cout << "The value of nodevoltage for preceading the node is " << nodevoltage(temp, impedance, voltage)[0] << "+j" << nodevoltage(temp, impedance, voltage)[1] << endl;

//     return 0;
// }

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

vector<float> linecurrent(float load[], float voltage[])
{
    float magload = sqrt((load[0] * load[0]) + (load[1] * load[1]));
    float angleload = atan(load[1] / load[0]);

    float magvoltage = sqrt((voltage[0] * voltage[0]) + (voltage[1] * voltage[1]));
    float anglevoltage = atan(voltage[1] / voltage[0]);

    float current[2] = {0, 0};
    current[0] = ((magload / magvoltage) * cos(angleload - anglevoltage));
    current[1] = ((magload / magvoltage) * sin(angleload - anglevoltage));

    vector<float> calculatedcurrent;
    calculatedcurrent.push_back(current[0]);
    calculatedcurrent.push_back(current[1]);
    return calculatedcurrent;
}

vector<float> nodevoltage(float current[], float impedance[], float voltage[])
{
    float magimpedance = sqrt((impedance[0] * impedance[0]) + (impedance[1] * impedance[1]));
    float angleimpedance = atan(impedance[1] / impedance[0]);

    float magvoltage = sqrt((voltage[0] * voltage[0]) + (voltage[1] * voltage[1]));
    float anglevoltage = atan(voltage[1] / voltage[0]);

    float magcurrent = sqrt((current[0] * current[0]) + (current[1] * current[1]));
    float anglecurrent = atan(current[1] / current[0]);

    float voltage1[2] = {0, 0};
    voltage1[0] = (magvoltage * (cos(anglevoltage)) + magcurrent * magimpedance * (cos(anglecurrent + angleimpedance)));
    voltage1[1] = (magvoltage * (sin(anglevoltage)) + magcurrent * magimpedance * (sin(anglecurrent + angleimpedance)));

    vector<float> calculatedvoltage;
    calculatedvoltage.push_back(voltage[0]);
    calculatedvoltage.push_back(voltage[1]);
    return calculatedvoltage;
}

int main()
{
    float power[2];
    float impedance[2];
    float voltage[2];

    cout << "Enter the real and imaginary value of power of current node respectively" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> power[i];
    }

    cout << "Enter the real and imaginary value of impedance of line preceding to node respectively" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> impedance[i];
    }

    cout << "Enter the real and imaginary value of voltage of current node respectively" << endl;
    for (int i = 0; i < 2; i++)
    {
        cin >> voltage[i];
    }

    float temp[2];
    for (int i = 0; i < linecurrent(power, voltage).size(); i++)
    {
        temp[i] = linecurrent(power, voltage)[i];
    }

    cout << "The value of linecurrent for preceading the node is " << linecurrent(power, voltage)[0] << "+j" << linecurrent(power, voltage)[1] << endl;
    cout << "The value of nodevoltage for preceading the node is " << nodevoltage(temp, impedance, voltage)[0] << "+j" << nodevoltage(temp, impedance, voltage)[1] << endl;

    return 0;
}