// Drill Simple Letter

#include "std_lib_facilities.h"



int main()
{

    string first_name; 		// first_name is a variable of type string
    string friend_name; 	// another string variable
    char friend_sex = 0;	// Male or Female
    int age;				// Age
    string simple_error;

    cout << "Enter the name of person you want write to (followed by 'enter'):\n";
    getline (cin,first_name);		// read characters into first_name
    cout << "Dear, " << first_name << "!\n";
    cout << "How are you? Here I'm fine, just busy with the plans to move on in all aspects, life and career. \n";
    cout << "Enter a close friend name (followed by 'enter'): \n";
    getline (cin,friend_name);		// read friend name
    cout << "Have you seen " << friend_name << " lately ? \n";
    cout << "Enter friend sex, M or F : \n";
    cin >> friend_sex;
    if ((friend_sex == 'M') || (friend_sex == 'm'))
    {

        cout << "If you see " << friend_name << " please ask him to call me \n";
    }

    else if ((friend_sex == 'F') || (friend_sex == 'f'))
    {
        cout << "If you see " << friend_name << " please ask her to call me \n";
    }
    else
    {
        cout << "M or F... I only know 2 genders... Sorry! \n";
    }

    cout << "Enter the age of person (followed by 'enter' : \n";
    cin >> age;	//read age

    if ((age == 0) || (age >= 110))
    {
        cout << "You are just kidding!" << endl;
        cout << "Yours sincerely, \n \n \n" "Raphael Nascimento.";
    }

    else if ((age >= 1) && (age <= 16) || (age >= 18) && (age <= 69))
    {
        cout << "I heard you just had a birthday and you are " << age << " years old \n";
        cout << "Next year you will be " << age + 1 << "\n \n";
        cout << "Yours sincerely, \n \n \n" "Raphael Nascimento.";

    }

    else if (age == 17)
    {
        cout << "I heard you just had a birthday and you are " << age << " years old \n";
        cout << "Next year you will be able to vote! \n \n";
        cout << "Yours sincerely, \n \n \n" "Raphael Nascimento.";
    }

    else if ((age >= 70) && (age < 110))
    {
        cout << "I heard you just had a birthday and you are " << age << " years old \n";
        cout << "I hope you are enjoying retirement. \n \n";
        cout << "Yours sincerely, \n \n \n" "Raphael Nascimento.\n";
    }

    else
    {

    }

    system("pause");

    return 0;
}
