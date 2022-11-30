NAME := rtv1
CC := gcc
FILES := main.c get_camera.c get_scene.c
SRCSDIR := srcs
SRCS = $(foreach SRC, $(FILES), $(shell find $(SRCSDIR) -name $(SRC)))
OBJSDIR := objs
OBJS := $(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)
OBJSDIRS = $(sort $(dir $(OBJS)))
WWW := -Wall -Wextra -Werror -Wconversion
MINILIB := -lmlx -framework OpenGL -framework AppKit
INCS := -I includes -I libft/includes
HDRFILES := rt.h camera.h object.h scene.h
HDRS = $(foreach hdr, $(HDRFILES), $(shell find includes -name $(hdr)))
HDRS += libft/includes/libft.h
LIBFT := $(INCS) -L libft/ -lft
CFLAGS := $(WWW) $(MINILIB) $(LIBFT)
OFLAGS := $(WWW) $(INCS) 

.PHONY: all libftcomp clean fclean re run debug drun

test:
	@echo $(HDRS)
	@echo $(SRCS)
	@echo $(OBJS)

all: $(NAME)

$(NAME): .prerequisites libft/libft.a $(OBJS) Makefile
	@touch .prerequisites
	@echo "Compiling project binary\n"
	@$(CC) $(OBJS) $(CFLAGS) -o $@

.prerequisites: $(OBJSDIRS) $(HDRS) $(SRCS)

$(OBJSDIRS):
	@mkdir -p $@

$(HDRS):
	touch $@

$(SRCS):
	touch $@

$(OBJS): $(OBJSDIR)/%.o:$(SRCSDIR)/%.c $(HDRS) Makefile
	@$(CC) $(OFLAGS) -c $< -o $@

libft/libft.a:
	@make --no-print-directory -C ./libft

debuglib:
	@make --no-print-directory -C ./libft testlib

sanilib:
	@make --no-print-directory -C ./libft testlibsani

clean:
	@echo "Cleaning project object files\n"
	@rm -rf $(OBJSDIR)

fclean: clean
	@make --no-print-directory -C ./libft fclean
	@echo "Cleaning project binary\n"
	@rm -f $(NAME)
	@rm -f .prerequisites

re: fclean all

run: all
	./$(NAME)

debug: OFLAGS += -g
debug: re

drun: debug
	lldb $(NAME) 

leaks: OFLAGS += -g
leaks: fclean .prerequisites debuglib $(OBJS) Makefile 
	@touch .prerequisites
	@echo "Compiling project binary\n"
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	leaks -atExit -- ./$(NAME)

fsanitize: OFLAGS += -g -fsanitize=address
fsanitize: CFLAGS += -fsanitize=address
fsanitize: fclean .prerequisites sanilib $(OBJS) Makefile 
	@touch .prerequisites
	@echo "Compiling project binary\n"
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)
	./$(NAME)
