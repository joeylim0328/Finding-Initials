//this program is to print out the initials.
//if the name is written in lowercase, it will automatically be converted to uppercase
#include <iostream>
//to use getline
#include <string>
#include <sstream>

using namespace std;

void getInitials(string s){

    istringstream ss(s); //extract each word in the sentence
    string first_name, last_name; //for storing each word

    ss >> first_name;
    cout<<first_name<<".";

    while (ss >> last_name){
        // print the read word
        cout << (char)toupper(last_name[0])<< ".";
    }
}

int main()
{
    string name;
    cout<< "Hi!"<<endl;
    cout<< "I am here to help you print the initials of your name. :)"<<endl;
    cout<< "Enter your name here : ";
    getline(cin, name);
    cout<< "*********"<<endl;
    getInitials(name);
    endl(cout);
    cout<< "*********"<<endl;

    return 0;

}
