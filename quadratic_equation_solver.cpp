#include <iostream>
#include <cmath>
#include <limits>
using namespace std;
float read_user_input_value(string variable)
{
    float float_number;
    cout << "enter the value of "<<variable<<endl;
    cin>>float_number;
    while (cin.fail())
    {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout<< "Invalid Input , try something else "<<endl;
        cin>>float_number;
    }
    return float_number;
}
void solve_eq_case_2(float &discriminant,float &variable_a,float &variable_b,float &variable_c)
{
    float first_solution=(-variable_b+pow(discriminant,0.5))/(2*variable_a);
    float second_solution=(-variable_b-pow(discriminant,0.5))/(2*variable_a);
    cout<<"the first solution is "<<first_solution<<"\n";
    cout<<"the second solution is "<<second_solution<<endl;
}
void solve_eq_case_3(float &variable_a,float &variable_b,float &variable_c)
{
    cout<<"the solution is "<<-variable_b/(2*variable_a)<<endl;
}
void solve_equation(float &variable_a,float &variable_b,float &variable_c)
{
    if (variable_a==0)
    {
        if (variable_b==0)
        {
            if (variable_c==0)
            {
                cout<<"all numbers are solutions to this equation"<<endl;
            }
            else
            {
                cout<<"this equation has no solution"<<endl;
            }
        }
        else
        {
            cout<<-variable_c/variable_b<<endl;
        }
    }
    else
    {
        float discriminant=(variable_b*variable_b)-(4*variable_a*variable_c);
        cout<<"discriminant = "<<discriminant<<endl;
        if (discriminant<0)
        {
            cout<<"this equation has no solution"<<endl;
        }
        else if (discriminant>0)
        {
            solve_eq_case_2(discriminant,variable_a,variable_b,variable_c);
        }
        else if (discriminant==0)
        {
            solve_eq_case_3(variable_a,variable_b,variable_c);
        }
    }
}
int main()
{
    float variable_a=read_user_input_value("a");
    float variable_b=read_user_input_value("b");
    float variable_c=read_user_input_value("c");
    solve_equation(variable_a,variable_b,variable_c);
    system("pause");
    return 0;
}