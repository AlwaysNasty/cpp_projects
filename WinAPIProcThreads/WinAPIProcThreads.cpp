#include <pch.h>		
#include <Windows.h>
#include <TlHelp32.h>
#include <windef.h>
#include <winnt.h>



class SmartHandle {
public:
	SmartHandle(HANDLE _handle) {
		_handle = handle;
	}
	SmartHandle() {
		if (_handle)
			CloseHandle(_handle);
	}

private:
	HANDLE _handle = NULL;
};

int main()
{
	
}