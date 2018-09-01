run:hda
	qemu-system-i386 -hda hda
hda:boot.o
	dd bs=512 count=1 if=boot.o of=hda
boot.o:boot.s
	nasm boot.s -f bin -o boot.o