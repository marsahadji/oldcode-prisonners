# oldcode-prisonners

## Overview

This project implements the classic "Prisoner's Dilemma" game using C++ and Qt 5. It simulates multiple rounds of the game, allowing for configurable strategies and number of rounds. The results are displayed in a Qt-based GUI.

## Features

- Simulates multiple rounds of the Prisoner's Dilemma.
- Configurable number of rounds and strategies.
- Outputs results to a Qt-based GUI.

## Requirements

- C++11 or higher
- Qt 5
- CMake 3.10 or higher

## Building

1. Clone the repository:
    ```sh
    git clone https://github.com/marsahadji/oldcode-prisonners.git
    cd oldcode-prisonners
    ```

2. Create a build directory and navigate into it:
    ```sh
    mkdir build
    cd build
    ```

3. Run CMake to configure the project:
    ```sh
    cmake .. -DCMAKE_PREFIX_PATH=/path/to/Qt5
    ```

4. Build the project:
    ```sh
    make
    ```

## Usage

Run the executable generated in the build directory:
```sh
./prisoners_dilemma
```

## Main Code

The main C++ code is located in `main.cpp` and contains the core logic for the game simulation.
## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.