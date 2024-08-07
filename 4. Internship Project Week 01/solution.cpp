#include <conio.h>
#include <cstdio>
#include <iostream>
#include <string.h>
#include <cstdlib>
using namespace std;
static int p = 0;
class a
{
    char roomn[5], host[10], start[5], send[5], from[10], to[10], chair[8][4][10];

public:
    void install();
    void allotment();
    void empty();
    void show();
    void avail();
    void position(int i);
} room[10];
void vline(char ch)
{
    for (int i = 80; i > 0; i--)
    {
        cout << ch;
    }
}
void a::install()
{
    cout << "Enter room number: ";
    cin >> room[p].roomn;
    cout << "\nEnter Host's name: ";
    cin >> room[p].host;
    cout << "\nStart time: ";
    cin >> room[p].start;
    cout << "\nSession ends at: ";
    cin >> room[p].send;
    cout << "\nFrom: \t\t\t";
    cin >> room[p].from;
    cout << "\nTo: \t\t\t";
    cin >> room[p].to;
    room[p].empty();
    p++;
}
void a::allotment()
{
    int chair;
    char number[5];
top:
    cout << "Room no: ";
    cin >> number;
    int n;
    for (n = 0; n <= p; n++)
    {
        if (strcmp(room[n].roomn, number) == 0)
        {
            break;
        }
        while (n <= p)
        {
            cout << "\nChair number: ";
            cin >> chair;
            if (chair > 32)
            {
                cout << "\nThere are only 32 chairs available in this room.";
            }
            else
            {
                if (strcmp(room[n].chair[chair / 4][(chair % 4) - 1], "Empty") == 0)
                {
                    cout << "Enter Passenger's name: ";
                    cin >> room[n].chair[chair / 4][(chair % 4) - 1];
                    break;
                }
                else
                {
                    cout << "The chair no. is already reserved.\n";
                }
            }
        }
        if (n > p)
        {
            cout << "Enter correct room no.: \n";
            goto top;
        }
    }
}
void a::empty()
{
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            strcpy(room[p].chair[i][j], "Empty");
        }
    }
}
void a::show()
{
    int n;
    char number[6];
    cout << "Enter room no: ";
    cin >> number;
    for (n = 0; n <= p; n++)
    {
        if (strcmp(room[n].roomn, number) == 0)
            break;
    }
    while (n <= p)
    {
        vline('*');
        cout << "\nRoom No: " << room[n].roomn << "\nHost: \t" << room[n].host << "\t\tStart time: \t" << room[n].start << "\t End time : " << room[n].send << "\nFrom: \t\t" << room[n].from << "\t\tTo: \t\t" << room[n].to << "\n";
        vline('*');
        room[0].position(n);
        int a = 1;
        for (int i = 0; i < 8; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                a++;
                if (strcmp(room[n].chair[i][j], "Empty") != 0)
                    cout << "\nChair no: " << (a - 1) << " is reserved for" << room[n].chair[i][j] << ".";
            }
        }
        break;
    }
    if (n > p)
        cout << "Enter correct room no: ";
}
void a::position(int l)
{
    int s = 0, p = 0;
    for (int i = 0; i < 8; i++)
    {
        cout << "\n";
        for (int j = 0; j < 4; j++)
        {
            s++;
            if (strcmp(room[l].chair[i][j], "Empty") == 0)
            {
                cout.width(5);
                cout.fill(' ');
                cout << s << ".";
                cout.width(10);
                cout.fill(' ');
                cout << room[l].chair[i][j];
                p++;
            }
            else
            {
                cout.width(5);
                cout.fill(' ');
                cout << s << ".";
                cout.width(10);
                cout.fill(' ');
                cout << room[l].chair[i][j];
            }
        }
    }
    cout << "\n\nThere are " << p << " chairs empty in room no. " << room[l].roomn;
}
void a::avail()
{
    for (int n = 0; n < p; n++)
    {
        vline('*');
        cout << "\nRoom No: " << room[n].roomn << "\nHost: \t" << room[n].host << "\t\tStart time: \t" << room[n].start << "\tEnd time: \t" << room[n].send << "\nFrom: \t\t" << room[n].from << "\t\t\t" << room[n].to << "\n";
        vline('*');
        vline('_');
    }
}
int main()
{
    system("cls");
    int w;
    while (1)
    {
        // system("cls");
        cout << "\n\n\n\n\n";
        cout << "\t\t\t1.Install\n\t\t\t" << "2.Reservation\n\t\t\t" << "3.Show\n\t\t\t" << "4.Rooms available\n\t\t\t" << "5.Exit";
        cout << "\n\t\t\tEnter your choice:-> ";
        cin >> w;
        switch (w)
        {
        case 1:
            room[p].install();
            break;
        case 2:
            room[p].allotment();
            break;
        case 3:
            room[0].show();
            break;
        case 4:
            room[0].avail();
            break;
        case 5:
            exit(0);
        }
    }
    return 0;
}