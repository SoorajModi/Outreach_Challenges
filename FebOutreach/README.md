# DAYS CALCULATOR
The prupose of this simple project is to demonstrate the usage of command line arguments.
Program takes 2 dates in as Command Line parameters and it will return the niumber of days between the 2 days by printing it in the console.

# ~PREREQUISITES~
-----------------
+ Have a tool installed that is capable of compiling and running C ansi files
+ Ensure that all of the project's files are in the same directory (in this case, there is only 1)

# ~HOW TO RUN~
--------------
+ navigate to the directory of the project
+ type: <gcc -ansi -Wall DaysCalcProblem.c -o dates> into the terminal
+ ensure code compiles with no errors
+ type: <./dates dd1 mm1 yyyy1 dd2 mm2 yyyy2>

# ~SPECIAL TIPS~
----------------
Alright, here will be the explanation and a hint regarding what you must do in order for the program to run successfully.

In the program, it says: 
        <int main( int argc, char *argv[] )>
        the argc and *argv[] parameters are actually what allows us to read info from the command line.
        ARGC is the number of arguments on the command line
        ARGV is the array where the arguments are stored and can be accessed.

        e.g. If we run the file by typing this: <./dates 12 01 2001 08 09 2002>

argv:      0    1  2   3   4  5   6
argc:      1    2  3   4   5  6   7
cmd:    ./dates 12 01 2001 08 09 2002

Above it shows that there are 7 parameters.
the name of the executable with the ./ is always the first parameter.
to ACCESS these parameters, you would write the corresponding values in the index for the array, like so:
    to access mm1: <argv[2]>
    to access yyyy2 <argv[6]>

You can even store them in variables! ;)
    <char *day1 = argv[1];>         (make sure you have the * before the variable name, otherwise it will only store the first letter instead
                                    of them ALL)

# ~YOUR CHALLENGE~
----------------
Alrighty!  YOUR job will be to simply enter 6 lines where indicated into the code.
They're mighty short and simple commands too ;)

Unfortunately that will be all I can give you.
Now you have to READ through the code, and figure out exactly what is missing from the program.

























Hint~ 'How does one access something that isn't really there?                                                          ...yet.'