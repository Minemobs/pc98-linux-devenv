# Names of the compiler and friends
APP_BASE = C:\DJGPP
AS 		= $(APP_BASE)\as.exe
CC 		= $(APP_BASE)\gcc.exe
LD 		= $(APP_BASE)\ld.exe
OBJCOPY 	= $(APP_BASE)\objcopy.exe
STRIP 		= $(APP_BASE)\strip.exe

# libraries and paths
LIBS	 	=
INCLUDES 	=          

# Compiler flags
ASM_FLAGS 	= -mcpu=i486 -march=i486 
LDFLAGS 	=
CFLAGS 		= -mcpu=i486 -march=i486 -O3
LDSCRIPT 	=
OCFLAGS		=

# What our application is named
TARGET	= bin/sample.exe

all: $(TARGET)

OBJFILES = build/sample.o 

$(TARGET): $(OBJFILES)
	gcc.exe $(LDFLAGS) $(OBJFILES) $(LIBS) -o $(TARGET)
	strip.exe $(TARGET)

build/sample.o: src/sample.c
	gcc.exe $(CFLAGS) -c src/sample.c -o build/sample.o
	
clean:
	del $(OBJFILES)
	del $(TARGET)
