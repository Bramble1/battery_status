#!/bin/bash
gcc -W -g -o sbat src/main.c src/interface/interface.c src/interface/interface.h src/interface/core/core.c src/interface/core/core.h -lm   
