The package contains empty build folder. 
Run the following commands when inside the build folder.
```
cmake ..
make
Run program: ./app/shell-app
```
This will output the program in concatVector.cpp on the terminal.
You don't have to input any strings as it is already default in the program. To change the strings, 
go to concatVector.cpp and change the vector value.
## Working with VSC IDE ##
To view the output and code in VSC, simply open folder. You will then be able to view the source code.
In the code, grades as well as number of students are hardcoded instead of user input as nothing was specified in the question. 
The UML file is also attached with the package. 

To run the code on vsc, open GradeCourse.cpp file and click "run".
## Plugins
- Google C++ Sytle

    To include and use Google C++ Style formatter in VSC
    add: 
    // cpp general
    "C_Cpp.clang_format_style": "{ BasedOnStyle: Google, IndentWidth: 4, ColumnLimit: 0}" to settings.json in vsc.


- Git

git repo can be found at https://github.com/mahimaarora2208/software_development_for_robotics.git
