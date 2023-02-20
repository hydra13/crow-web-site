#### WebSite by Crow Framework (based c++)

This is a testing Crow Framework web-site with some routing and come mustache-templates.

#### Requirements
* Asia (crow requirements):
  ```
  sudo apt-get install -y libasio-dev
  ```
* Crow
  * `git clone https://github.com/CrowCpp/Crow.git && cd Crow`
  * `cmake . -DCROW_BUILD_EXAMPLES=OFF -DCROW_BUILD_TESTS=OFF`
  * `make install`

#### Build and run
```
g++ main.cpp -lpthread -o main && ./main
```
After running open http://0.0.0.0:18080/