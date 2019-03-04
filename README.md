# cpp-playground

A pre-initialized playground for C++ with a working library, main file and test.

Uses the [Bazel](https://bazel.build/) build system, links in [Abseil](https://abseil.io/)
and [googletest](https://github.com/google/googletest) libraries.

The only pre-requisite to building and testing is installing Bazel ([instructions](https://docs.bazel.build/versions/master/install.html)). With bazel installed, the following will build, test and run the code.

```
# Build all targets.
bazel build :main

# Run the binary.
bazel run :main

# Execute tests.
bazel test :my_lib_test
```
