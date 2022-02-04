FROM ubuntu:focal

RUN DEBIAN_FRONTEND=noninteractive apt-get -y update && apt-get -y upgrade && DEBIAN_FRONTEND=noninteractive apt-get -y install sudo build-essential gdb git && adduser --disabled-password --gecos "" vscode && usermod -aG sudo vscode && echo vscode:vscode | chpasswd 