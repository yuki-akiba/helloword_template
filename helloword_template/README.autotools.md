Overview
--------

This is a c++ project build template based on GNU autotools, which consists of
three main components that you can learn about them through links listed below.

Officail links:

 * Autoconf Manual
   * https://www.gnu.org/savannah-checkouts/gnu/autoconf/manual/autoconf-2.69/html_node/index.html
 * Automake Manual
   * https://www.gnu.org/software/automake/manual/automake.html

Other recommended links:

 * Autotools Mythbuster
   * https://autotools.io/index.html

Autotools
---------

Autotools is a suite of tools for program building in Unix-like platforms and
to help you to *make* program much more easily.

It consists of three main tools below:

  * Autoconf - is a tool for producing shell script - *configure*
   that automatically configures the Build to adapt to many kinds
   of Posix-like systems. It is used to generate *configure* script
   from *configure.ac* file, written in a mixture of *m4* macros.
  * Automake - is a tool for automatically generating Makefile.in
   from files called Makefile.am.

Project Layout
--------------

This sample project has layout below.

    helloworld_template/
          m4/
          configure.ac
          Makefile.am
          src/
            Makefile.am
          unittests/
            Makefile.am
