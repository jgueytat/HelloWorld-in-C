# HelloWorld in C / C++ with VSCode (WSL, Container and SSH) and Gitpod

[![Gitpod ready-to-code](https://img.shields.io/badge/Gitpod-ready--to--code-blue?logo=gitpod)](https://gitpod.io/#https://github.com/jgueytat/HelloWorld-in-C/src/master/)

## VSCode / Gitpod common files

* **.vscode/** :
    * **extensions.json** : recommended extensions
    * **launch.json** : set of commands for debugging
    * **settings.json** : specific extensions settings

## VSCode / Gitpod specific files

### Specific files for VSCode Remote Container

* **.devcontainer/** :
    * **devcontainer.json** : docker environment image (cmake, gcc, gdb,...) + installed extensions

### Specific files for Gitpod

* **.gitpod.yml** : docker environment image (cmake, gcc, gdb,...) + installed extensions

## Opened issues

* [Avoiding to have to refresh](https://github.com/gitpod-io/gitpod/issues/3470)
* [Missing breakpoints](https://github.com/WebFreak001/code-debug/issues/260)
* [User input](https://github.com/WebFreak001/code-debug/issues/262)
