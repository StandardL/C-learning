//This is a exercise programme for Episode 3
#include <iostream>
#include <cmath>
using namespace std;


/*1
int main()
{
    const int inch_to_foot = 12;
    cout << "Enter your height in inch:____\b\b\b\b" ;
    double height,result;
    cin >> height;
    result = height / inch_to_foot;
    cout << "Your height in foot is " << result << endl;
    system("pause");
    return 0;
}
*/


/*2
int main()
{
    const int foot_to_inch = 12;
    const double inch_to_meter = 0.0254;
    const double pound_to_kilo = 2.2;
    unsigned int foot;
    double kilo,inch,meter,pound,BMI,meter2;
    cout << "Enter your height (format:**foot,**inch) and your weight (format:pound).\n";
    cout << "Now enter the foot:_\b";
    cin >> foot;
    cout << "Now enter the inch:__\b\b";
    cin >> inch;
    cout << "Now enter the weight:___\b\b\b";
    cin >> pound;
    cout << "Your height is " << foot << " foot  " << inch << " inch.\n";
    meter = (foot*foot_to_inch)*inch_to_meter;
    kilo = pound*pound_to_kilo;
    meter2 = pow(meter,2);
    BMI = kilo/meter2;
    cout << "Your BMI is " << BMI << endl << "Thanks for your waiting.";
    system("pause");
    return 0;
}
*/


/*3
int main()
{
    const double convert = 60;
    double minutes,seconds,degree;
    double degrees,m_to_d,s_to_d;
    cout << "Enter a latitude in degrees, minutes, and seconds.\n"
         << "First, enter the degrees:__\b\b";
    cin >> degree;
    cout << "Next, enter the minutes of arc:__\b\b";
    cin >> minutes;
    m_to_d = minutes/convert;
    cout << "Finally, enter the seconds of arc:__\b\b";
    cin >> seconds;
    s_to_d = (seconds/convert)/convert;
    degrees = degree + m_to_d + s_to_d;
    cout << degree << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
    cout.setf(ios::showpoint);
    cout.precision(4);
    cout.setf(ios::fixed);
    cout << degrees << " degrees ";
    system ("pause");
    return 0;
}
*/


/*4
int main()
{
    long long seconds;
    const int secperday = 86400;
    const int secperhour = 3600;
    const int secpermin = 60;
    int days,hours,minutes,secondleft;
    cout << "Enter the numbers of seconds: ";
    cin >> seconds;
    days = seconds/secperday;
    hours = (seconds - days*secperday)/secperhour;
    minutes = (seconds - days*secperday- hours*secperhour)/secpermin;
    secondleft = seconds - days*secperday- hours*secperhour - minutes*secpermin;
    cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << secondleft << " seconds";
    system("pause");
    return 0;
}
*/


/*5
int main()
{
    long long worldppl,Chinappl;
    double percent,worldppld,Chinappld;
    cout << "Enter the world's population: " ;
    cin >> worldppl;
    cout << "Enter the population of China: ";
    cin >> Chinappl;
    worldppld = worldppl;
    Chinappld = Chinappl;
    percent = 100*Chinappld/worldppld;
    cout.setf(ios::showpoint);
    cout.precision(5);
    cout.setf(ios::fixed);
    cout << "The population of the China is " << percent << '%' << " of the world population.";
    system("pause");
    return 0;
}
*/


/*6
int main()
{
    double drivekm,gascost,fuelconsumption;
    cout << "Enter your driving mileage (format: km): ";
    cin >> drivekm;
    cout << "Enter your gas consumption in this journal (format: liter): ";
    cin >> gascost;
    fuelconsumption = gascost/drivekm*100;
    cout << "Your car's 100 km fuel consumption is : " << fuelconsumption << endl;
    system ("pause");
    return 0;
}
*/

//7
int main()
{
    double drivekm,litercost,fuelconsumption,mpg,drivemi,galloncost;
    cout << "Enter your driving mileage (format: km): ";
    cin >> drivekm;
    cout << "Enter your gas consumption in this journal (format: liter): ";
    cin >> litercost;
    fuelconsumption = litercost/drivekm*100;
    galloncost = litercost/3.875;
    drivemi = drivekm*0.6214;
    mpg = drivemi/galloncost;
    cout << "Fuel consumption: " << fuelconsumption << " L/100km = " ;
    cout.precision(0);
    cout.setf(ios::fixed);
    cout << mpg << " Mile/Gallon";
    system ("pause");
    return 0;
}