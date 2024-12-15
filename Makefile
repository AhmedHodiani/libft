SRCS			= src/ft_atoi.c src/ft_bzero.c \
					src/ft_calloc.c src/ft_isalnum.c \
					src/ft_isalpha.c src/ft_isascii.c \
					src/ft_isdigit.c src/ft_isprint.c \
					src/ft_memchr.c src/ft_memcmp.c \
					src/ft_memcpy.c src/ft_memmove.c \
					src/ft_memset.c src/ft_split.c \
					src/ft_strchr.c src/ft_strdup.c \
					src/ft_strjoin.c src/ft_strlcat.c \
					src/ft_strlcpy.c src/ft_strlen.c \
					src/ft_strncmp.c src/ft_strnstr.c \
					src/ft_strrchr.c src/ft_strtrim.c \
					src/ft_substr.c src/ft_tolower.c \
					src/ft_toupper.c src/ft_itoa.c \
					src/ft_strmapi.c src/ft_striteri.c \
					src/ft_putchar_fd.c src/ft_putendl_fd.c \
					src/ft_atof.c src/ft_strcmp.c
OBJS			= $(SRCS:src/%.c=obj/%.o)

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -Iinclude
NAME			= libft.a

GREEN   = \033[32m
BLUE    = \033[34m
RESET   = \033[0m

# NUM_SRCS = $(words $(SRCS))
# DIVIDE_BY_4_CEIL = $(shell echo "($(NUM_SRCS) + 3) / 4" | bc)

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


obj/%.o: src/%.c
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
