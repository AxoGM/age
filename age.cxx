/*
made by AxoGM
@version v1.6
*/

#include <iostream>
using namespace std;

// calculate age
int main()
{
    // background color
    system("color 3g");
    
    // input
    int age;
    
    cout << "What is your age? "<< endl;
    cout << "Enter your age: "; // input age
    cin >> age;
    
    // process and output
    // answer color
    system("color 6g");
    
    // if age was 1 to 5 it will display "you are little kid"
    if ((age > 0) && (age <= 5))
        cout << "You are little kid. Now go back to sleep or else.";
     
     // if age was 6 to 12 it will display "you are in primary school" 
    else if (age <= 12)
        cout << "You are in primary school. Now go back to learn or else teacher will kick your ass.";
      
     // if age was 13 to 17 it will display "you are in secondry school"  
    else if (age <= 17)
        cout << "You are in secondry school. Now focus on your exam its more important for your life.";

    // if age was 18 to 25 it will display "you still young"
    else if (age <= 25)
         cout << "You still young. Now do something for your future.";

     // if age was 26 to 40 it will display "you are an adult"
     else if (age <= 40)
         cout << "You are an adult. Now do something good and dont destroy your life.";

     // if age was 41 and up it will display "you are old"
     else if (age >= 41)
         cout << "You are old. Now... die.";
         
     return 0;
}