//Introduction
/*C# (Pronounced "C Sharp") is an Object Oriented Programming Language which is class-based and component-oriented. It comes from the C and C++ family of languages so shares some syntaxes.
It is used for:
  Programs
  Development for Windows, iOS, Android and more.
  Games
  Libraries
  Extensions
It has many SDKs to aid development, and has simple API integrations (i.e. Payment Gateways)*/

//Considerations
using System;
namespace CodeSample {
    class Program {
      static void Main(string[] args){
      }
    }
}

//Comments
//Single Line - Use "//"
/*Multi-Line - Use "/*" to start. This is the start of a multi line comment
This is the end of the same multi line comment.*/

//Variables
//Integers
using System;
namespace CodeSample {
    class Program {
      static void Main(string[] args){
        int A;
      }
    }
}
/*This has declared that there is an integer variable known as "A"
  int - represents the type of the variable
  A - represents the name of the variable we declared.
Variables can be assigned on the same line it is declared or it can be assigned later on. They can change values later on as well.*/
using System;
namespace CodeSample {
    class Program {
      static void Main(string[] args){
        int A = 10;
        int B = -50;
        int C = 0;
      }
    }
}

/*This has declared that are 3 variables; "A" is 10, "B" is -50, and "C" is 0.
The following code assigns the variable after it has been declared.*/
using System;
namespace CodeSample {
    class Program {
      static void Main(string[] args){
        int A;
        int B;
        A = 15;
        B = -35;
      }
    }
}
/* At first variables "A" and "B" are empty, until they are filled in later on.
You can also assign a variable using another variable.*/
using System;
namespace CodeSample {
    class Program {
      static void Main(string[] args){
        int A;
        int B; //Both variables are declared to begin with - but with no values assigned.
        A = 15; //A is then assigned as 15
        B = A; //B is then assigned the same value as A - i.e. 15
      }
    }
}
//You can also invert the number to a negative by adding a minus in front of the variable.
using System;
namespace CodeSample {
    class Program {
      static void Main(string[] args){
        int A = 15; //A starts off as 15 here
        int B = -A; //B is then assigned the value of "Negative A"
      }
    }
}

//Decimals
using System;
namespace CodeSample {
    class Program {
      static void Main(string[] args){
        double piggybank = 15.60; //"double" - represents the type of the variable, "piggybank" - represents the name of the variable we declared.
      }
    }
}
/*Similarly to integers - decimals are declared in the same way, but by using the keyword "double".
The examples above also work for decimals. However integer values require less space that decimals - so for code optimisation ensure you're using the correct type of variable.*/

//Single Characters
using System;
namespace CodeSample {
    class Program {
      static void Main(string[] args){
        char pretzel; // This needs the "char" as it is declaring the variable. "char" being the type of variable, "pretzel" being the name of the variable.
        pretzel = 'p'; //variable "pretzel" is then assigned the value of "p"
        pretzel = '4'; //It is then switched to a "4"
        pretzel = '@'; //Then "@"
        pretzel = ' '; //Then an empty space or " "
      }
    }
}
//"char" variables can be only be a single character (or just "Empty"), be it a letter, single digit, symbol or even an empty space.

//Strings
/* Strings can contain a signle character, words, sentences, paragraphs, or any amount of text/values. Data wise they take up more space than "char" so again - ensure to optimise as appropriate.
Also - ensure to use double quotes for String declarations as opposed to the single quotes with "char".
*/
using System;
namespace CodeSample {
    class Program {
      static void Main(string[] args){
        string place = "Blue Harbour"; //"string" being the type of variable, "place" being the name of the variable.
      }
    }
}
