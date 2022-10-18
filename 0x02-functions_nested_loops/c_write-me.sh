#!/bin/bash

# A bash script for creating and empty C program


# Getting the filename from the command line
filename=$1

# Inserting the C boilerplate into the file
echo '#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	return (0);
}' > $filename

# Enabling execution mode for all users
chmod +x $filename

# Opening the file with the vi editor
vi $filename
