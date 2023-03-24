all:
	$(MAKE) -f ./Makefile.ntsc_u
	$(MAKE) -f ./Makefile.pal

clean:
#	A bit hacky. Oh well.
	rm -f -r obj/
	rm -f -r lib/