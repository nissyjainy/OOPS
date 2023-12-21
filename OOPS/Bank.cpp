// // #include <bits/stdc++.h>
// // using namespace std;
// // class bank
// // {
// // public:
// //     string name;
// //     string accountNo;
// //     string accountName;
// //     int balance;
// // };
// // class receipt
// // {
// // private:
// //     bank *account = new bank(); // account name no variable banayo che ok
// // public:
// //     // constructor banay ok ane initial values tu enter kar ok
// //     receipt()
// //     { // constructor che ok
// //         account[0] = {"Nisarg", "123", "Savings", 5000};
// //         account[1] = {"Manish", "234", "Current", 10000};
// //         account[2] = {"Shalini", "345", "Current", 8000};
// //         account[3] = {"Sarla", "567", "Savings", 2500};
// //     }
// //     // have shu karvanu che to deposit ok
// //     bool deposit(const string &accountNo, int &amountdeposit, const int &balance)
// //     {
// //         // have check kar ok ki aacount che ki nahi ok
// //         for (int i = 0; i < sizeof(account) / sizeof(bank); i++)
// //         {
// //             if (account[i].accountNo == accountNo)
// //             {
// //                 // have jo mare account mali gayo che ok
// //                 balance = balance + amountdeposit;
// //                 cout << "The amount has been deposited successfully" << endl;
// //                 cout << "The amount present in the account is " << balance << endl;
// //                 return true;
// //             }
// //         }
// //         // jo account j na madyo to ok
// //         cout << "The entered account no is not found" << endl;
// //         return false;
// //     }
// //     bool withdraw(const string &accountNo, const int &balance, int &withdrawammount)
// //     {
// //         // have check kar mare account che ki nahi

// //         for (int i = 0; i < sizeof(account) / sizeof(bank); i++)
// //         {
// //             if (account[i].accountNo == accountNo)
// //             {
// //                 // have jo mare account mali gayo che ok
// //                 if (balance >= withdrawammount)
// //                 {
// //                     balance = balance - withdrawammount;
// //                     cout << "The amount has been debited successfully" << endl;
// //                     cout << "The amount present in the account is " << balance << endl;
// //                     return true;
// //                 }
// //                 else
// //                 {
// //                     cout << "Insufficient balance in the account" << endl;
// //                     return false;
// //                 }
// //             }
// //         }
// //         cout << "The amount cannot be withdraw from the account" << endl;
// //         return false;
// //     }
// //     void display(const string &name, const int &balance, const string &accountNo)
// //     {
// //         // have check kar mare account che ki nahi

// //         for (int i = 0; i < sizeof(account) / sizeof(bank); i++)
// //         {
// //             if (account[i].accountNo == accountNo)
// //             {
// //                 // have ahiya print kar ok
// //                 cout << "Name" << account.name << endl;
// //                 cout << "Balance" << account.balance << endl;
// //             }
// //         }
// //         cout << "The account No you have entered is not valid" << endl;
// //     }
// //     bool exist(const string &accountNo)
// //     {
// //         for (int i = 0; i < sizeof(account) / sizeof(bank); i++)
// //         {
// //             if (account[i].accountNo == accountNo)
// //             {
// //                 return true;
// //             }
// //         }
// //         return false;
// //     }
// // };
// // int main()
// // {
// //     // sauthi pehla mare account no input levo padshe ane amount input levu padshe ok
// //     // ahiya mare amountdeposit input levu padshe ok
// //     // ahiya mare withdrawammount input levu padshe
// //     // ek object banay ok
// //     receipt member;
// //     string accountNo;
// //     cout << "Enter your account number" << endl;
// //     cin >> accountNo;
// //     int amountdeposit;
// //     cout << "Enter the amount to be deposited in the bank " << endl;
// //     cin >> amountdeposit;
// //     int withdrawammount;
// //     cout << "Enter the amount to be withdrawed" << endl;
// //     cin >> withdrawammount;
// //     // have jo mare account no exist kare che ki nahi ok
// //     if (member.exist(accountNo))
// //     {
// //         // have deposit kar ane withdraw
// //         member.deposit(accountNo, amountdeposit, balance);
// //         member.withdraw(accountNo, balance, withdrawammount);
// //         member.display(name, balance, accountNo);
// //     }
// //     else
// //     {
// //         cout << "The account do not exist . Sorry for the inconvience !!!!" << endl;
// //     }
// //     return 0;
// // }

// #include <iostream>
// using namespace std;

// int main() {
//     int rows;

    
//     cin >> rows;

//     // Outer loop for the number of rows
//     for (int i = 1; i <= rows; i++) {
//         // Inner loop for printing numbers
//         for (int j = 1; j <= i; ++j) {
//             cout << j;
//         }

//         // Inner loop for printing stars
//         for (int k = i; k < rows; ++k) {
//             cout << "*";
//         }
//         for(int k = i;k<rows;k++)
//         {
//             cout<<"*";
//         }
//         for(int q = i;q>=1;q--)
//         {
//             cout<<q;
//         }
//         cout << endl; // Move to the next line after each row
//     }
   

//     return 0;
// }

// C++ program to Convert Set To Vector
// Using range constructor
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
// 	// Set declared
// 	set<int> st = { 1, 2, 3, 7, 9, 5 , 5 };

// 	cout << "Original Set elements\n";
// 	for (int i : st)
// 		cout << i << " ";
// 	cout << endl;

// 	// range constructor from
// 	// st.begin() to st.end()
// 	// Vector declared with values
// 	vector<int> vc(st.begin(), st.end());

// 	cout << "Printing Vector after conversion\n";
// 	for (int i : vc)
// 		cout << i << " ";
// 	cout << endl;

// 	return 0;
// }



#include <bits/stdc++.h>
using namespace std;
string result(string s)
{
    int left = 0;
    int right = s.length()-1;
    
    string temp="";
    string ans="";
    
    //Iterate the string and keep on adding to form a word
    //If empty space is encountered then add the current word to the result
    while (left <= right) {
        char ch= s[left];
        if (ch != ' ') {
            temp += ch;
        } else if (ch == ' ') {
            if (ans!="") ans = temp + " " + ans;
            else ans = temp;
            temp = "";
        }
        left++;
    }
    
    //If not empty string then add to the result(Last word is added)
    if (temp!="") {
        if (ans!="") ans = temp + " " + ans;
        else ans = temp;
    }
    
    return ans;    
}
int main()
{
    string st="TUF is great for interview preparation";
    cout<<"Before reversing words: "<<endl;
    cout<<st<<endl;
    cout<<"After reversing words: "<<endl;
    cout<<result(st);
    return 0;
}
