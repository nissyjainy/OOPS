// //C++ program to write and read object using read and write function.
// #include <iostream>
// #include <fstream>

// using namespace std;

// //class student to read and write student details
// class student
// {
//     private:
//         char name[30];
//         int age;
//     public:
//         void getData(void)
//         { cout<<"Enter name:"; cin.getline(name,30);
//           cout<<"Enter age:"; cin>>age;
//         }

//         void showData(void)
//         {
//         cout<<"Name:"<<name<<",Age:"<<age<<endl;
//         }
// };

// int main()
// {
//     student s;

//     ofstream file;

//     //open file in write mode
//     file.open("aaa.txt",ios::out);
//     if(!file)
//     {
//       cout<<"Error in creating file.."<<endl;
//       return 0;
//     }
//     cout<<"\nFile created successfully."<<endl;

//     //write into file
//     s.getData();    //read from user
//     file.write((char*)&s,sizeof(s));    //write into file

//     file.close();   //close the file
//     cout<<"\nFile saved and closed succesfully."<<endl;

//     //re open file in input mode and read data
//     //open file1
//     ifstream file1;
//     //again open file in read mode
//     file1.open("aaa.txt",ios::in);
//     if(!file1){
//         cout<<"Error in opening file..";
//         return 0;
//     }
//     //read data from file
//     file1.read((char*)&s,sizeof(s));

//     //display data on monitor
//     s.showData();
//     //close the file
//     file1.close();

//     return 0;
// }
// // File Handling Inheritance aa j vadhare aavshe ok aevu lage che ok
// // operator overloading vagerah
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream my_file;
	my_file.open("my_file.txt", ios::out);
	if (!my_file)
	{
		cout << "File not created!";
	}
	else
	{
		cout << "File created successfully!";
		my_file << "Nisarg";
		my_file.close();
	}
	return 0;
}
// Multiple data le ane output kar ok table na form ma ok
#include <iostream>
#include <fstream>
using namespace std;
int main()
{
	fstream file_1;
	file_1.open("file_1.txt", ios::out);
	if (!file_1)
	{
		cout << "Here the file is not created";
	}
}

