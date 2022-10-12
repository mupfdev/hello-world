# Hello world

[![CMake](https://github.com/mupfdev/hello-world/workflows/cmake.yml/badge.svg)](https://github.com/mupfdev/hello-world/actions/workflows/cmake.yml)

A simple project template.

## Compiling

The configuration must be adjusted individually for each project.  These
settings are located in the file
[project_config.cmake](cmake/project_config.cmake).

### Windows

The easiest way to get the hello world up and running is Visual Studio
2022 with [C++ CMake tools for
Windows](https://docs.microsoft.com/en-us/cpp/build/cmake-projects-in-visual-studio)
installed.  Simply open the cloned repository via `File -> Open ->
Folder`.  Everything else is set up automatically and all required
dependencies are fetched at compile time.

### Linux

Hello world can also be compiled on Linux with the included CMake
configuration.

```bash
mkdir build
cd build
cmake ..
make
````

## License and Credits

This project is under [public domain](http://creativecommons.org/publicdomain/zero/1.0/).

To the extent possible under law, Michael Fitzmayer has waived all
copyright and related or neighboring rights to hello world.
This work is published from: Germany.
