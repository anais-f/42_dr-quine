NAME_COLLEEN = Colleen
NAME_GRACE = Grace
NAME_SULLY = Sully

RC = rustc

all: colleen grace sully

colleen:
	@$(RC) Colleen.rs -o $(NAME_COLLEEN) && ./$(NAME_COLLEEN)

grace:
	@$(RC) Grace.rs -o $(NAME_GRACE) && ./$(NAME_GRACE)

sully:
	@$(RC) Sully.rs -o $(NAME_SULLY) && ./$(NAME_SULLY)

clean:
	@echo "Nothing to clean (no object files)"

fclean: clean
	rm -f $(NAME_COLLEEN) $(NAME_GRACE) $(NAME_SULLY) Grace_kid.rs tmp

re: fclean all
