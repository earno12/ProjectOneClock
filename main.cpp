/*
Assignment: Project One - Clock
Author: Elijah Arnold
Date: 6/1/2023
*/ 

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
  // declare some variable for initial time placeholder
  int hours, minutes, seconds;
  char c;
  // cout to display request for user to enter time
  std::cout << "Please enter initial time using the following format [hh:mm:ss]: ";
  // cin some variable to get initial time from user
  std::cin >> hours >> c >> minutes >> c >> seconds;
  // begin loop
  /*
  bool quit = false;
  while (!quit) {
    if (option_one_chosen) {
      hours++;
      display_time
    }
    if (option_two_chosen) {
      minutes++;
      display_time
    }
    if (option_three_chosen) {
      seconds++;
      display_time
    }
    if (option_quit_chosen) {
      quit = true;
      // program should now quit
    }
  }
  
  */
  // display the menu

  // decision branching
  // if add hour?
    // add hour
    // display time
  // if add minute?
    // add minute
    // display time
  // if add second?
    // add second
    // display time
  // if exit?
    // exit

  // end loop
  std::cout << std::setfill('0') << std::setw(2) << hours << c << std::setfill('0') << std::setw(2) << minutes << c << std::setfill('0') << std::setw(2) << seconds;
}