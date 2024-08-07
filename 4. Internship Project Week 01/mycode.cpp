#include <iostream>
#include <regex>
#include <vector>
#include <string>
using namespace std;

bool isValid(const string& s) {
    const regex pattern("(0|91)?[7-9][0-9]{9}");
    return regex_match(s, pattern);
}

struct Booking {
    string name;
    string address;
    string phone;
    string area;
};

vector<Booking> bookings;

void Book() {
    cout << "\n\t\t\t*******Book a Room*******\t\t\t\n";
    Booking booking;
    
    cout << "Enter the customer's Name: ";
    cin.ignore();
    getline(cin, booking.name);
    
    cout << "Enter the customer's Address: ";
    getline(cin, booking.address);
    
    cout << "Enter the customer's Mobile No.: ";
    cin >> booking.phone;
    
    if (isValid(booking.phone)) {
        cout << "Your Mobile No. is Verified..\n";
    } else {
        cout << "Invalid Mobile No. Please Enter a valid Mobile No.\n";
        cout << "Enter the customer's Mobile No.: ";
        cin >> booking.phone;
    }
    
    cout << "In which Area do you want to book your room: ";
    cin >> booking.area;

    bookings.push_back(booking);

    cout << "\n\t\t\tCongratulations!!...Your room has been Booked\t\t\t\n";
    cout << endl;
}

void setHost() {
    cout << "\n\t\t\t*******Set the host*******\t\t\t\n";
    char Name[50];
    cout << "Host's Name To Manage the room: ";
    cin.ignore();
    cin.getline(Name, 50);
    cout << endl;
}

void startTime() {
    cout << "\n\t\t\t*******Set the start time*******\t\t\t\n";
    char Time[50];
    cout << "Set the start time to start the work: ";
    cin.ignore();
    cin.getline(Time, 50);
    cout << "At " << Time << " Everyone should start their work\n";
    
    char Time1[50];
    cout << "Lunch break: ";
    cin.ignore();
    cin.getline(Time1, 50);
    cout << "At " << Time1 << " you Can Lunch in Lunch Area\n";
    cout << endl;
}

void endTime() {
    cout << "\n\t\t\t*******Set the end time*******\t\t\t\n";
    char Time[50];
    cout << "Set the end time to stop the work: ";
    cin.ignore();
    cin.getline(Time, 50);
    cout << "At " << Time << " Relax!!";
    cout << endl;
}

void capability() {
    cout << "\n\t\t\t*******Set the chair booking capability*******\t\t\t\n";
    int n1, n2, n3;
    cout << "Enter chair capability in Workspace Area: ";
    cin >> n1;
    cout << "There are total " << n1 << " employees so, Everyone should be comfortable in Workspace Area\n";
    cout << "Enter chair capability in Meeting Area: ";
    cin >> n2;
    cout << n2 << " Number of people can meet in Meeting Area\n";
    cout << "Enter chair capability in Lab Area: ";
    cin >> n3;
    cout << n3 << " employees perform experiments in Lab Area\n";
    cout << endl;
}

void roomNo() {
    cout << "\n\t\t\t*******Define the room number*******\t\t\t\n";
    cout << "According to Your All requirements\n";
    cout << "Room is divided into two Compartments: \n";
    cout << "\n\t\t\t---------------FIRST COMPARTMENT---------------\t\t\t\n";
    cout << "As you Enter in the room, There is stuff Area in Room No.101\n";
    cout << "There is Kitchen Area after the stuff and Room No. of Kitchen is 102\n";
    cout << "There is coffee Room after the Kitchen Room and Room No. of coffee Area is 103\n";
    cout << "At the back side There is a small lean Area\n";
    cout << "So finally..\n";
    cout << "Room No. of stuff Area: 101\n";
    cout << "Room No. of Kitchen Area: 102\n";
    cout << "Room No. of coffee Area: 103\n";
    cout << "\n\t\t\t---------------SECOND COMPARTMENT---------------\t\t\t\n";
    cout << "Room No. of Lab Area: 201\n";
    cout << "Room No. of Meeting Area: 202\n";
    cout << "Room No. of Workspace Area: 203\n";
}

void displayBookings() {
    cout << "\n\t\t\t*******Booked Rooms List*******\t\t\t\n";
    if (bookings.empty()) {
        cout << "No rooms have been booked yet.\n";
    } else {
        for (const auto& booking : bookings) {
            cout << "Name: " << booking.name << endl;
            cout << "Address: " << booking.address << endl;
            cout << "Phone: " << booking.phone << endl;
            cout << "Area: " << booking.area << endl;
            cout << "-----------------------------\n";
        }
    }
}

void displayRoomLayout() {
    cout << "\n\t\t\t*******Room Layout*******\t\t\t\n";
    cout << "        +---------------------+\n";
    cout << "        |    Room 101         |\n";
    cout << "        |  Stuff Area         |\n";
    cout << "        +---------------------+\n";
    cout << "        |    Room 102         |\n";
    cout << "        |  Kitchen Area       |\n";
    cout << "        +---------------------+\n";
    cout << "        |    Room 103         |\n";
    cout << "        |  Coffee Area        |\n";
    cout << "        +---------------------+\n";
    cout << "        |    Room 201         |\n";
    cout << "        |  Lab Area           |\n";
    cout << "        +---------------------+\n";
    cout << "        |    Room 202         |\n";
    cout << "        |  Meeting Area       |\n";
    cout << "        +---------------------+\n";
    cout << "        |    Room 203         |\n";
    cout << "        |  Workspace Area     |\n";
    cout << "        +---------------------+\n";
    cout << endl;
}

int main() {
    cout << "\n1. Book a room";
    cout << "\n2. Set the host";
    cout << "\n3. Set the start time";
    cout << "\n4. Set the end time";
    cout << "\n5. Set the chair booking capability";
    cout << "\n6. Define the room number";
    cout << "\n7. Display booked rooms";
    cout << "\n8. Display room layout";
    cout << "\n0. Exit\n";
    
    int ch;
    do {
        cout << "\nEnter Your Choice: ";
        cin >> ch;
        
        switch (ch) {
            case 1:
                Book();
                break;
            case 2:
                setHost();
                break;
            case 3:
                startTime();
                break;
            case 4:
                endTime();
                break;
            case 5:
                capability();
                break;
            case 6:
                roomNo();
                break;
            case 7:
                displayBookings();
                break;
            case 8:
                displayRoomLayout();
                break;
            case 0:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice. Please enter a valid option.\n";
        }
    } while (ch != 0);
    
    return 0;
}
