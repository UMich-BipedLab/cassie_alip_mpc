# DOCKER Configuration file


# -------- Licence -------------------------------------------------------------
# The MIT License (MIT)
#
# Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
#                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
#                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
# Copyright (c) 2012 Brendan O'Donoghue (bodonoghue85@gmail.com)
# ------------------------------------------------------------------------------



# -------- Instructions --------------------------------------------------------
# Build the docker image by running: 
#
# $ docker image build -t kulforbes/superscs:{version-name} .
#
# from within the base directory of this project.
#
#
# Run the docker image and start a terminal to access it by running:
#
# $ docker run -it kulforbes/superscs:{version-name}
#
# To run the latest version, simply run `docker run -it kulforbes/superscs`
#
# Once you access the docker image using a terminal, you may compile the C file
# `superscs_test.c` as follows:
# $ gcc superscs_test.c -o superscs_test -lscsindir -lblas -llapack -lm
# ------------------------------------------------------------------------------



# Build on top of Ubuntu trusty
FROM ubuntu:trusty

# Labels for the SuperSCS docker image
LABEL 	maintainer="Pantelis Sopasakis <p.sopasakis@gmail.com>" \
	version="v1.3.3" \
        license="MIT license" \
        description="Fast and accurate conic programming"

# Environment variables
ENV CC=gcc \
    SUPERSCS_VERSION="v1.3.3" \
    SUPERSCS_INSTALL_DIR="/superscs"

WORKDIR /superscs

# Copy all necessary files
COPY src/ /superscs/src/
COPY include/ /superscs/include/
COPY linsys/ /superscs/linsys/
COPY tests/c/ /superscs/tests/c 
COPY scs.mk Makefile LICENSE.txt examples/c/superscs_test.c /superscs/
COPY .motd /etc/

# Install necessary dependencies (blas, lapack, make and gcc)
RUN   apt-get update && apt-get -y install \
	libblas-dev \
	liblapack-dev \
	make gcc

# Build, test and install
RUN	make \
        # run the unit tests
	&& make run-test \
        # copy library files to /usr/lib/superscs
	&& mkdir -p /usr/lib/superscs/ \        
	&& cp out/libscsdir.a /usr/lib/superscs/ \
	&& cp out/libscsindir.a /usr/lib/superscs/ \
	&& cp out/libscsdir.so /usr/lib/superscs/ \
        && cp out/libscsindir.so /usr/lib/superscs/ \
        # create symbolic links in /usr/lib 
	&& ln -s /usr/lib/superscs/libscsdir.a /usr/lib/libscsdir.a \
	&& ln -s /usr/lib/superscs/libscsindir.a /usr/lib/libscsindir.a \
	&& ln -s /usr/lib/superscs/libscsdir.so /usr/lib/libscsdir.so \
        && ln -s /usr/lib/superscs/libscsindir.so /usr/lib/libscsindir.so \
        # install header files in /usr/include
        # users will have use: #include "superscs/scs.h"
	&& cp -r ./include/ /usr/include/superscs \
        # copy the header files of linsys in /usr/include/linsys
	&& mkdir -p /usr/include/linsys \
	&& cp linsys/amatrix.h /usr/include/linsys/ \
	&& cp linsys/common.h /usr/include/linsys/ \
        # compile the example
	&& gcc superscs_test.c -o superscs_run -lscsindir -lblas -llapack -lm \
        # make the example runnable (+x)
        && chmod +x /superscs/superscs_run \
        # make motd runnable and modify bashrc
	&& mv /etc/.motd /etc/motd \
        && chmod +x /etc/motd \
        && echo '/etc/motd' >> /etc/bash.bashrc
