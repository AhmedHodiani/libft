BUILD_PATH ?= ./build
LIB_NAME = $(BUILD_PATH)/libft.a

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
OBJS			= $(SRCS:src/%.c=$(BUILD_PATH)/obj/%.o)

CC				= cc
CFLAGS			= -Wall -Wextra -Werror -Iinclude


all: $(LIB_NAME)

$(LIB_NAME): $(OBJS)
	ar rcs $(LIB_NAME) $(OBJS)

$(BUILD_PATH)/obj/%.o: src/%.c
	@mkdir -p $(BUILD_PATH)/obj
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(BUILD_PATH)/obj

fclean: clean
	@rm -rf $(BUILD_PATH)

re: fclean $(LIB_NAME)

.PHONY: clean fclean all re
