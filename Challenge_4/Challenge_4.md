# Challenge 4: Grade Calculator

The professor teaching the introduction to programming course, CIS 1500, wants a grade calculator to make entering
in students grades easier.

For this challenge, you have to program a grade calculator that calculates the 
required final exam mark for a CIS 1500 student, given the student’s desired
overall course grade and their current marks (daily practice, weekly labs, 
lab exams, quizzes, A1, A2 and A3) in the course. 

Finish `Challenge4.py` and add logic to get the specified output.

Maintain two decimal places throughout the generated report.

## Sample Input/Output

```
Enter a value between 0 and 100 for each mark:

Weekly labs: 100
Daily practice: 100
Lab exam: 70
Quiz 1: 100
Quiz 2: 60
Quiz 3: 70
Assignment 1: 100 
Assignment 2: 90
Assignment 3: 80
How much do you desire as an overall grade in CIS 1500: 75

**************************************************
Assessment          Weight          Marks
--------------------------------------------------
Weekly Labs         10              100.00
Daily Practice      10              100.00
Lab Exam            10              70.00
Quiz 1              5               100.00
Quiz 2              5               60.00
Quiz 3              5               70.00
Assignment 1        5               0.00
Assignment 2        7               90.00
Assignment 3        8               80.00
Final Exam          35              To be determined
**************************************************
Current course mark = 51.20 out of 65.00
You need 23.80/35.00 to reach your goal (75%)
In percentage, you need 68% to reach your goal (75%) 
**************************************************
```
