#include <bits/stdtr1c++.h>
using namespace std;

// classes used in this project.
class Room;
class Dish;
class Customer;
class RoomCustomer;
class RestaurantCustomer;
class Employee;
class RoomService;
class SelectEmployee;
class Restaurant;
class Hotel;

class Room
{
public:
    string Room_type;
    int Total_beds;
    double Rent;
    int Room_No;
    int Room_status;

public:
    //  paramaterized constructor.
    Room(string roomType, int noOfBeds, double rent, int roomNo)
    {
        this->Room_type = roomType;
        this->Total_beds = noOfBeds;
        this->Rent = rent;
        this->Room_No = roomNo;
        this->Room_status = 0;
    }
    void setRoom()
    {
        cout << "Enter Room Type, No of beds, Rent, RoomNo\n";
        cin >> this->Room_type;
        cin >> this->Total_beds;
        cin >> this->Rent;
        cin >> this->Room_No;
        Room_status = 0;
    }

    Room()
    {
    }

    bool isVacant(Room r) // r is the object of the class Room 
    {
        if (r.Room_status == 1)
            return false;
        else
            return true;
    }

    void displayDetail()
    {

        cout << "Room Type :: "  << roomType << endl;
        cout << "Number of Beds :: " << this->Total_beds << endl;
        cout << "Rent :: " << this->Rent << endl;
        cout << "Room Number ::" << this->Room_No << endl;
        if (Room_status == 1)
            cout << " Occupied \n";
        else
            cout << "Vacant \n";
    }

    void vacateRoom(int rno) // aa na khabar padi
    {
        int i;
        for (i = 0; i < 6; i++)
        {
            if (this->Room_No == rno)
                this->Room_status = 0;
        }
    }

    void displayAvailable(Room r[6])  // aa na khabar padi 
    {
        int i;
        for (i = 0; i < 6; i++)
        {
            if (r[i].Room_status == 0)
                r[i].displayDetail();
        }
    }
};

class Dish
{
public:
    string dishName;
    double price;
    string dishType;

public:
// parametrized constructor 
    Dish(string dishName, double price, string dishType)
    {
        this->dishName = dishName;
        this->price = price;
        this->dishType = dishType;
    }
    Dish() /// available che ki nahi ae jo ok 
    // check karvu padshe ok 
    {
        // main function ma call karvu padshe ok 
    }
};

class Customer
{
public:
    string custName;
    string custAddress;
    string custID;
    long int custPhone;
    string custEmail;
    string checkInTime;
    int status;

public:
    Customer()
    {
        time_t c = time(0);
        string dt = ctime(&c);
        this->custName = " ";
        this->custAddress = " ";
        this->custID = " ";
        this->custPhone = 0L;
        this->custEmail = " ";
        this->checkInTime = dt;
        status = 0;
    }

    void setData()
    {
        time_t now = time(0);
        string dt = ctime(&now);
        this->checkInTime = dt;
        ofstream customer;
        customer.open("Customer.txt", ios::ate);
        cout << "Enter your Name :\n";
        cin >> this->custName;
        customer << "Name ::" << this->custName << "\n";

        cout << "Enter your Address :\n";
        cin >> this->custAddress;
        customer << "Address ::" << this->custAddress << "\n";

        cout << "Enter your Phone number :\n";
        cin >> this->custPhone;
        customer << "Phone ::" << this->custPhone << "\n";

        cout << "Enter your Email :\n";
        cin >> this->custEmail;
        customer << "Email ::" << this->custEmail << "\n\n";
        customer.close();
    }

    int selectChoice()
    {
        int ch;
        cout << " Hello!\n";
        cout << "Enter \n1. Accomodation \n 2. Dine\n ";
        cin >> ch;
        return ch;
    }

    virtual void printCustomer() // virtual kem karyu che?

    {
        cout << "Name :: " << this->custName << endl;
        cout << "Address :: " << this->custAddress << endl;
        cout << "ID :: " << custID << endl;
        cout << "Phone Number :: " << custPhone << endl;
        cout << "Email :: " << custEmail << endl;
        cout << "Check-In Time ::" << this->checkInTime << endl;
    }
    virtual void viewTotalBill()
    {
    }
    virtual void allocateRoom(Room r1)
    {
    }
    virtual void allocateDish(Dish d1)
    {
    }
    virtual void checkout()
    {
    }
};

class RoomCustomer : public Customer
{
public:
    double rbill;
    Room r;
    int bookStatus;

public:
    void viewTotalbill()
    {
        cout << "Bill =" << rbill;
    }

    void allocateRoom(Room r1)
    {
        this->r = r1;
    }

    void printCustomer()
    {

        Customer ::printCustomer();
        if (r.Room_status == 1 && bookStatus == 1)

        {
            cout << "Check-In Time :: " << checkInTime << endl;
            cout << "Room type :: " << r.Room_type << endl;
            cout << "Room Number :: " << r.Room_No << endl;
        }
    }
    void viewTotalBill()
    {
        this->rbill = r.Rent;
        cout << "Bill :: " << this->rbill << endl;
    }
    void checkOut()
    {
        cout << "Your bill is " << this->rbill << "/-" << endl;
        this->rbill = 0;
        this->r.Room_status = 0;
        cout << "Thank You! Visit Again.\n"
             << endl;
    }
};