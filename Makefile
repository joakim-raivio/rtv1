NAME := rtv1
CC := gcc
CORESRC := main.c init.c get_frame.c on_expose.c
OBJECTSRC := get_rotation.c get_location.c get_forward_vector.c                 \
	get_up_vector.c get_right_vector.c get_scale.c get_type.c                   \
	set_object_rotation.c set_object_location.c
MATH3DSRC := vec_add.c vec_dot.c vec_normalize.c vec_cross.c vec_length.c       \
	vec_reflect.c vec_divide.c vec_multiply.c vec_substract.c vec_to_rot.c      \
	rot_to_vec.c rad_to_deg.c deg_to_rad.c vec_rotate.c vec_square.c            \
	quat_to_vec.c vec_to_quat.c rot_to_quat.c quat_inverse.c quat_product.c     \
	quat_rotate.c get_quat_forward.c get_quat_up.c get_quat_right.c             \
	vec_distance.c
SCENESRC := get_scene.c get_camera.c
RENDERSRC := get_image.c add_pixel.c screenloop.c render.c
TRACINGSRC := trace_ray.c get_hit_color.c canvas_to_viewport.c create_ray.c
LIGHTSRC := get_luminosity.c calculate_diffusion.c line_collision.c
SHAPESRC := intersect_shape.c intersect_sphere.c get_sphere_normal.c            \
	get_shape_normal.c intersect_plane.c get_shape_intersects.c                 \
	get_plane_normal.c intersect_cylinder.c get_cylinder_normal.c               \
	intersect_cone.c get_cone_angle.c get_cone_normal.c
INTERFACESRC := init_interface.c keys.c
PARSESRC := parse.c add_object.c add_camera.c add_light.c add_shape.c           \
	str_to_type.c
FILES := $(CORESRC) $(SCENESRC) $(MATH3DSRC) $(RENDERSRC) $(OBJECTSRC)          \
	$(INTERFACESRC) $(PARSESRC) $(SHAPESRC) $(TRACINGSRC) $(LIGHTSRC)           
SRCSDIR := srcs
SRCS = $(foreach SRC, $(FILES), $(shell find $(SRCSDIR) -name $(SRC)))
OBJSDIR := objs
OBJS := $(SRCS:$(SRCSDIR)%.c=$(OBJSDIR)%.o)
OBJSDIRS = $(sort $(dir $(OBJS)))
WWW := -Wall -Wextra -Werror -Wconversion
MINILIB := -lmlx -framework OpenGL -framework AppKit
INCS := -I includes -I libft/includes
HDRFILES := rt.h rt_mlx.h math3d.h camera.h object.h scene.h interface.h parse.h
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
debug: fclean .prerequisites debuglib $(OBJS) Makefile 
	@touch .prerequisites
	@echo "Compiling project binary\n"
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

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
