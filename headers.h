
void welcomeScreen(void);    // Introduction Page & choice screen 
void exitScreen(void);       // program end screen 
void screenCleaner(void);    // clears the output screen and input buffers 
void userInput(int);         // takes the user input  
int digitChecker(int, int);  // validates each digit of input number 
void conversion_Title(void); // title for all conversion outputs 
void tryAgain(int);          // try Again window 

// Binary Conversion functions 
void binary_decimal(long int);
void binary_octal(long int);
void binary_hexadecimal(long int);

// Decimal Conversion functions 
void decimal_binary(long int);
void decimal_octal(long int);
void decimal_hexadecimal(long int);

// Octal Conversion functions 
void octal_binary(long int);
void octal_decimal(long int);
void octal_hexadecimal(long int);

// Hexadecimal Conversion functions 
void hexadecimal_binary(char []);
void hexadecimal_octal(char []);
void hexadecimal_decimal(char []);
