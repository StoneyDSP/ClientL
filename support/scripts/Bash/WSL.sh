sudo apt update &&
sudo apt upgrade &&
sudo apt install nodejs wget ca-certificates openssh-server openssh-client mono-complete
&&
vcpkg integrate install &&
vcpkg install vcpkg-cmake &&
vcpkg install vcpkg-cmake-config &&
vcpkg install vcpkg-cmake-get vars
&&
npm install
