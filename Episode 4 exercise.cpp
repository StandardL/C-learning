//This is a exercise programme for Episode 4

#include <iostream>
#include <cstring>
#include <vector>
#include <array>
using namespace std;


/*1
int main()
{
    char fname[20],lname[20];
    char grade;
    int age;
    cout << "What's your first name? ";
    cin.getline(fname,20);
    cout << "What's your last name? ";
    cin.getline(lname,20);
    cout << "What letter grade do you deserve? (select in A,B,C) ";
    cin.get(grade).get();
    grade++;
    cout << "What is your age? ";
    cin >> age;
    cout << "Name: " << lname << ", " << fname << endl;
    cout << "Grade: " << grade << endl;
    cout << "Age: " << age << endl;

    system ("pause");
    return 0;
}
*/


/*2
int main()
{
    const int ArSize = 20;
    string name;                                //char name[ArSize];
    string dessert;                             //char dessert[ArSize];

    cout << "Enter your name:\n";
    getline(cin, name);                         //cin.getline(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    getline(cin,dessert);                       //cin.getline(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    system ("pause");
    return 0;
}
*/


/*3
int main()
{
    char fname[20];
    char lname[20];
    char name[40];

    cout << "Enter your first name: ";
    cin.get(fname,20).get();

    cout << "Enter your last name: ";
    cin.getline(lname,20);

    strcpy(name,lname);
    strcat(name," ");
    strcat(name,fname);

    cout << "Here's the information in a single string: " << name ;

    system("pause");
    return 0;
}
//总结：C风格字符组的复制用strcpy，拼接用strcat
*/


/*4
int main()
{
    string fname;
    string lname;
    string name;

    cout << "Enter your first name: ";
    getline(cin,fname);

    cout << "Enter your last name: ";
    getline(cin,lname);

    name += lname;
    name += " ";
    name += fname; 

    cout << "Here's the information in a single string: " << name ;

    system("pause");
    return 0;
}*/


/*5
struct CandyBar
{
    char Brand[20];
    double Weight;
    int Calories;
};
int main()
{
    CandyBar snack = {"Mocha Munch", 2.3, 350};
    cout << snack.Brand << endl;
    cout << snack.Weight << endl;
    cout << snack.Calories << endl;

    system ("pause");
    return 0;
}
*/


/*6
struct CandyBar
{
    char Brand[20];
    double Weight;
    int Calories;
};
int main()
{
    CandyBar snack[3] = {{"Mocha Munch", 2.3, 350}};
    cout << snack[0].Brand << endl;
    cout << snack[0].Weight << endl;
    cout << snack[0].Calories << endl;

    system ("pause");
    return 0;
}
*/


/*7
struct Pizza
{
    char Company[40];
    double weight;
    double diameter;
};
int main()
{
    Pizza William;
    cout << "Enter the Company's name of pizza: ";
    cin.get(William.Company,40).get();
    cout << "The diameter of the pizza: ";
    cin >> William.diameter;
    cout << "The weight of the pizza: ";
    cin >> William.weight;


    cout << "Here is the information of the pizza: \n";
    cout << "Company: " << William.Company << endl;
    cout << "Diameter: " << William.diameter << endl;
    cout << "Weight: " << William.weight << endl;
    
    system ("pause");
    return 0;
}
*/


//8
struct Pizza
{
    char Company[40];
    double weight;
    double diameter;
};
int main()
{
    Pizza *ps = new Pizza;

    cout << "The diameter of the pizza: ";
    cin >> (*ps).diameter;
    cin.get();
    cout << "Enter the Company's name of pizza: ";
    cin.get(ps->Company,40).get();
    cout << "The weight of the pizza: ";
    cin >> (*ps).weight;

    cout << "Here is the information of the pizza: \n";
    cout << "Company: " << (*ps).Company << endl;
    cout << "Diameter: " << (*ps).diameter << endl;
    cout << "Weight: " << (*ps).weight << endl;

    delete ps;
    system("pause");
    return 0;
}