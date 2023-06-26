# RTv1
A simple version of a raytracer visualizer created with C and Minilibx for the 42's RTv1 school project.


![image](https://user-images.githubusercontent.com/16654794/225532718-8532d4f9-70e9-4a93-9871-0c92b7dd963a.png)

## Requirements:
### [Minilibx](https://harm-smits.github.io/42docs/libs/minilibx/getting_started.html)
### MacOs
Partly developed on Linux, but targeted to the schools Unix environment.

## Installation
1. Install Minilibx to system libraries
2. `make`

## Usage
Run the program with a single file path argument.
`./rtv1 <path_to_scene_file>`

## Scenes
Scene files use a CSV format with the following syntax:

A line for each object in the scene.

Camera:
```
camera,locationX,locationY,locationZ,rotationYaw,rotationPitch,rotationRoll
```
Shapes:
```
sphere/plane/cone/cylinder,locationX,locationY,locationZ,rotationYaw,rotationPitch,rotationRoll,scaleX,scaleY,scaleZ,colorRed,colorGreen,colorBlue,colorAlpha,brightness
```
Lights:
```
light,locationX,locationY,locationZ,rotationYaw,rotationPitch,rotationRoll,intensity
```

## Configuration
Configuration is somewhat limited, but can be accessed from includes/options.h before compilation.

A handful of definitions control the different aspects of the program:

Tracing range limits.
```
# define MIN_TRACE_LENGTH 1
# define MAX_TRACE_LENGTH 10000000
```
Color for the background (No ray intersection).
```
# define BACKGROUND_COLOR 0x0008084F
```
Max objects that will be processed.
```
# define MAX_LIGHTS 4
# define MAX_SHAPES 10
```
Programs screen resolution.
```
# define SCREEN_W 1080
# define SCREEN_H 1080
```
Camera FOV.
```
# define VERTICAL_FOV 45
# define HORIZONTAL_FOV 45
```
Executable window description.
```
# define WINDOW_NAME "RT"
```
Amount of ambient illumination.
```
# define BACKGROUND_ILLUMINATION 0.15
```
