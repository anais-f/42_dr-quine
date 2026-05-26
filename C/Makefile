NAME = Colleen

# *********************************VARIABLES**************************************** #

SRCS_DIR = .

SRCS =\
		Colleen.c


SRCS := $(SRCS:%=$(SRCS_DIR)/%)

OBJS_DIR = ./objs

OBJS = $(SRCS:$(SRCS_DIR)/%.c=$(OBJS_DIR)/%.o)

INCS = ./incs

DEPS = $(OBJS:.o=.d)

# **********************************COMMANDS**************************************** #

CC = cc

CFLAGS = -Wextra -Wall -g3 -MMD -MP

CPPFLAGS = -I$(INCS)

RM = rm -rf

DIR_DUP = mkdir -p $(@D)

MAKEFLAGS += --no-print-directory

# **********************************RULES**************************************** #

all:	$(NAME)

-include $(DEPS)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(OBJS) -o $(NAME)

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@$(DIR_DUP)
	$(CC) $(CFLAGS) $(CPPFLAGS) -c $< -o $@

clean :
	$(RM) $(OBJS_DIR)

fclean : clean
	$(RM) $(NAME)

re : fclean all

.PHONY: all clean fclean re FORCE
FORCE:
