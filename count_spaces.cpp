#include<string>
#include<iostream>
using namespace std;

//Function that counts the number of spaces in a string.
int count_space(string s)
{
    int num_space = 0;
    
    //Loop through each character in the string.
    for(int i = 0; i < s.length(); i++) {
        
        //Check if the character is a space.
        if(s[i] == ' ') {
            num_space = num_space + 1;
        }
        
    }
    
    return num_space;
    
}

int main()
{
    string s;
    cout << "Please enter a sentence:" << endl;
    getline(cin, s);
    
    //Call the function to count the spaces in the string.
    cout << "The sentence \"" << s << "\" contains " << count_space(s) << " spaces." << endl;
    
    return 0;
}
