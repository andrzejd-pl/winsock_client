#include <winsock2.h>
#include <ws2tcpip.h>
#include <iostream>
#define DEFAULT_PORT "27015"
#define DEFAULT_BUFLEN 512

#pragma comment(lib, "Ws2_32.lib")

int main() {

	/*inicjalizacja gniazda*/
	WSADATA wsaData;

	int iResult = WSAStartup(MAKEWORD(2, 2), &wsaData);
	if (iResult != 0) {
		std::cout << "WSAStartup failed: " << iResult << std::endl;
		return 1;
	}
	/*---------------------------*/
	return 0;
}