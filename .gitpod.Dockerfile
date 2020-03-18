FROM gitpod/workspace-full-vnc
                    
USER gitpod

# Install custom tools, runtime, etc. using apt-get
# For example, the command below would install "bastet" - a command line tetris clone:
#
# RUN sudo apt-get -q update && #     sudo apt-get install -yq bastet && #     sudo rm -rf /var/lib/apt/lists/*
RUN sudo apt-get install gmt
RUN sudo apt-get isntall libgmt5 libgmt-dev gmt-gshhg gmt-doc \
libx11-dev xorg-dev libmotif-dev libmotif-common \
libglu1-mesa libglu1-mesa-dev mesa-common-dev libsdl1.2-dev libsdl-image1.2-dev \
build-essential gfortran \
libfftw3-3 libfftw3-dev libproj-dev gdal-bin libgdal-dev
# More information: https://www.gitpod.io/docs/config-docker/
