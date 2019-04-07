# Debug C++ with VS Code and WSL

Debug C++ with VS Code and WSL

## Prerequisites

- Windows Subsystem for Linux [enabled](https://docs.microsoft.com/en-us/windows/wsl/install-win10)
- `g++` and `gbd` installed on WSL (e.g. `sudo apt install g++ gbd -y` on Ubuntu)
- The provided `.vscode` folder in your working directory

To start debugging a file:

1. Make sure you have the file that you want to debug currently open
1. Place breakpoints in VS Code
1. Press `F5`

If you want input from `stdin`, provide in an `.in` file with the same name as your `.cpp` file (e.g. if you have `main.cpp`, then you `main.in` for input)
