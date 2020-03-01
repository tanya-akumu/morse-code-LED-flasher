# Plentify Work Product

This is a starting point for the Plentify Embedded Work Product. This work product aims to test your ability to write easy to follow, clean and maintainable C99 while demonstrating good version control practices. In total this work product should not take you more than 3 hours.

---

## Setup Development Environment

### Fork this repository

All work will need to performed within a git repository allowing for easy analysis and organisation. To standardize, this repository has been set up as if we were starting a new project. You will need to fork this repository.

If you are unsure on how to do that then following [this guide](https://confluence.atlassian.com/bitbucket/forking-a-repository-221449527.html).
Please share your fork with us once you have made it. Once forked you can clone the repository and start working.

### Install Microchip MPLab X IDE

We currently perform the majority of our development work using Microchip's own [MPLab X IDE](https://www.microchip.com/mplab/mplab-x-ide), which has the debugging tools you will need, built in. You do not require the IPE, you can opt not to install it.

#### Download Links
* [MPLab X v5.30 for Windows](http://ww1.microchip.com/downloads/en/DeviceDoc/MPLABX-v5.30-windows-installer.exe)
* [MPLab X v5.30 for Linux](http://ww1.microchip.com/downloads/en/DeviceDoc/MPLABX-v5.30-linux-installer.tar)
* [MPLab X v5.30 for OSX](http://ww1.microchip.com/downloads/en/DeviceDoc/MPLABX-v5.30-osx-installer.dmg)

### Install Microchip XC32 compiler

Microchip uses a C compiler called [XC32](https://www.microchip.com/mplab/compilers), please install **v2.10**. XC32 will be required for compiling your code for the simulator, you will only require 32-bit microcontroller support.

#### Download Links
* [XC32 v2.10 for Windows](http://ww1.microchip.com/downloads/en/DeviceDoc/xc32-v2.10-full-install-windows-installer.exe)
* [XC32 v2.10 for Linux](http://ww1.microchip.com/downloads/en/DeviceDoc/xc32-v2.10-full-install-linux-installer.run)
* [XC32 v2.10 for OSX](http://ww1.microchip.com/downloads/en/DeviceDoc/xc32-v2.10-full-install-osx-installer.dmg)

## Development Process

While you are working through the task, you will be expected to follow our development process. This means following Gitflow and Barr Group Standards. All development should  be preformed on a new feature branch based off the *develop* branch. Commits should be made regularly and frequently with the emphasis being on smaller commits. Make sure to push frequently as well, to ensure no loss of work.

### General Code Principles to live by:
* **One function with one function** - functions should do what the name suggests and nothing more
* **Code should read like a book** - function and variable names should be clear and descriptive
* **Code should be understandable without context** - you should not need to understand how a function is implemented in order to understand the code in which it is used
* **Modularity is the key to maintainability** - separate code into modules that do not affect each other
* **Behaviour and Implementation are separate** - the specifics of your implementation should not affect how the code is used
* **Anticipate change** - where applicable expect values and functions to be changed and make that process simple
* **Satisfy specific requirements with general solutions** - within reason try to write generalised code that can be used outside of our specific application too
* **Develop incrementally** - take small steps and test along the way
* **Be consistent** - your style, syntax and formatting should be identical throughout
* **Write code for a different idiot** - make your code fool proof, someone else will have to read it in the future when you aren't there to explain it, make sure they don't misunderstand
* **Think once** - if there are calculations or complex sections of code that are repeated, write macros or functions for them so that you can ensure it is correct once and then not have to worry about it
* **Testing is free** - there isn't any harm in testing your code extensively and/or incrementally, rather do too much than too little
* **No magic numbers** - within reason #define or create variables for all numbers, this makes understanding their purpose easy

### Using the simulator

In order to run and test your code you will need to use the simulator. This is done by starting a debug session and selecting the simulator as the hardware tool. You can then you breakpoints, watches and step control to analyse your code. Follow [this tutorial](https://microchipdeveloper.com/tls0101:lab2) for more detail on how to use it. Note that we have already set the simulator as the default hardware tool.

---

# Task

The task is to create a Morse code LED flasher. The application should be able to take in an arbitrarily sized string of English characters and convert that string into a data structure which can be easily output through a GPIO pin. Try to follow the guidance above in terms of code style. We will be reviewing the quality of your code, git practice and whether it works. Please focus on doing the work in two parts, parsing the data and generating the morse code then only work on outputting it. We are less interested in a complete solution than quality work.

## Specifications
1. The [ITU standard](https://www.itu.int/dms_pubrec/itu-r/rec/m/R-REC-M.1677-1-200910-I!!PDF-E.pdf) should be used for the Morse code generation.
2. The task should broken into two parts, the parsing of the string and "flashing" of the LED.
3. Part 1 should have [unit tests](https://en.wikipedia.org/wiki/Unit_testing) written for it, in order to test the conversion process
4. Part 2 should have [integration tests](https://en.wikipedia.org/wiki/Integration_testing) written for it, in order to test the output of the morse code.
5. The timing of the dots and dashes should be configurable, however always meeting the requirements of the standard.
6. Only support alphanumeric and punctuation characters

## Resources
* [Barr Group Embedded C Standard](https://drive.google.com/open?id=15aWV4VPNEhwbvzFG0KJ-xm0BCG2i7CMD)
* [Gitflow](https://www.atlassian.com/git/tutorials/comparing-workflows/gitflow-workflow)
* [XC32 Compiler Documentation](http://ww1.microchip.com/downloads/en/DeviceDoc/50001686J.pdf)
* [PIC32MMxxxxGPMxxx Family Datasheet](http://ww1.microchip.com/downloads/en/DeviceDoc/PIC32MM0256GPM064-Family-Data-Sheet-DS60001387D.pdf)
* [ITU Morse Code standard](https://www.itu.int/dms_pubrec/itu-r/rec/m/R-REC-M.1677-1-200910-I!!PDF-E.pdf)
