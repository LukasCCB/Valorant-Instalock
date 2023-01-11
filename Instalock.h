#pragma once

#include "Main.h"

std::string Resolution;
std::string Character;

void Click() {
	INPUT iNPUT = { 0 };
	iNPUT.type = INPUT_MOUSE;
	iNPUT.mi.dwFlags = MOUSEEVENTF_LEFTDOWN;
	SendInput(1, &iNPUT, sizeof(iNPUT));
	ZeroMemory(&iNPUT, sizeof(iNPUT));
	iNPUT.type = INPUT_MOUSE;
	iNPUT.mi.dwFlags = MOUSEEVENTF_LEFTUP;
	SendInput(1, &iNPUT, sizeof(iNPUT));
}

void AstraLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Astra_x, Astra_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void BreachLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Skye)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Breach_x, Breach_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void BrimstomeLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Reyna)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Brimstone_x, Brimstone_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void ChamberLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Chamber)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Chamber_x, Chamber_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void CypherLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Yoru)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Cypher_x, Cypher_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void FadeLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Astra)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Fade_x, Fade_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void HarborLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Raze)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Harbor_x, Harbor_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void JettLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Jett_x, Jett_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void KayoLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Kayo_x, Kayo_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void KilljoyLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Killjoy_x, Killjoy_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

// Bellow chars positions
void NeonLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Neon_x, Neon_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void OmenLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Omen_x, Omen_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void PhoenixLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Phoenix_x, Phoenix_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void RazeLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Raze_x, Raze_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void ReynaLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Reyna_x, Reyna_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void SageLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Sage_x, Sage_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void SkyLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Sky_x, Sky_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void SovaLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Sova_x, Sova_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void ViperLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Viper_x, Viper_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}

void YoruLock() {
	system("cls");
	Space();
	Log("Precione tecla ESPACO para instlock (Jett)");
	while (true) {
		if (GetAsyncKeyState(VK_SPACE)) {
			SetCursorPos(Yoru_x, Yoru_y);
			Sleep(40);
			Click();
			Sleep(40);
			SetCursorPos(Lock_x, Lock_y);
			Sleep(100);
			Click();
			Space();
			Log("Succesfully Instalocked");
			Sleep(100);
		}
	}
}
