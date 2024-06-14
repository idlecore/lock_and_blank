@echo off
if not exist "bin" mkdir "bin"
if not exist "obj" mkdir "obj"
@echo on

cl.exe /O2 /W4 /Fe:.\\bin\\lock_and_blank.exe /Fo"obj\\" src\lock_and_blank.cpp
