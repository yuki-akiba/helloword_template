# Specify the target name to be created.
TESTS = helloworld_unittest
check_PROGRAMS = $(TESTS)

# Specify source files needed to build
helloworld_unittest_SOURCES =
helloworld_unittest_SOURCES += testcode/sample_unittest.cpp
helloworld_unittest_SOURCES += gtest/gtest-all.cc gtest/gtest.h

# Extra objects (*.$(OBJEXT)) and libraries (*.a, *.la)
# can be added to a program by listing them in the _LDADD variable.
helloworld_unittest_LDADD =
helloworld_unittest_LDADD += $(top_srcdir)/src/helloworld/helloworld_proc-hello.o
# AM_CPPFLAGS is ignored in preference to a per-executable
# (or per-library) _CPPFLAGS variable if it is defined.
helloworld_unittest_CPPFLAGS =
helloworld_unittest_CPPFLAGS += -I$(top_srcdir)/src/
helloworld_unittest_CPPFLAGS += -I$(top_srcdir)/unittests/
helloworld_unittest_CPPFLAGS += -I$(top_srcdir)/src/helloworld
helloworld_unittest_CPPFLAGS += -I$(top_srcdir)/src/helloworld/factory

# This variable is used to pass extra flags to the link step of a program
# or a shared library. It overrides the AM_LDFLAGS variable.
helloworld_unittest_LDFLAGS =
helloworld_unittest_LDFLAGS += -L/usr/local/lib
helloworld_unittest_LDFLAGS += -lboost_system
helloworld_unittest_LDFLAGS += -lboost_thread
helloworld_unittest_LDFLAGS += -lpthread

# This variable is used to specify additional objects or libraries to link with.
LDADD =
# Any flags to pass to the C++ compiler.
#CXXFLAGS =
# The maintainer’s variant of CXXFLAGS.
AM_CXXFLAGS = -O2 -g
# The contents of this variable are passed to every compilation
# that invokes the C preprocessor;
# it is a list of arguments to the preprocessor.
# For instance, -I and -D options should be listed here.
# AM_CPPFLAGS is ignored in preference to a per-executable
# (or per-library) _CPPFLAGS variable if it is defined.
AM_CPPFLAGS =
# This is the variable the Makefile.am author can use to pass
# in additional linker flags.
# In some situations, this is not used,
# in preference to the per-executable (or per-library) _LDFLAGS.
AM_LDFLAGS =
