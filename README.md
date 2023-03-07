# Hello World using ICU API

Note: instructions expect that you are in linux and installed icu.

## How to build
```
g++ main.cpp -o main `pkg-config --libs --cflags icu-uc icu-i18n icu-io`
genrb -d locales ./locales/*.txt
```
## How to run
follow build instructions then run by executing `main` file.

The Program will print "Hello World" translated into the default language of your system (if exists else it will use the root language which is "en_US").

if you want to change the language of the program you can execute this command with replacing en_US to the language of your choice (it should exist in the locales directory or the program will use the root language).
```
LANG="en_US" ./main
```
