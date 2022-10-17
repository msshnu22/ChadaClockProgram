*** SUMMARY FOR PROJECT ***

This project that I have created as a submission for SNHU creates a program that displays a 12-hour clock as well as a 24-hour clock.
There is a main menu that is created to handle the options for displaying the clock, update clock, and exit the program. When selecting display the clock,
it adds an hour to both of the 12-hour and 24-hour clocks. When selecting update clock, another menu is displayed with options to add an hour, minute, and
second. Selcting those options will update both clocks accordingly. The problem this project is solving is how to update a clock using a program, which I
found to be very interesting.

I feel that I did particularly well in handling the functions for adding an hour, minute, and second to the clocks. The reason 
being is because I feel likeit was pretty simple to figure out what the logical path was behind adding those values. Thinking about seconds, if seconds are 
more than or equal to 58 then one is added. If the seconds are more than 59, then a minute is added. This works the same way with the other methods for adding
an hour and minute.

A way that I can enhance my code would be changing the variable userInput used in the menu options. If I had changed userInput into displayClockInput for option
number one, this would make it easier for the reader to indentify which menu option is being selected. These improvements would promote readibility and provide
a clear understanding of what a specific menu option performs in the program. 

The piece of code that was most challenging for me to write would be the method for
get12HourFormat. This was challenging compared to the method for get24HourFormat, since this method was pretty simple with a return value consisting of padded
values. For the get12HourFormat, there was multiple padded values returned in an if-else loop. Each of the padded values relied on what the values were of the
12-hour clock. 

The skill learned from this project that could be used for other projects or assignments would be creating a menu with a sub menu. Figuring out
where the sub menu fits into the loop and how to access it is a good thing to know when dealing with programs with menu options. I made this program readable,
maintainable, and adaptable by creating a class for the clock method and implementing the methods for the clock class into the main function in cpp file.
My programs readibility is good as well because of the comments for every method, explaining what varaibles are defined as and what the methods perform.
