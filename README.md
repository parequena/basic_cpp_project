
# Basic CPP Project

This is a simplified version of [Lefticus cpp_started_project](https://github.com/lefticus/cpp_starter_project) modified to create my own project and file structure.

## Structure
- **cmake :** This folder is from original project (template) and has some features very usefull to CPP projects. Some things had been deleted but you can check the [original project's folder](https://github.com/lefticus/cpp_starter_project/tree/master/cmake)
- **inc :** *.h* and *.hpp* files of the project
- **lib :** All external/internal libraries to be compilled. I didn't tested with external *CMakeLists.txt* files and I don't think that can be possible, but you can always test it yourself.
- **src :** Source files of the project. All *.cpp* files of this folder are searched with a *[GLOB_RECURSE](https://cmake.org/cmake/help/latest/command/file.html#glob-recurse)* and this can cause some troubles.

##
### Clarifications
- This project has not been tested on a real project and I will (for sure) change this project whenever I test it on a real project and get new knowledge about cmake.
- I have never done a cmake project and my klowledge is very basic, you can obviously give some feedback and imrpovements on this project via Github.

## About me
I am Pablo Requena a CPP passionate and specialist (If you can really say that thing), but I am always learning and improoving myselft and my code.
Graduated in Computer Engineering from the [University of Alicante](https://www.ua.es/) and Master in Videogame Programming from the [Complutense University of Madrid](https://www.ucm.es/)

### Socials
If you want to get in touch, or ask something, you can do it via some social networks
[Twitter](https://twitter.com/conPdePABLO)
[LinkedIn](https://www.linkedin.com/in/parequena/)
[Github](https://github.com/parequena)