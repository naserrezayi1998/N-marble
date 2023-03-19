# N-marble
source code : https://github.com/KDE/marble
doc : https://marble.kde.org/dev-intro.php
compiled using gcc and cmake

# marble-dgml-maps
to access and use the maps you must have the src compiled and added to your qt prj as an external lib

# How to get started :

1. Have QtCreator,CMake, gcc (or any compiler you want) and build-essential installed

2. Clone marble from its repository and do the following steps : https://marble.kde.org/sources.php

3. Compile

>> to : /usr/local
mkdir -p ~/marble/build
cd ~/marble/build
cmake -DCMAKE_BUILD_TYPE=Debug -DWITH_KF5=TRUE -DCMAKE_INSTALL_PREFIX=/usr/local ~/marble/sources
make
sudo make install

4. Add to Qt : There are three libs which you have to add them to your qmake / cmake builder >> libastro, lmarbledeclarative, lmarblewidget-qt5

5. Folow the steps in docs and you are good to go!

objective : add zone
Update : Found this for zones
https://github.com/KDE/marble/blob/master/examples/cpp/drawing-places/main.cpp

* Set coordination will be used for zone, vehicle and bookmarks
