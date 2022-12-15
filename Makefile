NAME := rtv1
CC := gcc
CORESRC := main.c init.c get_frame.c
VECTORSRC := vec_add.c vec_dot.c vec_normalize.c vec_cross.c vec_length.c       \
	vec_reflect.c vec_divide.c vec_multiply.c vec_substract.c vec_to_rot.c      \
	rot_to_vec.c rad_to_deg.c deg_to_rad.c
CAMERASRC := get_camera.c
SCENESRC := get_scene.c
RENDERSRC := get_image.c add_pixel.c screenloop.c render.c canvas_to_viewport.c \
	trace_ray.c
SHAPESRC := intersect_shape.c intersect_sphere.c
INTERFACESRC := init_interface.c keys.c
PARSESRC := parse.c
FILES := $(CORESRC) $(CAMERASRC) $(SCENESRC) $(VECTORSRC) $(RENDERSRC)          \
	$(INTERFACESRC) $(PARSESRC) $(SHAPESRC)
SRCSDIR := srcs
SRCS = $(foreach SRC, $(FILES), $(shell find $(SRCSDIR) -name $(SRC)))
OBJSDIR := objs
OBJS := $(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)
OBJSDIRS = $(sort $(dir $(OBJS)))
WWW := -Wall -Wextra -Werror -Wconversion
MINILIB := -lmlx -framework OpenGL -framework AppKit
INCS := -I includes -I libft/includes
HDRFILES := rt.h rt_mlx.h vector.h camera.h object.h scene.h interface.h
HDRS = $(foreach HDR, $(HDRFILES), $(shell find includes -name $(HDR)))
HDRS += libft/includes/libft.h
LIBFT := $(INCS) -L libft/ -lft
CFLAGS := $(WWW) $(MINILIB) $(LIBFT)
OFLAGS := $(WWW) $(INCS) 

.PHONY: all libftcomp clean fclean re run debug drun

all: $(NAME)

$(NAME): .prerequisites libft/libft.a $(OBJS) Makefile
	@touch .prerequisites
	@echo "Compiling project binary\n"
	$(CC) $(OBJS) $(CFLAGS) -o $@

.prerequisites: $(OBJSDIRS) $(HDRS) $(SRCS)

$(OBJSDIRS):
	@mkdir -p $@

$(HDRS):
	touch $@

$(SRCS):
	touch $@

$(OBJS): $(OBJSDIR)/%.o:$(SRCSDIR)/%.c $(HDRS) Makefile
	$(CC) $(OFLAGS) -c $< -o $@

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
