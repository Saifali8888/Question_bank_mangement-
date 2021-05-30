CC = g++
CFLAGS = -I.

omake: main.cpp register.cpp filehandle.cpp login.cpp adminfilehandle.cpp
	${CC} -o omake main.cpp register.cpp filehandle.cpp admin.cpp adminfilehandle.cpp login.cpp ${CFLAGS}

clean:
	rm -rf omake