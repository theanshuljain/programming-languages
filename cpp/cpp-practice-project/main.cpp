#include <iostream>

//C++ uses the same method to comment as C.
/*This file would be a basic C++ document but will not include anything that is already
covered in the basics of C document in the C practice project.*/

using namespace std;

//Do not read next few lines. Directly go to the main function and then understand the code.

void hello();
/*class Novel
{
    public:
        Novel();
        ~Novel();
};*/
/*class Novel
{
    public:
        string title;
        string author;
        int pages;
};*/

class Person
{
    private:
        int age;

    public:
        string name;

        Person(string aName, int aAge)
        {
            name = aName;
            age = aAge;
        }

        void setAge(int aAge)
        {
            if(aAge > 0 && aAge < 100)
            {
                age = aAge;
            } else
            {
                age = 0;
            }
        }

        int getAge()
        {
            return age;
        }
};

class Chef
{
    public:
        void makeChicken()
        {
            cout << "The chef makes chicken." << endl;
        }

        void makePork()
        {
            cout << "The chef makes pork." << endl;
        }
};

class BetterChef : public Chef
{
    public:
        void makeBeef()
        {
            cout << "The better chef makes beef AS WELL." << endl;
        }
};

int main()
{
    cout << "Hello!" << endl;

    char letter = 'a';
    string degree = "Aerospace";
    int number = 22;
    double digit = 22.23;
    bool isGood = true;
    bool isBad = false;

    cout << "Let us print our first character variable: " << letter << endl;
    cout << "Let us print our first string: " << degree << endl;
    cout << "Let us print our first integer variable: " << number << endl;
    cout << 4.5 << endl;
    cout << true << endl;
    cout << "Hi!\n";

    hello();
    //Until here, all the functionality in C++ was exactly the same as in C but with some syntax differences here and there.
    //Those differences are actually discussed in the code written above.

    cout << "------------------------------------------------------------------------------------------------------------------\n\n";

    //Additional functionalities as compared to C:
    //1. CLASSES and OBJECTS: These are tools to better manage and play around with complex data.
    cout << "CLASSES and OBJECTS\n" << endl;

    //Let us define some different types of data for us to be able to structure them in classes and objects:
    string name = "Jacob";
    double pi = 3.14;
    char favLetter = 'J';

    Novel first_novel;
    first_novel.title = "Harry Potter";
    first_novel.author = "J.K. Rowling";
    first_novel.pages = 500;
    cout << "The title of our first novel is: " << first_novel.title << endl;
    cout << "The author of our first novel is: " << first_novel.author << endl;
    cout << "The number of pages in our first novel are: " << first_novel.pages << endl;

    cout << "------------------------------------------------------------------------------------------------------------------\n\n";

    /*2. SETTERS and GETTERS: Custom functions used to restrict the values stored in attributes associated with the class to
    hold sensible values although the data type validates the stored value.*/
    cout << "SETTERS and GETTERS\n" << endl;

    Person first_person("Anshul", 22);
    cout << first_person.name << endl;
    first_person.setAge(500);
    cout << first_person.getAge() << endl;
    //We now understand how we can restrict some data to make sense although C++ would compile it even if it does not makes sense to us.

    cout << "------------------------------------------------------------------------------------------------------------------\n\n";

    /*3. INHERITANCE: Creating a class that inherits functionalities from previously defined classes.*/
    cout << "INHERITANCE\n" << endl;

    //We defined a superclass named Chef and a subclass named BetterChef.
    //Let us call the superclass and see if it works:
    Chef chef;
    chef.makeChicken();

    //Let us call and see if BetterChef has Chef class' functionality or not:
    BetterChef betterchef;
    betterchef.makeChicken();
    betterchef.makeBeef();
    //We see that the better chef can make beef as well.

    //This marks the end of this document. This document consists of concepts that C++ provides apart from what C provides.
    //This is the youtube video that I used as reference:
    //https://www.youtube.com/watch?v=vLnPwxZdW4Y&ab_channel=freeCodeCamp.org

    return 0;
}

void hello()
{
    cout << "Hello!\n";
}

/*class Novel
{
    public:
        Novel();
        ~Novel();
};*/
class Novel
{
    public:
        string title;
        string author;
        int pages;
};
