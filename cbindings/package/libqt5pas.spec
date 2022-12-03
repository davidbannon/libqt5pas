Buildroot: /home/dbannon/Pascal/libqt5pas/cbindings/package/INSERT_RDIR
Name: libqt5pas
Version: 
Release: 
Summary: Qt5 interface bindings for Pascal
License: see /usr/share/doc/libqt5pas/copyright
Packager: David Bannon <tomboy-ng@bannons.id.au>
URL: https://github.com/davidbannon/libqt5pas

%define _build_id_links none

%define _rpmdir ../
%define _rpmfilename %%{NAME}-%%{VERSION}-%%{RELEASE}.%%{ARCH}.rpm
%define _unpackaged_files_terminate_build 0

%description

Provides interface for Pascal applications, is only
a temp hack until the distributions catch up. It is
only really useful, at present, to people using
Lazarus main, current release versions do not need it.


%files

/usr/%{_lib}/libQt5Pas.so.1.2.11
/usr/%{_lib}/libQt5Pas.so.1.2
/usr/%{_lib}/libQt5Pas.so.1
%dir "/usr/share/doc/libqt5pas/"
"/usr/share/doc/libqt5pas/changelog.gz"
"/usr/share/doc/libqt5pas/copyright"

%changelog
* Sat Dec 3 2022 David Bannon <tomboy-ng@bannons.id.au> - INSERT_FULL_VER
- Follow release of Qt5 bindings 1.2.11 in lazarus-main, lib Package
