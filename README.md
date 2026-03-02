# CS210 Portfolio Project: Corner Grocer Item Tracker

**Name:** Mohammad Naim  
**Course:** CS210  
**Project:** Project Three – Corner Grocer Item Tracker  
**Date:** February 22, 2026  

## Project Summary
This program reads the Corner Grocer’s daily purchase list and counts how many times each item appears. Users can:  

- See the frequency of a specific item  
- See all items with their counts  
- View a histogram of item frequencies  

It also creates a backup file called `frequency.dat` with all item counts. This helps the store know which items are popular and supports better inventory decisions.

## What I Did Well
- Implemented a clear, easy-to-read ItemTracker class with well-defined methods.  
- Used meaningful variable names and added comments for clarity.  
- Implemented input validation to ensure the program runs smoothly.  
- Ensured the program reads the input file safely and creates a backup file.

## Areas for Improvement
- Could add error handling for missing or corrupted input files.  
- The program could be optimized for larger datasets to make it more efficient.  
- Adding unit tests could improve security and reliability.

## Challenges and How I Overcame Them
- Implementing the histogram display with proper alignment was challenging.  
- I reviewed online C++ documentation and tutorials on maps and loops to solve it.  
- Adding comments and breaking the code into methods helped me debug more efficiently.

## Transferable Skills
- Reading and writing files in C++  
- Using maps to store and process data  
- Writing maintainable and well-structured code  
- Designing programs with user-friendly menus and clear output

## Maintainability, Readability, and Adaptability
- Code is divided into separate class files (`ItemTracker.cpp` and `.h`) for organization.  
- Clear method names and comments make it easy to understand.  
- Backup file creation and menu-driven design make the program adaptable for future changes.
