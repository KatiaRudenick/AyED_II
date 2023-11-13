:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include -c .\src\Provider.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Article.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Order.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Employee.cpp
g++ -Wall -std=c++14 -I.\include -c main.cpp 

:: Compilo el Binario
g++ -I.\include Article.o Provider.o Order.o Employee.o main.o -o app.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
app.exe

pause