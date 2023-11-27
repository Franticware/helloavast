#!/bin/bash
CFLAGS="-O2 -fno-exceptions -fPIC"
i686-w64-mingw32-g++ -c main.cpp $CFLAGS -o main.o
LFLAGS="-lm -s -static-libstdc++ -static-libgcc -static -mwindows"
i686-w64-mingw32-g++ main.o $LFLAGS -o helloavast.exe
