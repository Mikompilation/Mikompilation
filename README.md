# Mikompilation
[![Build Mikompilation](https://github.com/wagrenier/Mikompilation/actions/workflows/Build.yml/badge.svg)](https://github.com/wagrenier/Mikompilation/actions/workflows/Build.yml)

Decompilation project for the Fatal Frame 2 : Crimson Butterfly；Project Zero 2；<ruby>零<rt>ぜろ</rt></ruby>～<ruby>紅い蝶<rt>あかいちょう</rt> game engine. Our goal is to have a fully playable port on PC and maybe on future platforms too.

Mainly a project to learn about reversing and coding in OpenGL.

## Build
### Linux

Run the following commands to install the required dependencies:

```shell
sudo apt install xorg-dev
```

## Common
Library containing all common functions needed by most libraries of the proejct. Contains things like vector math, configurations and printing.

## Engine
This folder contains all sources related to the game engine.

## Extractor
Tools for extracting game files.

## Render
Library for interfacing with the graphics api, for the moment it is only OpenGL

## Third-Party
Library containing all of the project's external libraries.

## UI
Library containing the source code for the UI, mostly ImGui realted stuff.

## Src
Folder containing the main logic of the application.

## Game
Library containing the game's logic.
