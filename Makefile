all:
	g++ -std=c++11 *.cpp -I./include -O4 -o flare

clean:
	rm -rf flare
	rm -rf *.o
	rm -rf output.ppm
