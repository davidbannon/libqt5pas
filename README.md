README
===========



**Unofficial libqt5pas**
========


<sub>Don't edit this markdown file, its generated from the tomboy-ng note.</sub>



**Please Note : Do you actually need these libraries ?  If you are using your distro's packaged Lazarus, you should use your distro's packaged libqt5pas libraries. Only people who build Lazarus from source might need these libraries. Might ? If you use a distro that has recent versions in its repo, you should use them, not the ones here.**



**At last update, the list of distros with suitable libraries include -**

* **Debian Trixey or later.**

* **Ubuntu 24.04 or later.**

* **Fedora 41 or later.**

* **Any (?) up to date Arch based system.**



Download packaged libraries for Intel 64 bit and arm 32 and 64 bit  from https://github.com/davidbannon/libqt5pas/releases/latest



libqt5pas is an interface between Lazarus and the Qt5 libraries.  Not all Qt5 functions are available, only those necessary for Lazarus functionality. See https://wiki.freepascal.org/Qt5_Interface

This is an unofficial copy of the libqt5pas code from the Lazarus Main (aka Trunk, master). It is personally (and only personally) recommended as the right version of libqt5pas to use if the version in your Linux Distribution Repo does not support Qt5 with Lazarus. That will only ever be because your binary was compiled from a later version of Lazarus than your repo's version of libQt5Pas.



The code here will never be ahead of that in the Lazarus trunk but will track it, superficially tested, at least at each major release of Lazarus.



Bug reports about the library itself should be submitted to the normal Lazarus bug tracking system, https://gitlab.com/groups/freepascal.org/lazarus/-/issues

Bug reports relating to this repository's packaging or currency should be reported here.



**Names and Numbers**
--------


The current release available here is 1.2.15 (September 2023).



* The version of the package distributing this package is the second and third parts of the library version, that was initially **2.8**

* The correct file name of the installed library on a based Linux (and similar) system was initially  libqt5pas.so.1.2.8 with a symlink to, at least libqt5pas.so.1

* In the packaging process, the '1' appears to be merged into the name sometimes. Not in the dev version however.

* This library is called libQt5Pas.so.1.2.13 and has a symlink to libQt5Pas.so.1 built into the packaging. BUT Zeljko's code also makes two more symlinks (libQt5Pas.so and libQt5Pas.so.1.2), maybe a good idea if you are manually installing.



**Prebuild Packages**
--------


Provided are debs and rpms of the library itself and matching development packages.  Gzipped Tar balls are also provided for experienced users. Most current Linux distributions usually have a reasonably current version of these libraries that will work fine with, up to Lazarus 2.2.6, if you can use those, you should do so.

If you are using older distributions, or distributions built on an older base such as **Ubuntu 18.04** and **Mageia 7.1** you need these newer libQt5Pas libraries to work with current **Release** Lazarus code such as Lazarus 2.0.6 through to Lazarus 2.2.4 (at time of writing). But better to update your Linux IMHO.



Note that even earlier Linux Distributions, such as Ubuntu 16.04 will not work with Lazarus Qt5 even with the addition of these libraries. Their Qt5 is too old.



These libraries are built on Ubuntu 20.04, its believed they will always be backwards compatible, that is, the ones here will work with any earlier Lazarus (as long as the distribution's Qt5 itself is OK).



**PLEASE report any probems you have, I cannot fix a problem I don't know about.**






