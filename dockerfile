FROM debian:11

LABEL github="https://github.com/bud-ea/TechProg_Per2/tree/Savelev_M-211-352(353)"

RUN apt update
RUN apt install build-essential -y
RUN apt-get install manpages-dev -y

WORKDIR /root/
RUN mkdir ./MyProjTechProg/
WORKDIR /root/MyProjTechProg/

COPY *.cpp /root/MyProjTechProg/
COPY *.h /root/MyProjTechProg/

CMD g++ main.cpp matr3d.cpp -o out && ./out
