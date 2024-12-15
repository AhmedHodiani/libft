SRCS			= ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
				ft_isascii.c ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c \
				ft_memcpy.c ft_memmove.c ft_memset.c ft_split.c ft_strchr.c ft_strdup.c \
				ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c \
				ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_itoa.c \
				ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putendl_fd.c \
				ft_atof.c ft_strcmp.c
OBJS			= $(SRCS:%.c=obj/%.o)

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -I.
NAME			= libft.a

GREEN   = \033[32m
BLUE    = \033[34m
RESET   = \033[0m

NUM_SRCS = $(words $(SRCS))
DIVIDE_BY_4_CEIL = $(shell echo "($(NUM_SRCS) + 3) / 4" | bc)

# all: header $(NAME) header_done
all: $(NAME)

# header:
# 	@echo "$(BLUE)"
# 	@echo "============================================================================================"
# 	@echo "                         Building $(NAME) Library"
# 	@echo "============================================================================================"
# 	@echo $(SRCS) | tr ' ' '\n' | awk 'NR % 4 == 1 {if (NR > 1) print ""} {printf "%s\t\t", $$0} END {print ""}'
# 	@echo "============================================================================================"
# 	@echo "$(RESET)"

# header_done:
# 	@echo "$(GREEN)"
# 	@echo "============================================================================================"
# 	@echo "                         Building $(NAME) Library"
# 	@echo "============================================================================================"
# 	@echo $(SRCS:%.c=%.o) | tr ' ' '\n' | awk 'NR % 4 == 1 {if (NR > 1) print ""} {printf "%s\t\t", $$0} END {print ""}'
# 	@echo "============================================================================================"
# 	@echo "$(RESET)"


$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
# @tput cuu 1 && tput el
# @tput cuu 1 && tput el
# @tput cuu 1 && tput el
# @tput cuu 1 && tput el
# @tput cuu 1 && tput el
# @tput cuu 1 && tput el
# @tput cuu 1 && tput el

# @echo "Ceiling of the number of source files divided by 4: $(DIVIDE_BY_4_CEIL)"
# @for i in $(shell seq 1 $(DIVIDE_BY_4_CEIL)); do \
# 	tput cuu 1 && tput el; \
# done


obj/%.o: %.c
	@mkdir -p obj
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@echo "$(BLUE)Cleaning object files...$(RESET)"
	@rm -rf obj
	@echo "$(GREEN)Object files cleaned successfully!$(RESET)"

fclean: clean
	@echo "$(BLUE)Removing $(NAME)...$(RESET)"
	@rm -f $(NAME)
	@echo "$(GREEN)Library $(NAME) removed successfully!$(RESET)"

re: fclean $(NAME)

.PHONY: clean fclean all re
