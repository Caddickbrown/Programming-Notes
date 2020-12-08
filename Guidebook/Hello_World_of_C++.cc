//Introduction
/*Was built as an extension or as a newer version of C
C++ is an Object Oriented Programming System (OOPS) and supports Classes and Objects
It is used for:
  Computer applications
  Games
  Software
  Graphics
  ATM Machines*/

//1st Program
/*Be aware of case letters as C++ gets confused if case letter change
cout - Means "Console Output" '''<<''' means "Output the object"
Text after << is printed
Semicolon is used as a "Full stop" and ends every command*/

cout<<"Hello World"; //This Line prints Hello World - double slash indicates a single line comment

//Comments
//Single Line - Use "//"
/* This is the start of a multi line comment
This is the end of the same multi line comment.*/

/*Storing a value - To do this you use variables. These variables have unique names so that we can call it whenever we want.
Along side this, we also what to tell our code what type of value we are containing (words/numbers etc.)
The steps are Identify - Define type of variable, Label - Assign name to variable, Value - Put a value into the variable*/

/*Identify (Keyword): string - Variable contains words
Label: container1 - This is the name we are giving the variable
Value: container1="Hello"; - Hello has been assigned as the value*/

//This is how it looks when put together - Notice the semicolon at the end of each command
string container1; //Identify and Label
container1="Hello"; //Value

//Storing Words
string dansname = "Daniel Caddick-Brown"; //Identify, Label, and Value in one line

/*Storing Boolean Values
These are values stores for decision making - such as "True" or "False"
To store these values you use the keyword bool*/
bool isCorrect = true;
//Value stored in a variable is either True or False without the double quotes
bool = true;

//Storing Numbers
//Keyword int - as in integer such as
int score; //This only creates the integer variable but doesn't assign a value to it
int score = 100; //This creates the interver variable but also assigns a value of 100 to it
//The following code assigns the number 25 as "rollNo" and then prints that stored variable
int rollNo = 25;
cout<<rollNo;

//Maths
int a=15; //This sets up Variable a and assigns a number to it
int b=5; //This sets up Variable b and assigns a number to it
int c; //This sets up Variable c but DOES NOT assign anything to it
c=a+b; //This assigns the value of c as a+b
cout<<c<<'__'; // This prints variable c
c=a-b; //This reassigns the value of c as a-b
cout<<c<<'__'; // This prints new variable c
c=a*b; //This reassigns the value of c as a*b
cout<<c<<'__'; // This prints new variable c
c=a/b; //This reassigns the value of c as a/b
cout<<c<<'__'; // This prints new variable c
//This whole block of code would print "20 10 75 3"

//Which number is greater?
//Here we will store intergers as variables a and b and following some maths identify which is larger
int a = 5;
int b = 3;
if(a>b){
    cout<<"a is greater than b";
}else{
    cout<<"b is greater than a";
}
/*When running this program, the output would be "a is greater than b"
Changing these variables sonstantly wouldn't be worth your time - the solution is that you would set up a program that you input the values
and it will spit out the solution. To do this you can use the cin command.
Instead of the values being hard-coded in, they are not inputs for whoever inputs the numbers*/
int a;
int b;
cout<<"Enter the value of a"<< endl;
cin>>a;
cout<<"Enter the value of b"<< endl;
cin>>a;
if(a>b){
    cout<<"a is greater than b";
}else{
    cout<<"b is greater than a";
}

//Decision Making
/*Most decisions tend to lead to a "Yes" or a "No" or multiple versions of yes or no. These can be visualised in flow charts.
These decisions can be seen as an "if..else statement" which you'll have seen above.
It can be written as below.*/
/*if(condition){
  code to be executed
}else{
  code to be executed
}*/
/*Inside the if block (between {}) the code will be performed if the condition is True
Inside the else block, the code will be performed if the condition is False*/
