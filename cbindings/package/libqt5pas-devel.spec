Buildroot: /home/dbannon/libqt5pas/cbindings/package/INSERT_RDIR
Name: libqt5pas-devel
Version: 
Release: 
Summary: Qt5 interface bindings for Pascal Devel Package
License: LGPLv3+
Packager: David Bannon <tomboy-ng@bannons.id.au>
URL: https://github.com/davidbannon/libqt5pas
Requires: INSERT_DEPEND
Provides: libqt5pas-devel = 2.16
# Next line for Mageia 9
Obsoletes: lib64qt5pas-devel = 2.6.lazarus2.2.0
# Next line for Fedora 37-39
Obsoletes: qt5pas-devel = 2.6
# Next Line for OpenSuse 15.5, probably a couple of earlier releases too
Obsoletes: libQt5Pas1 = 2.2.4

%define _build_id_links none

%define _rpmdir ../
%define _rpmfilename %%{NAME}-%%{VERSION}-%%{RELEASE}.%%{ARCH}.rpm
%define _unpackaged_files_terminate_build 0

%description
Provides interface for Pascal applications, is only
a temp hack until the distributions catch up. It is
only really useful, at present, to people using
Lazarus main, current release versions do not need it.
Development Package

%files

/usr/%{_lib}/libQt5Pas.so
%dir "/usr/share/doc/libqt5pas-devel/"
/usr/share/doc/libqt5pas-devel/copyright
/usr/share/doc/libqt5pas-devel/qt5.pas
/usr/share/doc/libqt5pas-devel/changelog.gz

%changelog
* Sat Dec 3 2022 David Bannon <tomboy-ng@bannons.id.au> - INSERT_FULL_VER
- Follow release of Qt5 bindings 1.2.11 in lazarus-main, Devel Package
