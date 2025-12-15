# cpp-cmake-vscode-example


For build -> Ctrl + Shift + B

Run Debug -> F5


Ctrl + Shift + P -> 

    clangd: Download lanugage server

    clangd: Restart language server

    CMake: Build

    Preferences: Open User Settings(JSON)


Rebuild the project:

    rm -rf build/clang-deb-ninja
    cmake -S . -B build/clang-deb-ninja
    cmake --build build/clang-deb-ninja


[Debugging C++ & CMake in VSCode in the Right Way](https://www.youtube.com/watch?v=Qng2RW_bjS8)
