# fixedpointdecimal
This is a fixed point decimal package that was originaly meant to augment the fixed point decimal operations in noisepage.
The package implements decimals as 128 bit integers and stores them in scaled format. Ie the number 12.23 with scale 5 gets stored
as 1223000. The class implemented was meant as runtime type with scale being dynamically interpreted during runtime
from the catalog using the JIT compilation engine. Addition and subtraction require two decimals of the same scale. Decimal multiplication
accepts an argument of lower scale and returns a decimal in the higher scale. Decimal division accepts an argument of the denominator scale
and returns the decimal in numerator scale. A rescale decimal function is also provided.

The following files are included :-

decimal.cpp - The core fixed decimal package supporting decimals with fixed precision(38) and a max scale of 38        decimal_multiplication_generator.py  - Generates tests for the multiplication operations
magic_number_generator.py - To optimize multiplication and division with specific constants we can generate precompiled constats to speed it up

Decimal_Division_Generator.java  - Generates tests for the division operations
decimal.o - binary for compiling as a shared library                            
magic_numbers.h - magic constants that speed up the decimal operations
decimal.h - You know what this is                        
libdecimal.so - the decimal package as a shared library                       
main.cpp - A testing file to run the tests provided



The generated test files for multiplication and division can be found at
https://drive.google.com/drive/folders/1tA8jN-83ImBKyifN6PILtsanQ7jFT-J9?usp=sharing
These contain 10^7 and 3.8*10^7 tests respectively.
