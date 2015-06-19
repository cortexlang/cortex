# Contributing

This document describes the steps to get started with Cortex development as well as the 'rules of engagement'. The overall goal is to have a lean, not mean, development process. 

## Requirements

As of now, Cortex can only be built in 32-bit or 64-bit Linux. It is recommended to use an Ubuntu virtual machine. The examples hereby are provided for `apt-get`.

Install the libxml2 development headers (required for building the XML front end).

```
sudo apt-get install libxml2-dev
```

Install Flex (the lexer used by the language interpreter).

```
sudo apt-get install flex
```

Install Bison (the parser used by the language interpreter).

```
sudo apt-get install bison
```

## Download the project from GitHub.

You can use the GitHub desktop application, or type:

```
sudo git clone https://github.com/Seldomberry/Cortex.git
```

## Building

Setup the environment for building and running Cortex:

```
source configure
```

From the Cortex root directory, run the command:

```
make
```

Now you can use the cortex interpreter to run a cortex script:

```
cortex filename.cortex
```

You can also start the cortex shell which allows exploring the object store:

```
cx.h
```

To validate that your build is sound run the testsuite with the following command:

```
test/language/run.sh
```

You should get `OK` or `FAIL: not implemented` for all test cases.

## Making changes

Modify any files. Then build again (`make` from the root directory). Run test cases.

The buildsystem doesn't currently resolve dependencies on header files, so changes that affect header files only won't usually trigger a rebuild. When making changes to headers only it is safest to do a `make clean all`. It is highly recommended to do a `make clean all` after making changes to the core. 

Please ensure:

 - There is an issue that documents the change.
 - Follow the coding style of the file you're changing. If you really want to change it, do so consistently in the whole project. And have a good reason for it (aesthetics is not a good reason :-).

## Committing changes

Before committing your changes:
 - Verify that the code compiles without warnings.
 - Run testcases to ensure that you didn't break anything.
 - Create tests for the added functionality. If it is not tested, it doesn't work.
 - Changes to to the core and language have to be reviewed by one of the contributors.
 - Use your own judgement to decide whether a review is required for other changes.

Commit titles and descriptions:

- Titles should not exceed 50 characters.
- Avoid dots (.) at the end of titles.
- Use full grammar and spelling and punctuation for descriptions.

## Submitting issues

- Use concise but precise titles
- Avoid dots (.) at the end of titles.
- Use full grammar and spelling and punctuation for descriptions.