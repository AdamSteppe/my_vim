

my_vim : main.o
	gcc main.o -o my_vim

clean:
	rm main.o
	rm my_vim
