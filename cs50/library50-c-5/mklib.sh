#!/bin/sh
gcc -c -ggdb -std=c99 cs50.c -o cs50.o
ar rcs libcs50.a cs50.o
chmod 0644 cs50.h libcs50.a
mkdir -p /usr/local/include
chmod 0755 /usr/local/include
mv -f cs50.h /usr/local/include
mkdir -p /usr/local/lib
chmod 0755 /usr/local/lib
mv -f libcs50.a /usr/local/lib
