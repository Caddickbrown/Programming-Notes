cout<<"Hello World"; //This Line prints Hello World - double slash indicates a single line comment

/* This is the start of a multi line comment
This is the end of the same multi line comment.*/

/*Storing a value - To do this you use variables. These variables have unique names so that we can call it whenever we want.
Along side this, we also what to tell our code what type of value we are containing (words/numbers etc.)
The steps are Identify - Define type of variable, Label - Assign name to variable, Value - Put a value into the variable*/

//Identify (Keyword): string - Variable contains words
//Label: container1 - This is the name we are giving the variable
//Value: container1="Hello"; - Hello has been assigned as the value

//This is how it looks when put together - Notice the semicolon at the end of each command
string container1; //Identify and Label
container1="Hello"; //Value

//Storing Words
string dansname = "Daniel Caddick-Brown"; //Identify, Label, and Value in one line

//Storing Boolean Values
//These are values stores for decision making - such as "True" or "False"
//To store these values you use the keyword bool
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
cout<<c<<'__'; // This prints variable c
c=a*b; //This reassigns the value of c as a*b
cout<<c<<'__'; // This prints variable c
c=a/b; //This reassigns the value of c as a/b
cout<<c<<'__'; // This prints variable c
//This whole block of code would print "20 10 75 3"
