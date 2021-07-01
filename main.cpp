//this program is to print out the initials.
//if the name is written in lowercase, it will automatically be converted to uppercase
#include <iostream>
#include <string>
//to use getline
using namespace std;

void getInitials(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]== s[0]){
            cout<< (char)(toupper(s[i])) << ".";
        }
        else if(s[i]==' '){
            cout<< (char)(toupper(s[i+1]))<< ".";
            //when 'space' is detected, it will take the letter that is right after the 'space'
        }
        else{}
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

}
