#include <iostream>
#include <conio.h>
using namespace std;

class Bank
{
private:
    int total;
    string id;
    struct person
    {
        string name, ID, address;
        int contact, cash;
    } person[100];

public:
    Bank()
    {
        total = 0;
    }
    void choice();
    void person_Data();
    void add_money();
    void out_money();
    void search_Balence();
    void data_list();
    void close_Account();
    void Change();
};

int main()
{
    Bank object;
    object.choice();
    getch();
}

void Bank::choice()
{
    char ch;
    while (1)
    {

        cout << "______________________________";
        cout << "\n      MAIN MENU  " << endl;
        cout << "------------------------------" << endl
             << endl;
        cout << "01. Create New Account" << endl;
        cout << "02. Deposit Amount" << endl;
        cout << "03. Withdraw Amount" << endl;
        cout << "04. Balance Enquiry" << endl;
        cout << "05. All Account Holder List" << endl;
        cout << "06. Close An Account" << endl;
        cout << "07. Modify An Account" << endl;
        cout << "08. Exit" << endl
             << endl;
        cout << "Select Your Option From (1 to 8)" << endl;

        ch = getch();
        system("CLS");
        switch (ch)
        {
        case '1':
            Bank::person_Data();
            break;
        case '2':
            if (total == 0)
            {
                cout << "No Data Found" << endl;
            }
            else
            {
                Bank::add_money();
            }
            break;
        case '3':
            if (total == 0)
            {
                cout << "No Data Found" << endl;
            }
            else
            {
                Bank::out_money();
            }
            break;
        case '4':
            if (total == 0)
            {
                cout << "No Data Found" << endl;
            }
            else
            {
                Bank::search_Balence();
            }
            break;
        case '5':
            if (total == 0)
            {
                cout << "No Data Found" << endl;
            }
            else
            {
                Bank::data_list();
            }
            break;
        case '6':
            if (total == 0)
            {
                cout << "No Data Found" << endl;
            }
            else
            {
                Bank::close_Account();
            }
            break;
        case '7':
            if (total == 0)
            {
                cout << "No Data Found" << endl;
            }
            else
            {
                Bank::Change();
            }
            break;
        case '8':
            exit(0);
            break;
        default:
        {
            cout << "Wrong Input" << endl;
            break;
        }
        }
    }
}

void Bank::person_Data()
{
    cout << "_____________________" << endl;
    cout << "Create New Account " << total + 1 << endl;
    cout << "---------------------" << endl
         << endl;
    cout << "Enter name: ";
    cin >> person[total].name;
    cout << "ID: ";
    cin >> person[total].ID;
    cout << "Address: ";
    cin >> person[total].address;
    cout << "Contact: ";
    cin >> person[total].contact;
    cout << "Total Cash: ";
    cin >> person[total].cash;
    total++;
}
void Bank::add_money()
{
    system("cls");
    int cash;
    cout << "_______________" << endl;
    cout << "Deposit Amount" << endl;
    cout << "---------------" << endl;
    cout << "Enter Your ID: " << endl;
    cin >> id;
    for (int i = 0; i < total; total++)
    {
        if (id == person[i].ID)
        {
            cout << "Name: " << person[i].name << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "\nExisting Cash " << person[i].cash << endl
                 << endl;
            cout << "Enter Your Cash: ";
            cin >> cash;
            person[i].cash += cash;
            cout << "New Cash Is: " << person[i].cash << endl
                 << endl;
            break;
        }
        if (i == total - 1)
        {
            cout << "Search Result No Found" << endl;
        }
    }
}

void Bank::out_money()
{
    int cash;
    cout << "_______________" << endl;
    cout << "Withdraw Money" << endl;
    cout << "---------------" << endl;
    cout << "Enter Your ID: " << endl;
    cin >> id;
    for (int i = 0; i < total; total++)
    {
        if (id == person[i].ID)
        {
            cout << "Name: " << person[i].name << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "\nExisting Cash " << person[i].cash << endl
                 << endl;
            cout << "Enter Your Cash: ";
            cin >> cash;
            person[i].cash -= cash;
            cout << "New Cash Is: " << person[i].cash << endl
                 << endl;
            break;
        }
        if (i == total - 1)
        {
            cout << "Search Result No Found" << endl;
        }
    }
}

void Bank::search_Balence()
{
    cout << "_______________" << endl;
    cout << "Balance Enquiry" << endl;
    cout << "---------------" << endl;
    cout << "Enter Your ID: " << endl;
    cin >> id;
    for (int i = 0; i < total; total++)
    {
        if (id == person[i].ID)
        {
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].ID << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl;
            break;
        }
    }
}
void Bank::data_list()
{
    cout << "_______________" << endl;
    cout << "All Account Holder List" << endl;
    cout << "---------------" << endl;
    for (int i = 0; i < total; i++)
    {
        cout << i + 1 << " " << person[i].name << endl;
    }
}

void Bank::close_Account()
{
    cout << "_______________" << endl;
    cout << "Close Account" << endl;
    cout << "---------------" << endl;

    cout << "Enter Your ID: " << endl;
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (id == person[i].ID)
        {
            for (int j = i; j < total; j++)
            {
                person[j].name = person[j + 1].name;
                person[j].ID = person[j + 1].ID;
                person[j].address = person[j + 1].address;
                person[j].contact = person[j + 1].contact;
                person[j].cash = person[j + 1].cash;
                total--;

                cout << "Your Requested Data Delete " << endl;
                break;
            }
        }
        if (i == total - 1)
        {
            cout << "Search Result No Found" << endl;
        }
    }
}

void Bank::Change()
{
    cout << "_______________" << endl;
    cout << "Modify Your Data" << endl;
    cout << "---------------" << endl;

    cout << "Enter Your ID: " << endl;
    cin >> id;

    for (int i = 0; i < total; i++)
    {
        if (id == person[i].ID)
        {
            cout << "\nPrevious Information" << endl;
            cout << "---------------------" << endl
                 << endl;
            cout << "Data of person " << i + 1 << endl;
            cout << "Name: " << person[i].name << endl;
            cout << "ID: " << person[i].ID << endl;
            cout << "Address: " << person[i].address << endl;
            cout << "Contact: " << person[i].contact << endl;
            cout << "Cash: " << person[i].cash << endl
                 << endl;

            cout << "\nEnter new information" << endl;
            cout << "---------------------" << endl
                 << endl;

            cout << "Enter Your Name: " << endl;
            cin >> person[i].name;
            cout << "ID: ";
            cin >> person[i].ID;
            cout << "Address: ";
            cin >> person[i].address;
            cout << "Contact: ";
            cin >> person[i].contact;
            cout << "Total Cash: ";
            cin >> person[i].cash;
            break;
        }
        if (i == total - 1)
        {
            cout << "Search Result No Found" << endl;
        }
    }
}
