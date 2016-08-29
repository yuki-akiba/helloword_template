#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

# Force autoconf to be at least this version number.
AC_PREREQ([2.69])

# configure.ac must start with 'AC_INIT' macro.
#AC_INIT([FULL-PACKAGE-NAME], [VERSION], [BUG-REPORT-ADDRESS], [TARNAME], [URL])
AC_INIT([helloworld], [0.0.1], [helloworld@xxx.com], [helloworld], [http://helloworld.com])

# Configure the automake with the following options.
# foreign - no automake flavours
# parallel-tests - use parallel-tests
# 1.11 - requires automake 1.11 or newer because of parallel-tests feature
# -Wall - turn on all the warnings
# -Werror - treat warnings as errors
AM_INIT_AUTOMAKE([foreign parallel-tests subdir-objects 1.11 -Wall -Werror])
# Display little info when building, or "make V=1" to be verbose.
AM_SILENT_RULES([yes])
# Default is maintainer mode on without calling the macro below.
# You can use ./configure --enable-maintainer-mode.to enable it
# or ./configure --disable-maintainer-mode.to disable it manually.
AM_MAINTAINER_MODE([enable])

# Declare the directory where to find extra MACROs
AC_CONFIG_MACRO_DIR([m4])

# Checks for programs.
# * These macros check for the presence or behavior of particular programs.
#   They are used to choose between several alternative programs and to
#   decide what to do once one has been chosen.
# * You can use these check results in the following procedures.
## Check particular programs
AC_PROG_INSTALL
# Determine compiler
AC_PROG_CXX
# Enable c++11 with non strict check. You can make it strictly by using
# "mandatory" or left unspecified.for the 2nd argument.
AX_CXX_COMPILE_STDCXX_11([], [optional])

# Using libtool
LT_INIT

# Check boost lib
AX_BOOST_BASE([1.47],,AC_MSG_ERROR([This pj needs boost lib while it is not found.]))
AX_BOOST_THREAD

## Check customized programs
AC_ARG_ENABLE([foo], AS_HELP_STRING([--enable-foo], [Enable feature foo]))
AS_IF([test "x$enable_foo" = "xyes"],
      [
       AC_CHECK_PROG(has_foo, foo, [yes], [no])
       AS_IF([test "x$has_foo" = "xno"],
             AC_MSG_ERROR([foo is enabled but executable not found.]))
       ],
      [has_foo=no])

# Checks for libraries.

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
#
# Checks for system services.

# Output variable into Makefile/.am so that you can use the variable
# in Makefile/.am when AC_OUTPUT is called.
OPTFOO="--foo-opt"
AC_SUBST(OPTFOO)

# customized environment variable
AC_ARG_VAR([ENVFOO], [customized environment variable envfoo])

AC_CONFIG_FILES([Makefile src/Makefile unittests/Makefile])
AC_OUTPUT
