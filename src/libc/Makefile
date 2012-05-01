CC		:= gcc
AR		:= ar
ECHO	:= echo
CP		:= cp -f
RM		:= rm -f

ROOT	+= ../../
GOAL	+= ./libc.a

CCFLAGS += -Wall
CCFLAGS += -ansi
#CCFLAGS	+= -O2
CCFLAGS	+= -g
CCFLAGS	+= -I.
CCFLAGS += -I./sys

ASFLAGS += -Wall

OBJS	+= ./string.o
OBJS	+= ./stdlib.o

.c.o:
	@$(ECHO) "Compiling $<..."
	@$(CC) $(CCFLAGS) -c $<

.S.o:
	@$(ECHO) "Compiling $<..."
	@$(CC) $(ASFLAGS) $(CCFLAGS) -c $<
	
all: $(GOAL)

$(GOAL) : $(OBJS)
	@$(AR) rcu $(GOAL) $(OBJS)
	@$(ECHO) "***" $(GOAL) "is built successfully! ***"
	@$(CP) $(GOAL) $(ROOT)lib/$(GOAL)

.PHONY: clean
clean:
	@$(RM) $(OBJS)
	@$(RM) $(GOAL)