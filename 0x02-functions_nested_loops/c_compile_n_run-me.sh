#!/bin/bash

# This script compile and run the c program file specified

filename=$1

gcc $filename -o obj

./obj
