# Progress
Text-based progress bar for C++.

# Build Instructions
To include Progress in any code, just include the header file "progress.h". In order to use the class, you can do the following:
```
  progress p1(100); //initialize a progress class with maximum value of 100, default width: 10
  p1.set_current(20); //set the current value out of 100, to 20. Equivalent to %20
  cout<<p1<<endl; //print the progress bar to standard output
  
  p1.set_total(1000); //set the maximum value to 1000
  p1.set_current(500); //out of 1000, equivalent to %50
  p1.set_fill('+'); //set the fill character, default is '='
  cout<<p1<<endl;
  
  progress p2(100, 20, 'X'); //parameters: total value, width (for the bar), fill character
```
