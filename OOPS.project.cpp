#include <bits/stdc++.h>
using namespace std;

unordered_map<int, double> mp; // room number and price
unordered_map<string, int> fp;
vector<string> food_items = {"Butter_Chicken", "Biryani", "Paneer_Tikka", "Masala_Dosa", "Chicken_Tikka_Masala",
                             "Palak_Paneer", "Aloo_Paratha"};

void set_price()
{
    for (int i = 0; i < 7; i++)
    {
        fp[food_items[i]] = 100 + 50 * i;
    }
}
void foodmenu()
{
    for (int i = 0; i < food_items.size(); i++)
    {
        cout << "Food_Item " << (i + 1) << endl;
        cout << food_items[i] << " Price: " << fp[food_items[i]] << endl;
    }
}
class customer
{
private:
    string name;
    string phone_no;
    string address;

public:
    customer(string name = " ", string phone_no = " ", string address = " ")
    {
        this->name = name;
        this->phone_no = phone_no;
        this->address = address;
    }
    void set_name(string x)
    {
        name = x;
    }
    void set_phone(string y)
    {
        phone_no = y;
    }
    void set_add(string z)
    {
        address = z;
    }
    string ret_name()
    {
        return name;
    }
    string ret_phone()
    {
        return phone_no;
    }
    string ret_address()
    {
        return address;
    }

    void register1()
    {
        cout << "enter the name" << endl;
        cin >> name;
        cout << "enter your phone number" << endl;
        cin >> phone_no;
        cout << "enter your address" << endl;
        cin >> address;

        fstream f1;
        f1.open("user.txt", ios::out | ios::app);
        f1 << name << " " << phone_no << " " << address << " " << endl;
    }
    void get_details()
    {
        cout << "enter the name" << endl;
        string s;
        cin >> s;
        fstream f1;
        f1.open("hotel_data.txt", ios::in);
        string rt, gn, ga, gp;
        int rn;
        while (f1 >> rn >> gn >> ga >> gp >> rt)
        {
            if (gn == s)
            {
                cout << "Name: " << gn << endl;
                cout << "RoomNo: " << rn << endl;
                cout << "RoomType: " << rt << endl;
                cout << "Adress: " << ga << endl;
                cout << "Phone: " << gp << endl;
                cout << "Your bill for room is " << mp[rn] << endl;
            }
        }
        f1.close();
    }
    void order_food()
    {
        cout << "enter the room no" << endl;
        int rn;
        cin >> rn;
        set_price();
        foodmenu();
        cout << "enter the number of items you want to order" << endl;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cout << "Enter the food item" << endl;
            string s;
            cin >> s;

            mp[rn] = mp[rn] + fp[s];
        }
        cout << "Ordered Successfully" << endl;
    }
};
class Hotel
{
private:
    int RoomNum;
    string GuestName;
    string GuestAddress;
    string GuestPhone;
    string roomType; // Use a character to store room type (A/C,Non A/C,Single Bed,Double Bed).
    double roomRate;

public:
    void set_guestName(string j)
    {
        GuestName = j;
    }
    void set_guestAdress(string k)
    {
        GuestAddress = k;
    }
    void set_guestphone(string l)
    {
        GuestPhone = l;
    }
    void set_roomtype(string c)
    {
        roomType = c;
    }
    void set_rate(double h)
    {
        roomRate = h;
    }
    string ret_guestname()
    {
        return GuestName;
    }
    string ret_guestAdress()
    {
        return GuestAddress;
    }
    string ret_guestPhone()
    {
        return GuestPhone;
    }
    void addBooking();      // for room booking
    void displayBookings(); // for dispalaying the booking
    void editBooking();     // for editing the booking
    void deleteBooking();   // for deleting the booking
    void edit_foodmenu();   // for ordering the lunch or dinner or breakfast
};
void Hotel::edit_foodmenu()
{
    cout << "enter the name of dish you want to add" << endl;
    string food;
    cin >> food;
    food_items.push_back(food);
    cout << "enter the price of the dish" << endl;
    int p;
    cin >> p;
    fp[food] = p;
}
void Hotel::addBooking()
{

    fstream f1;
    f1.open("user.txt", ios::in);
    int k;
    int i = 1;
    string s;
    string gn, gp, ga;
    while (f1 >> gn >> gp >> ga)
    {
        cout << "Guest"
             << " " << i << endl;
        cout << "Name: " << gn << endl;
        cout << "Phone: " << gp << endl;
        cout << "Adress: " << ga << endl;
        i++;
    }
    f1.close();
    cout << "enter the guest name for which you want to book room" << endl;
    cin >> s;
    fstream f2;
    f2.open("user.txt", ios::in);
    while (f2 >> GuestName >> GuestPhone >> GuestAddress)
    {
        if (GuestName == s)
        {
            break;
        }
    }

    f2.close();
    int addRoom;
    cout << "Enter Room Number: ";
    cin >> addRoom;

    if (addRoom < 1 || addRoom > 50)
    {
        cout << "Invalid room number. Please choose a room between 1 and 50." << endl;
        return;
    }

    bool roomAlreadyBooked = false;
    fstream f3;
    f3.open("hotel_data.txt", ios::in);
    int rn;
    string rt;
    while (f3 >> rn >> gn >> ga >> gp >> rt)
    {
        if (addRoom == rn)
        {
            roomAlreadyBooked = true;
            break;
        }
    }
    f3.close();

    if (roomAlreadyBooked)
    {
        cout << "Room is Already Booked" << endl;
        return; // Don't proceed with the booking.
    }

    RoomNum = addRoom;

    cout << "Select the type of room (1. Ac, 2. Non-Ac, 3. Single Bed, 4. Double Bed): ";
    int roomTypeChoice;
    cin >> roomTypeChoice;

    switch (roomTypeChoice)
    {
    case 1:
        roomType = "A"; // Ac
        break;
    case 2:
        roomType = "N"; // Non-Ac
        break;
    case 3:
        roomType = "S"; // Single Bed
        break;
    case 4:
        roomType = "D"; // Double Bed
        break;
    default:
        roomType = "N"; // Default to Non-Ac if an invalid option is selected.
        break;
    }

    // storing the data in the txt file.
    fstream hotelFile;
    hotelFile.open("hotel_data.txt", ios::app | ios::out);
    hotelFile << RoomNum << ' '
              << GuestName << ' '
              << GuestAddress << ' '
              << GuestPhone << ' '
              << roomType << std::endl;

    hotelFile.close();
    cout << "Booking added successfully!" << endl;
    int p;
    if (roomType == "A")
    {
        p = 1;
    }
    if (roomType == "N")
    {
        p = 2;
    }
    if (roomType == "C")
    {
        p = 3;
    }
    if (roomType == "D")
    {
        p = 4;
    }
    // Calculate the room rate based on the room type.
    double roomRate = 0.0;
    switch (p)
    {
    case 1:
        roomRate = 100.0; // rate for Ac rooms.
        break;
    case 2:
        roomRate = 80.0; // rate for Non-Ac rooms.
        break;
    case 3:
        roomRate = 70.0; // rate for Single Bed rooms.
        break;
    case 4:
        roomRate = 90.0; // rate for Double Bed rooms.
        break;
    default:
        cout << "Invalid room type. Cannot calculate the total cost." << endl;
        return; // if the room type is invalid.
    }

    int numberOfDays; // number of days you want to live
    cout << "Enter the number of days: ";
    cin >> numberOfDays;

    if (numberOfDays <= 0)
    {
        cout << "Invalid number of days. Please enter a positive value." << endl;
        return; // if the number of days is invalid.
    }

    double totalCost = roomRate * numberOfDays;
    mp[addRoom] = totalCost;
    cout << "Please Pay the total cost of Room: $" << totalCost << endl;
}

void Hotel::displayBookings()
{
    fstream hotelFile;
    hotelFile.open("hotel_data.txt", ios::in);
    if (!hotelFile.is_open())
    {
        cout << "Error opening the data file." << endl;
        return;
    }
    int rn;
    string gn, ga, gp;
    string rt;
    // cout << "Room Number\tGuest Name\tGuest Address\tGuest Phone\tRoom Type" << endl;
    int i = 0;
    while (hotelFile >> rn >> gn >> ga >> gp >> rt)
    {
        cout << "Booking " << i << endl;
        cout << "Room Number: " << rn << endl;
        cout << "Guest Name: " << gn << endl;
        cout << "Guest Address: " << ga << endl;
        cout << "Guest Phone: " << gp << endl;
        if (rt == "A")
        {
            cout << "Room Type: AC" << endl;
        }
        else if (rt == "N")
        {
            cout << "Room Type: NON-AC" << endl;
        }
        else if (rt == "S")
        {
            cout << "Room Type: Single bed" << endl;
        }
        else if (rt == "D")
        {
            cout << "Room Type: Double Bed" << endl;
        }
        i++;
    }
    hotelFile.close();
}

void Hotel::editBooking()
{
    // ifstream hotelFile("hotel_data.txt");
    fstream hotelFile, tempfile;
    hotelFile.open("hotel_data.txt", ios::in);
    tempfile.open("temp.txt", ios::out | ios::app);
    if (!hotelFile.is_open())
    {
        cerr << "Error opening the data file." << endl;
        return;
    }

    int roomToEdit;
    cout << "Enter the room number to edit: ";
    cin >> roomToEdit;

    // char newGuestName[50], newGuestAddress[100], newGuestPhone[12];
    // char newRoomType;
    string gn, ga, gp, rt;
    int rn;
    bool found = false;

    while (hotelFile >> rn >> gn >> ga >> gp >> rt)
    {

        if (rn == roomToEdit)
        {

            cout << "Enter New Guest Name: ";

            cin >> gn;

            cout << "Enter New Guest Address: ";

            cin >> ga;

            cout << "Enter New Guest Phone: ";

            cin >> gp;

            cout << "Enter New Room Type (A/N/S/D): ";
            cin >> rt;

            tempfile << rn << " "
                     << gn << " "
                     << ga << " "
                     << gp << " "
                     << rt << endl;

            cout << "Booking updated successfully!" << endl;
            found = true;
        }
        else
        {
            tempfile << rn << " "
                     << gn << " "
                     << ga << " "
                     << gp << " "
                     << rt << endl;
        }
    }

    if (!found)
    {
        cout << "Booking not found." << endl;
    }

    hotelFile.close();
    tempfile.close();

    remove("hotel_data.txt");
    rename("temp.txt", "hotel_data.txt");
}

void Hotel::deleteBooking()
{
    fstream hotelFile, tempfile;
    hotelFile.open("hotel_data.txt", ios::in);
    tempfile.open("temp.txt", ios::out | ios::app);
    if (!hotelFile.is_open())
    {
        cerr << "Error opening the data file." << endl;
        return;
    }

    int roomToDelete;
    cout << "Enter the room number to delete: ";
    cin >> roomToDelete;

    bool found = false;

    string gn, ga, gp, rt;
    int rn;
    while (hotelFile >> rn >> gn >> ga >> gp >> rt)
    {

        if (rn == roomToDelete)
        {
            found = true;
            cout << "Booking deleted successfully!" << endl;
        }
        else
        {
            tempfile << rn << " "
                     << gn << " "
                     << ga << " "
                     << gp << " "
                     << rt << endl;
        }
    }

    if (!found)
    {
        cout << "Booking not found." << endl;
    }

    hotelFile.close();
    tempfile.close();

    remove("hotel_data.txt");
    rename("temp.txt", "hotel_data.txt");
}

int main()
{
    while (1)
    {
        cout << "Please Enter your Choice" << endl;
        cout << "1) Customer" << endl;
        cout << "2)Admin" << endl;
        cout << "3)EXIT" << endl;
        int choice;
        cin >> choice;
        if (choice == 1)
        {
            cout << "Welcome to our hotel" << endl;
            cout << "Please enter your choice" << endl;
            cout << "1)Register" << endl;
            cout << "2)Room Details and Bill" << endl;
            cout << "3)Order Food" << endl;
            int k;
            cin >> k;
            customer c1;
            switch (k)
            {
            case 1:
                c1.register1();
                break;
            case 2:
                c1.get_details();
                break;
            case 3:
                c1.order_food();
                break;
            }
        }
        else if (choice == 2)
        {
            cout << "Please enter your choice" << endl;
            cout << "1)Add booking" << endl;
            cout << "2)Delete Booking" << endl;
            cout << "3)Edit Booking" << endl;
            cout << "4)Display all bookings" << endl;
            cout << "5)Edit food" << endl;
            Hotel h1;
            int k;
            cin >> k;
            switch (k)
            {
            case 1:
                h1.addBooking();
                break;
            case 2:
                h1.deleteBooking();
                break;
            case 3:
                h1.editBooking();
                break;
            case 4:
                h1.displayBookings();
                break;
            case 5:
                h1.edit_foodmenu();
                break;
            }
        }
        else if (choice == 3)
        {
            break;
        }
        else
        {
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}