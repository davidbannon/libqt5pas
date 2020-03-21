**Unofficial libqt5pas**

Download packaged libraries from https://github.com/davidbannon/libqt5pas/releases/latest

libqt5pas is an interface between Lazarus and the Qt5 libraries.  Not all Qt5 functions are available, only those necessary for Lazarus functionality. See https://wiki.freepascal.org/Qt5_Interface

This is an unofficial copy of the libqt5pas code from the Lazarus Trunk. It is personally (and only personally) recommended as the right version of libqt5pas to use at most times.

The code here will never be ahead of that in the Lazarus trunk but will track it, superficially tested, at least at each release of Lazarus.

Bug reports about the library itself should be submitted to the normal Lazarus bug tracking system, Mantis, https://bugs.freepascal.org

Bug reports relating to this repository's packaging or currency should be reported here.


### Names and Numbers
* The version number of the library here is initially **1.2.8**. Upon release of version 3.0.0 of Lazarus for example, this library will be labelled version 1.3.0.
* The name of a package distributing this library is **libqt5pas1**
*  The version of the package distributing this package is second and third parts of the library version, that is initially **2.8**
* The correct name of the installed library on a Linux (and similar) system is initially  **libqt5pas.so.1.2.8** with a symlink to, at least libqt5pas.so.1
* To make life easier for end users, please comply with these conventions.

### Prebuild Packages
Provided are debs and rpms of the library itself and matching development packages.  Only 64 bit packages are available. Most current Linux distributions have a reasonably current version of these libraries and if you can use those, you should do so.

However, older distributions, or distributions built on an older base such as **Ubuntu 18.04** and **Mageia 7.1** need newer libraries to work with current Lazarus code.  

Newer distributions may require the newer libraries if they run a Lazarus application that depends on recent bug fixes or additions that their distribution have not yet picked up.

