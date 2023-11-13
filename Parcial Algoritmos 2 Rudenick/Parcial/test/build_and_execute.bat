:: Compilo código objeto.
g++ -Wall -std=c++11 -I..\include -c ..\src\Provider.cpp  
g++ -Wall -std=c++11 -I..\include -I..\include\vendors\catch -c ProviderUnitTest.cpp 

:: Compilo el Binario
g++ -Wall -std=c++11 Provider.o ProviderUnitTest.o -o ProviderUnitTest.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto el binario:
ProviderUnitTest.exe

pause