NAME_COLLEEN = Colleen
NAME_GRACE = Grace
NAME_SULLY = Sully

# *********************************VARIABLES**************************************** #

SRCS_DIR = .

SRCS_COLLEEN = Colleen.s
SRCS_GRACE = Grace.s
SRCS_SULLY = Sully.s

SRCS_DIR = .

OBJS_DIR = ./objs

OBJS_COLLEEN = $(OBJS_DIR)/Colleen.o
OBJS_GRACE = $(OBJS_DIR)/Grace.o
OBJS_SULLY = $(OBJS_DIR)/Sully.o

# **********************************COMMANDS**************************************** #

CC = nasm

GCC = gcc

LD = ld

CFLAGS = -f elf64

LDFLAGS = 

RM = rm -rf

DIR_DUP = mkdir -p $(@D)

MAKEFLAGS += --no-print-directory

# **********************************RULES**************************************** #

all:	$(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

colleen: $(NAME_COLLEEN)

grace: $(NAME_GRACE)

sully: $(NAME_SULLY)

$(NAME_COLLEEN): $(OBJS_COLLEEN)
	@$(GCC) $^ -o $@

$(NAME_GRACE): $(OBJS_GRACE)
	@$(GCC) $^ -o $@

$(NAME_SULLY): $(OBJS_SULLY)
	@$(GCC) $^ -o $@

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.s
	@$(DIR_DUP)
	$(CC) $(CFLAGS) $< -o $@

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY) Grace_kid.s tmp Sully_0.s Sully_1.s Sully_2.s Sully_3.s Sully_4.s Sully_4 Sully_3 Sully_2 Sully_1 Sully_0

re : fclean all

.PHONY: all clean fclean re grace colleen sully FORCE
FORCE:




