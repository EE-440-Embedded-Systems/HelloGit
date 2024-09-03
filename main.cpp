#include <iostream>
#include <cstdlib>

/**
 * TODO:
 * 1. Modify the program to output "Hello, git!" rather than "Hello, world!"
 * 2. Create a commit with the changes from step 1.  Use "Change output" as the commit message
 * 3. Rename printer to writer
 * 4. Create a commit with the changes from step 3.  Use "Rename printer to writer" as the commit message
 * 5. Push all commits
 */
int main(int argc, char **argv)
{
  /**
   * @brief Lambda used for writing a message to the standard output (std::cout)
   *
   * Lambdas are objects which can be used like functions.  Details can be found at:
   * https://en.cppreference.com/w/cpp/language/lambda
   *
   * The 'auto' keyword deduces the type of a variable.  In this case, it declares printer's type to be
   * the type of the lambda assigned to printer.
   */
  auto printer = [] () { std::cout << "Hello, world!" << std::endl; };

  // Use printer like a function to print a message
  printer();

  // Exit with a successful exit code
  std::exit(EXIT_SUCCESS);
}
