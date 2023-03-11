   // function prototype

   // WHAT IS IT?
   // Function declaration, w/o a body, before main()
   // Ensures that calls to a function are made with the correct arguments

   // IMPORTANT NOTES
   // Many C compilers do not check for parameter matching
   // Missing arguments will result in unexpected behavior
   // A function prototype causes the compiler to flag an error if arguments are missing

   // ADVANTAGES
   // 1. Easier to navigate a program w/ main() at the top
   // 2. Helps with debugging
   // 3. Commonly used in header files

   #include<stdio.h>

   void data(int,char[]);


   int main()
   {
       int age = 21;
       char name[] = "Samsung";

       data(age,name);

       return 0;

   }

    void data(int age, char name[])
   {
       printf("\nHello %s",name);
       printf("\nYour are %d years old",age);
   }