
@echo off
echo Compiling C++ files...

g++ -std=c++17 -Wall -Wextra 2dbruteforce.cpp MatrixSolution.cpp -o main.exe

if errorlevel 1 (
    echo.
    echo Compilation failed!
    pause
    exit /b 1
)

echo.
echo Compilation successful!
echo Running program...
echo.

main.exe

pause
