**Unofficial libqt5pas**

**Please Note : you probably don't need these files unless you are using Lazarus Trunk** The new things that changed with 1.2.10 only exist in Lazarus Trunk at the moment. 

Download packaged libraries from https://github.com/davidbannon/libqt5pas/releases/latest

libqt5pas is an interface between Lazarus and the Qt5 libraries.  Not all Qt5 functions are available, only those necessary for Lazarus functionality. See https://wiki.freepascal.org/Qt5_Interface

This is an unofficial copy of the libqt5pas code from the Lazarus Trunk. It is personally (and only personally) recommended as the right version of libqt5pas to use if the version in your Linux Distribution Repo does not support Qt5 with Lazarus.

The code here will never be ahead of that in the Lazarus trunk but will track it, superficially tested, at least at each release of Lazarus.

Bug reports about the library itself should be submitted to the normal Lazarus bug tracking system, Mantis, https://bugs.freepascal.org

Bug reports relating to this repository's packaging or currency should be reported here.


### Names and Numbers

The current release available here is 1.2.10 (Feb 2022) and that replaces the previous release, here, of 1.2.9.


* The version of the package distributing this package is the second and third parts of the library version, that was initially **2.8**
* The correct name of the installed library on a Linux (and similar) system was initially  libqt5pas.so.1.2.8 with a symlink to, at least libqt5pas.so.1
* This library is called libQt5Pas.so.1.2.10 and has a symlink to libQt5Pas.so.1 built into the packaging. BUT Zeljko's code makes two more symlinks (libQt5Pas.so and libQt5Pas.so.1.2) and I will update these packages to comply as soon as I can. In the mean time, I believe the extra two symlinks are probably not required but are clearly a good idea.


### Prebuild Packages
Provided are debs and rpms of the library itself and matching development packages.  Only 64 bit packages are available (but 32bit should be possible). Most current Linux distributions usually have a reasonably current version of these libraries that will work fine with Lazarus 2.2.0, if you can use those, you should do so. 

If you are using older distributions, or distributions built on an older base such as **Ubuntu 18.04** and **Mageia 7.1** you need these newer libQt5Pas libraries to work with current **Release** Lazarus code such as Lazarus 2.0.6 through to Lazarus 2.2.0 (at time of writing). 
  
Note that even earlier Linux Distributions, such as Ubuntu 16.04 will not work with Lazarus Qt5 even with the addition of these libraries. Their Qt5 is too old. 


