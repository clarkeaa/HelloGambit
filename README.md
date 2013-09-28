# HelloGambit
example of running compiled scheme for iOS via gambit

## usage
Assuming you have all the requirements met, just hit the compile&run button, then look at the console output of the app.

## requirements
- gambit-c 4.7.0 installed at /usr/bin/gsc

## notes
- uses xcode's build rules to recompile the scm file on run
- includes binary build of libgambc built against the iOS 6.1 SDK which is under lgpl

## references
- http://gambitscheme.org/wiki/index.php/Main_Page gambit-c
- http://www.animal-machine.com/blog/2012/12/calling-gambit-scheme-code-from-c/ "Calling Gambit Scheme from C"
