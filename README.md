# ThirdParty

External code to help stuff run:
- [eigen][1]: a C++ template library for linear algebra
- [Ipopt][3]: **I**nterior **P**oint **OPT**imizer is for large-scale nonlinear optimization
- [mjpro150][4]: MuJoCo is Modeling, Simulation, and Visualization of **Mu**lti-**Jo**int Dynamics with **Co**ntact
- [qpOASES][5]: **o**nline **a**ctive **se**t **s**trategy for quadratic programming
- [rbdl][6]: **R**igid **B**ody **D**ynamics **L**ibrary

## Installation
```
cd /path/to/ThirdParty/
```
#### 1. Set `workspacePath`

  Add `export workspacePath=/path/to/ThirdParty/parentDir` to the end of bashrc file:
  - UNIX file: `.bashrc`  
  - Mac file: `~/.bash_profile`  

  Then run:
  - UNIX
    ```
    source ~/.bashrc
    ```
  - Mac  
    ```
    source ~/.bash_profile
    ```

#### 2. Add `eigen symlink`

  ```
  sudo ln -s /path/to/ThirdParty/eigen /usr/local/include/eigen
  ```

#### 3. Build `rbdl`

  ```
  cd rbdl
  rm -rf build
  mkdir build
  cd build
  cmake -D CMAKE_BUILD_TYPE=Release ../ 
  make
  ```
#### 4. Build `qpOASES`
  - UNIX  
    ```
    cd qpOASES
    make clean; make
    ```
  - Mac
    1. [Download and install Xcode][2]
    2. Uncomment OSX makefile in `/ThirdParty/qpOASES-3.2.1/make.mk` to:
      ``` Makefile
      #include ${TOP}/make_linux.mk
      #include ${TOP}/make_cygwin.mk
      #include ${TOP}/make_windows.mk
      include ${TOP}/make_osx.mk
      ```
    3. Add your Matlab path to `/ThirdParty/qpOASES-3.2.1/make_osx.mk`, e.g.:  
      ``` Makefile
      # Matlab include directory (ADAPT TO YOUR LOCAL SETTINGS!)
      MATLAB_IDIR   = /Applications/MATLAB_R2017b.app/extern/include
      ```
    4. Make  
      ```
      cd qpOASES
      make clean; make
      ```
      
      
You're done!  

[1]: http://eigen.tuxfamily.org/
[2]: https://developer.apple.com/xcode/downloads/
[3]: https://projects.coin-or.org/Ipopt
[4]: http://www.mujoco.org/book/
[5]: https://projects.coin-or.org/qpOASES
[6]: https://rbdl.bitbucket.io/
