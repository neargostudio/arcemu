# ![logo](http://arcemu.org/forums/public/style_images/1_arcemulogo.png) Arcemu

## Build Status

[![Build Status](https://travis-ci.com/arcemu/arcemu.svg?branch=master)](https://travis-ci.com/arcemu/arcemu)

## Introduction

Arcemu is a World of Warcraft server package. Based on the popular Ascent project (defunct as of 2007) it aims to provide players with a gameplay very close or identical to the real thing as of World of Warcraft version 3.3.5a.

It's a multithreaded C++ application with a relational database as a data storage backend(mysql).

It also supports the popular Lua scripting language for easy extension, and customization.

NOTE: This project is mostly abandoned since the end of 2014. However feel free to try and have fun with it.

## Installation

For installation instructions see the wiki and the forums.

## Development box

You can get yourself a quick and dirty installation by using Vagrant. It will set up a virtual machine for you, with Arcemu installed.

* Install Vagrant and VirtualBox
* Create a directory somewhere
* Check out Arcemu code to that directory
* Go to the created directory in the command line / shell
* Issue the command 'vagrant up', and wait until the process finishes.

Vagrant will download an OS for the virtual machine and then build and install Arcemu, this process will take a while.
After it is done, you can log in to the box using SSH.

ssh -p 2222 localhost

The username and password should be both arcemu (in lowercase).

## Links

* [Website](http://arcemu.org/)
* [Forums](http://www.arcemu.org/forums/)
* [Docker hub](https://hub.docker.com/u/arcemu)
