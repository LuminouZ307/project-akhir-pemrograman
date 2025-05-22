@echo off
echo [Compiling...]
g++ main.cpp modules/logic.cpp modules/util.cpp -o simulator.exe
if %errorlevel% neq 0 (
    echo Gagal compile.
    pause
    exit /b
)
echo [Running...]
simulator.exe
pause