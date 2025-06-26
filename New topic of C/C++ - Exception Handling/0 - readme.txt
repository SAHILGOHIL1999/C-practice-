What is Exception Handling?
---------------------------
Exception handling in C++ is a mechanism to handle runtime errors gracefully. Instead of crashing your program when an error occurs, you can "catch" the error and handle it appropriately. This makes your programs more robust and user-friendly.
Key Components:

1. try block: Contains code that might throw an exception
2. throw statement: Used to signal that an error has occurred
3. catch block: Handles the exception when it's thrown

Basic Syntax:
-------------
try {
    // code that may throw an exception
    throw some_exception;
}
catch (ExceptionType1 e1) {
    // handle ExceptionType1
}
catch (ExceptionType2 e2) {
    // handle ExceptionType2
}
catch (...) {
    // catch-all handler for any exception
}
