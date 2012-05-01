CC		:= gcc
AR		:= ar
ECHO	:= echo
CP		:= cp -f
RM		:= rm -f

ROOT	+= ./
GOAL	+= ./blackant.exe

CCFLAGS += -Wall
#CCFLAGS	+= -O2
CCFLAGS	+= -g
CCFLAGS	+= -I.
CCFLAGS += -I./include
CCFLAGS += -I./include/libc

ASFLAGS += -Wall

OBJS	+= ./main.o

LIBS	+= ./lib/libc.a

.c.o:
	@$(ECHO) "Compiling $<..."
	@$(CC) $(CCFLAGS) -c $<

.S.o:
	@$(ECHO) "Compiling $<..."
	@$(CC) $(ASFLAGS) $(CCFLAGS) -c $<
	
all: $(GOAL)

$(GOAL) : $(OBJS)
	@$(CC) -o $(GOAL) $(OBJS) -static $(LIBS)
	@$(ECHO) "***" $(GOAL) "is built successfully! ***"

.PHONY: clean
clean:
	@$(RM) $(OBJS)
	@$(RM) $(GOAL)