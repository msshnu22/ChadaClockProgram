#include "Clock.h"
#include <iomanip>

Clock::Clock() {       // defines and initilizes the hours in the clock class

    this->hours = 0;
    this->minutes = 0;
    this->seconds = 0;
}

Clock::Clock(int hours, int minutes, int seconds) {   // lets us access the nessecary variables in clock
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}

void Clock::addHour() {             //function to add hour
    if (hours <= 22) {
        hours = hours + 1;          // if hours are less than or equal to 22, adds an hour
    }
    else if (hours == 23) {         // if hours are 23, hours set to 0
        hours = 0;
    }
   
}

void Clock::addMinute() {           // function to add minute
    if (minutes <= 58) {            // if minutes are less than or equal to 58, adds minute
        minutes = minutes + 1;
    }
    else if (minutes == 59) {       // if minutes are 59, sets minutes to 0, adds hour
        minutes = 0;
        addHour();
    }
  
}

void Clock::addSecond() {           // function to add second
    if (seconds <= 58) {            // if seconds are 58 or less, add a second
        seconds = seconds + 1;
    }
    else if (seconds == 59) {       // if seconds are 59, set seconds to 0, add minute
        seconds = 0;
        addMinute();
    }
   
}


string Clock::get24HourFormat() {       // format for 24 hour clock
    return pad(hours) + ":" + pad(minutes) + ":" + pad(seconds);
}
   

string Clock::get12HourFormat() {       // format for 12 hour clock
    int tmpHours = hours;
    if (hours == 0) {                   // if hours are 0, clock is set to 12
        return "12:" + pad(minutes) + ":" + pad(seconds) + " AM";
    }
    else if (hours == 12) {             // if hours are 12, returns format for time with PM
        return to_string(hours) + ":" + pad(minutes) + ":" + pad(seconds) + " PM";
    }
    else if (hours < 12) {              // if hours are less than 12, return format for time with AM
        return to_string(hours) + ":" + pad(minutes) + ":" + pad(seconds) + " AM";
    }
    else if (hours > 12) {              // if hours are more than 12, subtracts 12 and returns format
        tmpHours = hours - 12;
        return to_string(tmpHours) + ":" + pad(minutes) + ":" + pad(seconds) + " PM";
    }
    
    
}

string Clock::pad(int value) {                // function to append a 0 in string when needed
    if ((value > 10) && (value <= 59)) {      // if values between 10 and 59, return string
        return to_string(value);
    }
    else if (value < 10) {                    // if value is less than 10, return 0 in front of string
        return "0" + to_string(value);
    }
  
}
