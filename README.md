**Unofficial libqt5pas**

Download packaged libraries from https://github.com/davidbannon/libqt5pas/releases/latest

libqt5pas is an interface between Lazarus and the Qt5 libraries.  Not all Qt5 functions are available, only those necessary for Lazarus functionality. See https://wiki.freepascal.org/Qt5_Interface

This is an unofficial copy of the libqt5pas code from the Lazarus Trunk. It is personally (and only personally) recommended as the right version of libqt5pas to use if the version in your Linux Distribution Repo does not support Qt5 with Lazarus.

The code here will never be ahead of that in the Lazarus trunk but will track it, superficially tested, at least at each release of Lazarus.

Bug reports about the library itself should be submitted to the normal Lazarus bug tracking system, Mantis, https://bugs.freepascal.org

Bug reports relating to this repository's packaging or currency should be reported here.


### Names and Numbers

It appears that Zelijko is now incrementing version numbers. The current release available here is 1.2.9 (April 2021) and that replaces the previous release, here, of 1.2.8 (March 2020).


*  The version of the package distributing this package is the second and third parts of the library version, that was initially **2.8**
* The correct name of the installed library on a Linux (and similar) system was initially  libqt5pas**.so.1.2.8** with a symlink to, at least libqt5pas.so.1
* To make life easier for end users, please comply with these conventions.

### Prebuild Packages
Provided are debs and rpms of the library itself and matching development packages.  Only 64 bit packages are available. Most current Linux distributions usually have a reasonably current version of these libraries and if you can use those, you should do so. However, at present, few will have 1.2.9 and, unexpectedly, trunk Lazarus code (April 2021) will not work with older versions, even if you avoid using the new features.

Older distributions, or distributions built on an older base such as **Ubuntu 18.04** and **Mageia 7.1** need newer libraries to work with current **Release** Lazarus code such as Lazarus 2.0.6 through to Lazarus 2.0.12 (at time of writing). 
  
Note that even earlier Linux Distributions, such as Ubuntu 16.04 will not work with Lazarus Qt5 even with the addition of these libraries. Their Qt5 is too old.


