NAME_COLLEEN = Colleen
NAME_GRACE = Grace
NAME_SULLY = Sully

# *********************************VARIABLES**************************************** #

SRCS_DIR = .

SRCS_COLLEEN = Colleen.c
SRCS_GRACE = Grace.c
SRCS_SULLY = Sully.c

SRCS_DIR = .

OBJS_DIR = ./objs

OBJS_COLLEEN = $(OBJS_DIR)/Colleen.o
OBJS_GRACE = $(OBJS_DIR)/Grace.o
OBJS_SULLY = $(OBJS_DIR)/Sully.o

DEPS_COLLEEN = $(OBJS_DIR)/Colleen.d
DEPS_GRACE = $(OBJS_DIR)/Grace.d
DEPS_SULLY = $(OBJS_DIR)/Sully.d

DEPS = $(DEPS_COLLEEN) $(DEPS_GRACE) $(DEPS_SULLY)

INCS = ./incs

# **********************************COMMANDS**************************************** #

CC = cc

CFLAGS = -Werror -Wextra -Wall -g3 -MMD -MP

CPPFLAGS = -I$(INCS)

RM = rm -rf

DIR_DUP = mkdir -p $(@D)

MAKEFLAGS += --no-print-directory

# **********************************RULES**************************************** #

-include $(DEPS)

all:	$(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY)

colleen: $(NAME_COLLEEN)

grace: $(NAME_GRACE)

sully: $(NAME_SULLY)

$(NAME_COLLEEN): $(OBJS_COLLEEN)
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -o $@

$(NAME_GRACE): $(OBJS_GRACE)
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -o $@

$(NAME_SULLY): $(OBJS_SULLY)
	$(CC) $(CFLAGS) $(CPPFLAGS) $^ -o $@

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@


clean :
	@echo "Nothing to clean (no object files)"

fclean : clean
	$(RM) $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY) Grace_kid.c tmp Sully_0.c Sully_1.c Sully_2.c Sully_3.c Sully_4.c Sully_5.c

re : fclean all

.PHONY: all clean fclean re grace colleen sully FORCE
FORCE:
