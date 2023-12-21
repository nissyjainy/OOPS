#include <bits/stdc++.h>
using namespace std;
class user
{

public:
    string UserID;
    string username;
    string password;
    string userrole;

    void login()
    {

        cout << "Enter the username " << endl;
        cin >> username;
        cout << "Enter your password " << endl;
        cin >> password;
        cout << "You are logged in successfully" << endl;
    }
    void update()
    {

        string a;
        cout << "Update your ID " << endl;
        cin >> a;
        cout << "Your updated ID is " << a << endl;
        string b;
        cout << "Update your Name " << endl;
        cin >> b;
        cout << "Your updated name is " << b << endl;
        string c;
        cout << "Update your password " << endl;
        cin >> c;
        cout << "Your updated password is " << c << endl;
        string d;
        cout << "Update your userrole " << endl;
        cin >> d;
        cout << "Your updated userrole is " << d << endl;
    }
};
class employee : public user
{
public:
    string department;
    string contact;
    string nationality;
    string qualification;
    int salary = 10000;
    int permitted_days = 10;
    int updated = 0;
    int leave = 0;
    int leave_days;
    void apply_leave()
    {
        cout << "Enter the user ID" << endl;
        cin >> UserID;

        // int leave_days;
        cout << "Enter the number of days for which you want the leave" << endl;
        cin >> leave_days;
    }
    void checkstatus()
    {
        cout << "Enter the user ID" << endl;
        cin >> UserID;
        if (leave_days < permitted_days)
        {
            cout << "Your leave has been granted " << endl;
            leave++;
        }
        else
        {
            cout << "Sorry no leave for you " << endl;
        }
    }
    void payslip()
    {
        cout << "Enter the user ID" << endl;
        cin >> UserID;
        if (leave_days > 10)
            cout << "The pay of the employee is " << salary * (30) << endl;
        else
        {
            cout << "The pay of the employee is " << salary * (30 - leave_days) << endl;
        }
    }
};
class administrator : public user
{
public:
    string new_username;
    string new_userID;
    string new_password;
    string new_role;
    void add_employees()
    {

        cout << "Enter the name of the employee " << endl;
        cin >> new_username;
        cout << "Enter the UserId of the employee " << endl;
        cin >> new_userID;
        cout << "Enter the password of the employee " << endl;
        cin >> new_password;
        cout << "Enter the role of the employee " << endl;
        cin >> new_role;
    }
    void view()
    {
        cout << "The name of the employee is " << new_username << endl;
        cout << "The UserID of the employee is " << new_userID << endl;
        cout << "The password for the employee is " << new_password << endl;
        cout << "the role of the employee is " << new_role << endl;
    }
    void new_employee()
    {
        cout << "Enter the credentials of the new user" << endl;
        string q;
        cout << "Enter the name of the employee" << endl;
        cin >> q;
        string p;
        cout << "Enter the password for the employee " << endl;
        cin >> p;
        cout << "The new employee has been registered successfully" << endl;
    }
    void update()
    {
        string a;
        cout << "Update your ID" << endl;
        cin >> a;
        cout << "Your updated ID is" << a << endl;
        string b;
        cout << "Update your Name" << endl;
        cin >> b;
        cout << "Your updated name is" << b << endl;
        string c;
        cout << "Update your password" << endl;
        cin >> c;
        cout << "Your updated password is" << c << endl;
        string d;
        cout << "Update your userrole" << endl;
        cin >> d;
        cout << "Your updated userrole is" << d << endl;
    }
};
class HOD : public employee
{
public:
    // view reports
    // edit employees
    // view employees
    string new_username;
    string new_userID;
    string new_password;
    string new_role;
    void add_employees()
    {

        cout << "Enter the name of the employee " << endl;
        cin >> new_username;
        cout << "Enter the UserId of the employee " << endl;
        cin >> new_userID;
        cout << "Enter the password of the employee " << endl;
        cin >> new_password;
        cout << "Enter the role of the employee " << endl;
        cin >> new_role;
    }
    void view()
    {
        cout << "The name of the employee is " << new_username << endl;
        cout << "The UserID of the employee is " << new_userID << endl;
        cout << "The password for the employee is " << new_password << endl;
        cout << "the role of the employee is " << new_role << endl;
    }
    void view_report()
    {
        if (updated > 0 && leave > 0)
        {
            cout << "Your leave has been granted and the user details have been updated" << endl;
        }
        else if (updated == 0 && leave > 0)

        {
            cout << "Your leave has been granted but the details are not updated" << endl;
        }
        else if (updated > 0 && leave == 0)
        {
            cout << "The user details are updated successfully but the leave is not granted" << endl;
        }
        else
        {
            cout << "Neither is leave is granted nor the details are updated" << endl;
        }
    }
    void update()
    {
        string a;
        cout << "Update your ID " << endl;
        cin >> a;
        cout << "Your updated ID is " << a << endl;
        string b;
        cout << "Update your Name " << endl;
        cin >> b;
        cout << "Your updated name is " << b << endl;
        string c;
        cout << "Update your password " << endl;
        cin >> c;
        cout << "Your updated password is " << c << endl;
        string d;
        cout << "Update your userrole" << endl;
        cin >> d;
        cout << "Your updated userrole is " << d << endl;
        updated++;
    }
};
class Admin : public employee
{
public:
    string new_username;
    string new_userID;
    string new_password;
    string new_role;
    void add_employees()
    {

        cout << "Enter the name of the employee " << endl;
        cin >> new_username;
        cout << "Enter the UserId of the employee " << endl;
        cin >> new_userID;
        cout << "Enter the password of the employee " << endl;
        cin >> new_password;
        cout << "Enter the role of the employee " << endl;
        cin >> new_role;
    }
    void view()
    {
        cout << "The name of the employee is" << new_username << endl;
        cout << "The UserID of the employee is" << new_userID << endl;
        cout << "The password for the employee is" << new_password << endl;
        cout << "the role of the employee is" << new_role << endl;
    }
    void view_report()
    {
        if (updated > 0 && leave > 0)
        {
            cout << "Your leave has been granted and the user details have been updated" << endl;
        }
        else if (updated == 0 && leave > 0)

        {
            cout << "Your leave has been granted but the details are not updated" << endl;
        }
        else if (updated > 0 && leave == 0)
        {
            cout << "The user details are updated successfully but the leave is not granted" << endl;
        }
        else
        {
            cout << "Neither is leave is granted nor the details are updated" << endl;
        }
    }
    void update()
    {
        string a;
        cout << "Update your ID" << endl;
        cin >> a;
        cout << "Your updated ID is " << a << endl;
        string b;
        cout << "Update your Name" << endl;
        cin >> b;
        cout << "Your updated name is " << b << endl;
        string c;
        cout << "Update your password" << endl;
        cin >> c;
        cout << "Your updated password is " << c << endl;
        string d;
        cout << "Update your userrole" << endl;
        cin >> d;
        cout << "Your updated userrole is " << d << endl;
        updated++;
    }
};
int main()
{
    user u1;
    employee e1;
    administrator a1;
    Admin adm;
    cout << "Enter the details for the Login" << endl;
    u1.login();
    cout << "Enter the details for the updated user" << endl;
    u1.update();
    cout << "Enter the details for the leave application purpose" << endl;
    e1.apply_leave();
    cout << "Check the status of the leave application" << endl;
    e1.checkstatus();
    cout << "Check the payment of the employee" << endl;
    e1.payslip();
    cout << "Add the deatils of the new employees" << endl;
    a1.add_employees();
    cout << "New user login" << endl;
    a1.new_employee();
    cout << "For official purpose only" << endl;
    adm.view();
    adm.update();
    adm.view_report();
}

