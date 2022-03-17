# How to use
1. Create an folder with `mkdir build`, enter the folder with `cd build` and then `cmake ..`
2. Use `make`
3. Use `./programa [Dictionary file] [Text file]`

# Uses of program
This program can be used to find wrong words on the `Text file` that dont exist on `Dictionary file`, it will print the words that have the less "distance" using the levenshtein calculation. Currently, the program does this by printing it out and is very slow on big files.

# Dictionary file
It's a simple file containing all words that "exists" and the program have to be aware.

Example:  
Apple  
Banana  
House  
Sky  
Plane  
