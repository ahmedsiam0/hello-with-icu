# Hello World using ICU API

Note: instructions expect that you are in linux and installed icu.

## How to build
```
autoreconf --install
./configure --prefix path_of_installation
make
make install
```
## How to run
follow build instructions then run by executing `hello_with_icu` file in the `path_of_installation/bin`.

The Program will print "Hello World" translated into the default language of your system (if exists else it will use the root language which is "en").
if you want to change the language of the program you can execute this command with replacing en to the language of your choice (it should exist in the locales directory or the program will use the root language)
```
LANG="en" ./hello_with_icu
```
