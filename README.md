# Progress
Text-based progress bar for C++.

# Build Instructions
In order to use `Progress`, just include the header file `progress.h`. Look at the following examples on how to use the class:
```
  progress p1(100); //initialize a progress class with maximum value of 100, default bar width: 10
  p1.set_current(20); //set the current value to 20 out of 100, equivalent to %20
  cout<<p1<<endl; //print the progress bar to standard output
  
  p1.set_total(1000); //set the maximum value to 1000
  p1.set_current(500); //out of 1000, equivalent to %50
  p1.set_fill('+'); //set the fill character, default is '='
  cout<<p1<<endl;
  
  progress p2(100, 20, 'X'); //parameters: total value, bar width in characters, fill character
```

# Future Task List
- [ ] Provide a method to easily customize the progress bar
- [ ] Evaluate and plan for thread-safety
- [ ] Incorporate C++11 threading facilities
