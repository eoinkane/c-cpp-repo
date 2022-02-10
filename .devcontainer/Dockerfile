FROM ubuntu:focal

COPY maven.sh /etc/profile.d/maven.sh

RUN DEBIAN_FRONTEND=noninteractive apt-get -y update \
    && apt-get -y upgrade \
    && DEBIAN_FRONTEND=noninteractive apt-get -y install \
        sudo \
        build-essential \
        gdb \
        git \
        python3 \
        python3-pip \
        default-jdk \
        maven \
    && adduser --disabled-password --gecos "" vscode \
    && usermod -aG sudo vscode \
    && echo vscode:vscode | chpasswd\
    && chmod +x /etc/profile.d/maven.sh \
    && echo "source /etc/profile.d/maven.sh" >> /home/vscode/.bashrc \
    && echo "alias python='python3' \n\
alias pip='pip3'" > /home/vscode/.bash_aliases
