# Project: Project new_library
# Makefile created by Embarcadero Dev-C++ 6.3

CPP      = g++.exe
CC       = gcc.exe
WINDRES  = windres.exe
OBJ      = menu.o Book.o Library.o main_program.o
LINKOBJ  = menu.o Book.o Library.o main_program.o
LIBS     = -L"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib" -L"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/x86_64-w64-mingw32/lib" -static-libgcc
INCS     = -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/9.2.0/include"
CXXINCS  = -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/x86_64-w64-mingw32/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/9.2.0/include" -I"C:/Program Files (x86)/Embarcadero/Dev-Cpp/TDM-GCC-64/lib/gcc/x86_64-w64-mingw32/9.2.0/include/c++"
BIN      = "Project new_library.exe"
CXXFLAGS = $(CXXINCS) -std=c++11
CFLAGS   = $(INCS) 
DEL      = C:\Program Files (x86)\Embarcadero\Dev-Cpp\DevCpp.exe INTERNAL_DEL

.PHONY: all all-before all-after clean clean-custom

all: all-before $(BIN) all-after

clean: clean-custom
	${DEL} $(OBJ) $(BIN)

$(BIN): $(OBJ)
	$(CPP) $(LINKOBJ) -o $(BIN) $(LIBS)

menu.o: menu.cpp
	$(CPP) -c menu.cpp -o menu.o $(CXXFLAGS)

Book.o: Book.cpp
	$(CPP) -c Book.cpp -o Book.o $(CXXFLAGS)

Library.o: Library.cpp
	$(CPP) -c Library.cpp -o Library.o $(CXXFLAGS)

main_program.o: main_program.cpp
	$(CPP) -c main_program.cpp -o main_program.o $(CXXFLAGS)
