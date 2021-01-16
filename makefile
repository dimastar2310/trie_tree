
FLAGS= -Wall -g

all:frequency 
#pashut tafil et main
#sequence of rulles
frequency:frequency_main.o countWords.o 
	gcc $(FLAGS) -o frequency frequency_main.o countWords.o 


	
frequency_main.o: frequency_main.c countWords.h  
	gcc $(FLAGS) -c frequency_main.c




countWords.o:countWords.c countWords.h #be mida ve eshnui tekampel li isort.c shuv
	gcc $(FLAGS) -c countWords.c



# frequency: frequency
# 	./frequency
# frequency r: frequencyR
# 	./frequencyR



.PHONY: clean all
#remove mitbazea rak ad .so yashir yashir rak maind mains
clean:
	rm -f *.o *.a *.so frequency