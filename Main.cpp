
#include "Main.h"
#include "Instalock.h"

int main() {
	Title();
	menu();
}


int menu() {

	LogInfo("Resolution required: 1920x1080");
	Space();
	Space();

	LogInfo("Valorant Instalock:");
	Space();

	Log2("1: Astra");
	Log2("2: Breach");
	Log2("3: Brimstome");
	Log2("4: Chamber");
	Log2("5: Cypher");
	Log2("6: Fade");
	Log2("7: Harbor");
	Log2("8: Jett");
	Log2("9: Kayo");
	Log2("10: Killjoy");

	Log2("11: Neon");
	Log2("12: Omen");
	Log2("13: Phoenix");
	Log2("14: Raze [Main]");
	Log2("15: Reyna");
	Log2("16: Sage [Mono]");
	Log2("17: Sky");
	Log2("18: Sova");
	Log2("19: Viper");
	Log2("20: Yoru");

	Space();
	LogInfo("Type a number for agent: ");
	std::cin >> Character;
	Space();

	if (Character == "1") {
		AstraLock();
	}
	if (Character == "2") {
		BreachLock();
	}
	if (Character == "3") {
		BrimstomeLock();
	}
	if (Character == "4") {
		ChamberLock();
	}
	if (Character == "5") {
		CypherLock();
	}
	if (Character == "6") {
		FadeLock();
	}
	if (Character == "7") {
		HarborLock();
	}
	if (Character == "8") {
		JettLock();
	}
	if (Character == "9") {
		KayoLock();
	}
	if (Character == "10") {
		KilljoyLock();
	}
	if (Character == "11") {
		NeonLock();
	}
	if (Character == "12") {
		OmenLock();
	}
	if (Character == "13") {
		PhoenixLock();
	}
	if (Character == "14") {
		RazeLock();
	}
	if (Character == "15") {
		ReynaLock();
	}
	if (Character == "16") {
		SageLock();
	}
	if (Character == "17") {
		SkyLock();
	}
	if (Character == "18") {
		SovaLock();
	}
	if (Character == "19") {
		ViperLock();
	}
	if (Character == "20") {
		YoruLock();
	}
}
