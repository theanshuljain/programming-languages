#include <stdio.h>
#include <stdlib.h>

//This is how you comment in C
/*This is how you comment in
multiple lines in C.*/

/*This file is being written as a C programming basics document for my own reference.
I have also created notes in my programming notebook that contains theoretical concepts of programming.
This file has applications of those concepts for me to practice and learn.*/

//START READING FROM THE MAIN FUNCTION. IGNORE NEXT FEW LINES. PLEASE!
double cube(double number);
int diff(int num1, int num2);
//Let us now practice structs in C:
struct StudentData
    {
        char name[50];
        int student_ID;
        char major[50];
        char degree_level[50];
    };

int main()
{
    printf("Suh dude! Wanna learn C programming huh!? Well, good luck!\n\n");

    //1. VARIABLES: This section of the code will help us understand variables.
    printf("VARIABLES\n\n");

    //How to assign and print values to variables:
    char personName[] = "Anshul Jain";
    int personAge = 26;
    char personLikesName = 'J';
    float personLikesAge = 69.42;
    printf("%s is a good boy.\n", personName);
    printf("%s is %d years old.\n", personName, personAge);
    printf("%s likes the name %c.\n", personName, personLikesName);
    printf("%c does not like being %d.\n", personLikesName, personAge);
    printf("%c likes being %f.\n", personLikesName, personLikesAge);

    //But what if we want to change the same variable's value later?
    personLikesAge = 42.69;
    printf("%c used to like being older, but he is missing being %f.\n", personLikesName, personLikesAge);
    /*We see that if we want to change the value of an already declared variable, we need not declare the variable again with its data type,
    we can just assign a different value by calling the variable again.*/

    printf("------------------------------------------------------------------------------------------------------------\n");

    /*2. ARRAYS: Now we are going to learn about arrays.
    Arrays is a tool that is used to store multiple values under a single variable name.
    We, in a way, use a row matrix as an array.*/
    printf("ARRAYS\n\n");

    int positive_even_nums[] = {2, 4, 6, 8, 10};
    printf("First positive even number is: %d\n", positive_even_nums[0]);

    //We can declare an array without giving the inputs right away as shown:
    int positive_odd_nums[10];

    //We can later assign the values to each index of the array as shown:
    positive_odd_nums[1] = 3;
    printf("Second positive odd number is: %d\n", positive_odd_nums[1]);

    //Let us try and print an index that has not been assigned any value:
    printf("First positive odd number is: %d\n", positive_odd_nums[0]);
    //This generates a random number on that index and prints it.

    //Let us try and print an index that is beyond the size of the array:
    printf("Random positive odd number is: %d\n\n", positive_odd_nums[15]);
    //Note that C does not throw an error, instead it again assigns a random value and prints it.

    //Let us try out a character array.
    char vowels[7];
    vowels[0] = 'a';
    printf("First vowel is: %c\n", vowels[0]);
    printf("Second vowel is: %c\n", vowels[1]);
    //Note that while assigning random values to the indices, C does not create a random character in the char data type array as seen in int arrays.

    //Let us try out a string array.
    char string[] = "an array with multiple characters in it.";

    //If we wish to print a specific index of the string array, same method is used as for integer arrays.

    //If we wish to print the whole string, we do this:
    printf("The string array is %s\n", string);

    printf("------------------------------------------------------------------------------------------------------------\n");

    //3. FUNCTIONS: Functions are tools used to include a particular feature or perform a particular 'function' that the user requires.
    printf("FUNCTIONS\n\n");

    //Let us try a very basic function: A function that says Hi!
    void hello()
    {
        printf("Hi!");
    }
    /*We see that there was no output from the above function.
    That is because we need to call the function in order for it to perform its task.
    IMPORTANT: Usually, user-defined functions are written outside the main function and
    hence the example UDFs would be written outside the main function but would be called to
    perform their tasks in this section itself.*/

    //Call the first example function:
    hello();
    //We see that C reads the function call, finds the function in the current file and performs the task of the function.

    printf("\n"); //I am giving the next line because I do not know why the "\n" in the "hello()" is not working unlike in better_hello()!!

    //Let us call second example function:
    better_hello("Anshul");

    printf("-----------------------------------------------------------------------------------------------------------\n");

    //4. RETURN STATEMENTS: Return is a keyword in C programming that is used to return the output of the function.
    printf("FUNCTIONS WITH RETURN STATEMENTS\n\n");

    //Let us write a basic function right after the examples outside of the main function and the call it here:
    printf("Cube of the number is: %f\n", cube(2));
    //Go and see the function definition right after the first two example functions and guess the output.

    /*We notice that C compiler did not allow us to run the program and the error is displayed is:
    "conflicting types for 'cube'. This is because the data type of 'cube' function is something different from 'int'.
    In C, if we call a UDF in the main function, and that function definition is written after the main function,
    C assumes the return type of that particular UDF to be 'int'.
    If we specifically want the data type of the UDF to be something different than 'int', as was the case in our
    example, we need to either define the whole function before the main function or give a "Function Prototype" before the
    main function.*/
    /*We now give the function prototype for the 'cube' function before the main function in order for our function to be able
    to perform its task and return the estimated value.*/

    printf("-----------------------------------------------------------------------------------------------------------\n");

    //5. IF STATEMENTS: Tool used to add decision making functionality in our code.
    printf("IF STATEMENTS\n\n");

    //Let us create another UDF defined below the main function and prototyped above the main function.

    //Let us now call the function:
    printf("Difference between the two numbers is: %d\n", diff(4, 9));

    printf("-----------------------------------------------------------------------------------------------------------\n");

    //6. SWITCH STATEMENTS: Special type of 'if' statements that allow us to compare one value to multiple other values simultaneously.
    printf("SWITCH STATEMENTS\n\n");

    //Let us write a switch statement to compare the age of a person and print his/her stage of life:
    /*int age;
    printf("Enter the age of the person: ");
    scanf("%d", &age);
    switch(age)
    {
        case 1 :
            if(age <= 20)
            {
                printf("The person is baccha.\n");
            }
        break;
        case 2 :
            if (age > 20 && age <= 50)
            {
                printf("The person is javaan.\n");
            }
        break;
        case 3 :
            if(age > 50)
            {
                printf("The person is buzurg.\n");
            }
        break;
        default :
            printf("The person is not a human to have either negative or imaginary age.\n");
    }*/
    /*Notice that the above switch statement runs the default condition and gets confused if the age matches with
    the case number. I conclude that this is not a good use case of switch statements and using just if statements
    would be more efficient. Hence we need a different example.*/

    //Let us write another example:
    char grade = 'E';
    switch(grade)
    {
    case 'A':
        printf("You did great!\n");
        break;
    case 'B':
        printf("You did great! Can do better.\n");
        break;
    case 'C':
        printf("You did alright! Can do better.\n");
        break;
    case 'D':
        printf("You did fine. Need to work harder next time.\n");
        break;
    case 'F':
        printf("You tried! Better work next time.\n");
        break;
    default:
        printf("You'll bring a revolution!\n");
    }

    printf("-----------------------------------------------------------------------------------------------------------\n");

    //7. STRUCTS: It is a data structure used to store different types of data within one structure.
    printf("STRUCTS\n\n");

    //Note: Structs also need to be defined outside of the main function.

    //Let us call the struct and play around with it:
    /*struct StudentData FirstStudent;
    We see that C throws an error stating that it doesn't know the storage size of 'FirstStudent'.
    This means that a struct cannot be defined after the main function and needs to be defined before the main function only.*/
    struct StudentData FirstStudent;
    /*first_stud.name = "Jacob";
    We see that C does not allow us to assign strings to char data type variables within structs as usual.
    Hence, we use string copy function.*/
    strcpy(FirstStudent.name, "Jacob");
    FirstStudent.student_ID = 126942045;
    strcpy(FirstStudent.major, "Faith Engineering");
    strcpy(FirstStudent.degree_level, "MI (Masters in Intimaceering)");

    //Let us check if the written struct is working as we want it to:
    printf("First student's name is: %s.\n", FirstStudent.name);
    printf("First student's ID is: %d.\n", FirstStudent.student_ID);
    printf("First student's major is: %s.\n", FirstStudent.major);
    printf("First student's degree level is: %s.\n", FirstStudent.degree_level);

    printf("-----------------------------------------------------------------------------------------------------------\n");

    //8. WHILE LOOP: While loop is a tool used to "CONTINUOUSLY" run a specific block of code until a given condition becomes false.
    printf("WHILE LOOP\n\n");

    //Let us write a really basic while loop:
    int index = 0;
    while(index <= 5)
    {
        printf("%d\n", index);
        index += 1;
    }
    //Hurray!

    printf("-----------------------------------------------------------------------------------------------------------\n");

    //9. FOR LOOP: This loop is uses an indexing variable.
    /*This indexing variable is used by the user for them to know which iteration the loop is currently on.*/
    printf("FOR LOOP\n\n");

    //Let us write a really basic for loop:
    for(int i = 0; i < 11; i++)
    {
        printf("The current for loop is on iteration number: %d.\n", i);
    }
    //Hurray! This time you used a concept without going through the video first. Sike dude!

    printf("-----------------------------------------------------------------------------------------------------------\n");

    //10. 2D ARRAYS and NESTED LOOPS: 2D arrays are arrays with elements that themselves are arrays. Nested loops are loops within loops.
    printf("2D ARRAYS and NESTED LOOPS\n\n");

    //Let us write a basic 2D array:
    int TwodArray[3][3] = {{2, 3, 4}, {5, 7, 9}, {1, 8, 15}};
    /*2D arrays are defined with 2 square brackets as shown. The first square brackets have the number of elements in the outer array
    and the second square brackets would have the number of elements in the inner array.*/

    //Now let us use the 2D array defined above to access the elements of the 2D array using Nested loops:
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("%d ", TwodArray[i][j]);
        }
    }

    printf("-----------------------------------------------------------------------------------------------------------\n");

    /*11. MEMORY ADDRESSES: These are addresses of the physical memory location on the computer disk. We can access these addresses
    using pointers. Pointers will be discusses later in this document.*/
    printf("MEMORY ADDRESSES\n\n");

    int a = 2;

    //Let us find the memory address of a:
    printf("%p\n", &a);

    printf("-----------------------------------------------------------------------------------------------------------\n");

    //12. POINTERS: Pointer is just another data type that directs us to the memory address of any other variable.
    printf("POINTERS\n\n");

    //Let us declare some variables first and then we will play around with pointers with the help of those variables.
    int age = 22;
    char name = "Jacob";
    double NoOfGfs = 6.9;

    //Let us print the memory addresses of all the variables above:
    printf("The memory address of,\nage is: %p\nname is: %p\nNoOfGfs is: %p\n", &age, &name, &NoOfGfs);

    //Pointer variables are essentially used to store the memory addresses of variables that are already on the code.
    //We can declare pointer variables in exactly the same manner as other variables.
    int *pAge = &age;
    char *pName = &name;
    double *pNoOfGfs = &NoOfGfs;
    //Note that the data type of the pointer associated with a particular variable is the same as that of the variable.

    printf("-----------------------------------------------------------------------------------------------------------\n");

    /*13. DE-REFERENCING POINTERS: Pointers are used to access the memory address of a variable. De-referencing a pointer
    gives the value stored in that memory address. It is just the other way round from what pointers do.*/
    printf("DE-REFERENCING POINTERS\n\n");

    //Let us take the variables declared in the previous section itself.
    /*Now, we will de-reference a pointer by using the declared "pointer variables" and fetch the value of the variable stored
    at that memory address instead of the memory address itself.*/
    printf("The value of age stored in the computer disk address: %p, is: %d.\n", pAge, *pAge);
    //Victory!!!

    /*This covers all the basic concepts in C programming. I actually enjoyed making these notes.*/

    printf("-----------------------------------------------------------------------------------------------------------\n");

    /*I used this youtube video as the reference: "https://www.youtube.com/watch?v=KJgsSFOSQv0&ab_channel=freeCodeCamp.org".
    This video talks about writing and reading files using C programming, which I do not think is important to me.
    So this marks the end of this document.*/

    return 0;
}

//Let us try writing the same function again:
void hello()
{
    printf("Hello\n!");
}

//Let us give some parameters to the previous function:
void better_hello(char name[])
{
    printf("Hi %s! You are doing great!\n", name);
}

//Let us write a different function with a return statement:
double cube(double number)
{
    double cube_of_number;
    cube_of_number = number * number * number;
    return cube_of_number;
}

//Let us write a UDF including if statements that calculates difference between two numbers:
int diff(int num1, int num2)
{
    int result;
    if(num1 >= num2)
    {
        result = num1 - num2;
    }
    else
    {
        result = num2 - num1;
    }
    return result;
}
