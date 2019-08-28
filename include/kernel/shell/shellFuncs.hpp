#ifndef SHELLFUNCS_HPP
#define SHELLFUNCS_HPP

#include <libc/kprint.hpp>
#include <libc/string.hpp>
#include <libc/tty.hpp>

/**
 * @brief Prints the indicator for the shell.
 * 
 */
void printShellIndicator();

void clearShell();

void help();

void panic();

void printSplash();

void exit();

#endif /* SHELLFUNCS_HPP */