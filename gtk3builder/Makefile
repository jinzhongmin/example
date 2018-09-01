# 1、如果你是windows系统，请注释掉下面一行
GTK3=`pkg-config --cflags gtk+-3.0`

# 2、如果你是windows系统，请将（ pkg-config --cflags gtk+-3.0 ） 这条命令输出的粘贴到GTK3=后面，
#    并反注释掉下面一行,
#GTK3=-mms-bitfields -pthread -mms-bitfields -ID:/Programs/Msys2/mingw64/include/gtk-3.0 -ID:/Programs/Msys2/mingw64/include/cairo -ID:/Programs/Msys2/mingw64/include -ID:/Programs/Msys2/mingw64/include/pango-1.0 -ID:/Programs/Msys2/mingw64/include/fribidi -ID:/Programs/Msys2/mingw64/include/atk-1.0 -ID:/Programs/Msys2/mingw64/include/cairo -ID:/Programs/Msys2/mingw64/include/pixman-1 -ID:/Programs/Msys2/mingw64/include -ID:/Programs/Msys2/mingw64/include/freetype2 -ID:/Programs/Msys2/mingw64/include -ID:/Programs/Msys2/mingw64/include/harfbuzz -ID:/Programs/Msys2/mingw64/include/libpng16 -ID:/Programs/Msys2/mingw64/include/gdk-pixbuf-2.0 -ID:/Programs/Msys2/mingw64/include/libpng16 -ID:/Programs/Msys2/mingw64/include -ID:/Programs/Msys2/mingw64/include/glib-2.0 -ID:/Programs/Msys2/mingw64/lib/glib-2.0/include -ID:/Programs/Msys2/mingw64/include -LD:/Programs/Msys2/mingw64/lib -lgtk-3 -lgdk-3 -lgdi32 -limm32 -lshell32 -lole32 -Wl,-luuid -lwinmm -ldwmapi -lsetupapi -lcfgmgr32 -lz -lpangowin32-1.0 -lpangocairo-1.0 -lpango-1.0 -latk-1.0 -lcairo-gobject -lcairo -lgdk_pixbuf-2.0 -lgio-2.0 -lgobject-2.0 -lglib-2.0 -lintl

run:main.exe
	main.exe
main.exe:main.c
	gcc -Wall -g -o main.exe main.c $(GTK3)