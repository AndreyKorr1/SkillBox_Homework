#include <string>
#include <iostream>
using namespace std;

string Caesar(string word, int offset) {
	for (int i = 0; i < word.length(); i++) {
		if (word[i] >= 'a' && word[i] <= 'z') {
			int order;
			order = ((word[i] - 'a') + offset) % 26;
			word[i] = 'a' + order;
		}
		else if (word[i] >= 'A' && word[i] <= 'Z') {
			int order;
			order = ((word[i] - 'A') + offset) % 26;
			word[i] = 'A' + order;
		}
		else {
			continue;
		}
	}
	return word;
}



string firstPart(string email) {
	string firstEmail;
	for (int i = 0; i < email.find('@'); i++) {
		firstEmail += email[i];
	}
	return firstEmail;
}


string secondPart(string email) {
	string secondEmail;
	for (int i = email.find('@') + 1; i <= email.length() - 1; i++) {
		secondEmail += email[i];
	}
	return secondEmail;
}

bool firstPartCheck(string FirstPart) {
	if (FirstPart.length() < 1 || FirstPart.length() > 64) {
		return false;
	}
	if (FirstPart[0] == '.' || FirstPart[FirstPart.length() - 1] == '.') {
		return false;
	}
	for (int i = 0; i < FirstPart.length(); i++) {
		if (FirstPart[i] == '.' && FirstPart[i + 1] == '.') {
			return false;
		}
		if ((FirstPart[i] < 'a' || FirstPart[i] > 'z') && (FirstPart[i] < '0' || FirstPart[i] > '9') && (FirstPart[i] < 'A' || FirstPart[i] > 'Z') &&
			FirstPart[i] != '!' && FirstPart[i] != '$' && FirstPart[i] != '%' && FirstPart[i] != '&' && FirstPart[i] != '\'' && FirstPart[i] != '*' &&
			FirstPart[i] != '+' && FirstPart[i] != '-' && FirstPart[i] != '/' && FirstPart[i] != '=' && FirstPart[i] != '?' && FirstPart[i] != '^' &&
			FirstPart[i] != '_' && FirstPart[i] != '`' && FirstPart[i] != '{' && FirstPart[i] != '|' && FirstPart[i] != '}' && FirstPart[i] != '~' && FirstPart[i] != '.') {
			return false;
		}
	}
}

bool secondPartCheck(string SecondPart) {
	if (SecondPart.length() < 1 || SecondPart.length() > 63) {
		return false;
	}
	if (SecondPart[0] == '.' || SecondPart[SecondPart.length() - 1] == '.') {
		return false;
	}
	for (int i = 0; i < SecondPart.length(); i++) {
		if (SecondPart[i] == '.' && SecondPart[i + 1] == '.') {
			return false;
			break;
		}
		else if ((SecondPart[i] < 'a' || SecondPart[i] > 'z') && (SecondPart[i] < '0' || SecondPart[i] > '9') && (SecondPart[i] < 'A' || SecondPart[i] > 'Z') &&
			SecondPart[i] != '.' && SecondPart[i] != '-') {
			return false;
		}
	}
	return true;
}

bool Check(string email) {
	int dog = 0;
	for (int i = 0; i < email.length(); i++) {
		if (email[i] == '@') {
			dog++;
		}
	}
	if (dog < 1 || dog > 1) {
		return false;
	}
	if (firstPartCheck(firstPart(email)) && secondPartCheck(secondPart(email))) {
		return true;
	}
	else {
		return false;
	}

}



bool firstCheckIP(string ip) {
	int point = 0;
	if (ip[0] == '.' || ip[ip.length() - 1] == '.') {
		return false;
	}
	for (int i = 0; i < ip.length(); i++) {
		if (ip[i] == '.' && ip[i + 1] == '.') {
			return false;
		}
		else if (ip[i] == '0' && ip[i + 1] != '.' && ip[i - 1] == '.') {
			return false;
		}
		if (ip[i] == '.') {
			point++;
		}
	}
	if (point > 3) {
		return false;
	}
	return true;
}


string get_address_part(string ip, int part) {
	string partIp = "";
	int count = 0;
	for (int i = 0; i <= ip.length(); i++) {
		if (i < ip.length() && ip[i] != '.') {
			partIp += ip[i];
		}
		else {
			if (count == part) {
				return partIp; // Возвращаем нужный октет
			}
			count++;
			partIp = "";
		}
	}
	return "";
}


bool partIpCheck(string partIp) {
	for (int i = 0; i < partIp.length(); i++) {
		if (partIp[i] < '0' || partIp[i] > '9') {
			return false;
		}
	}
	if (stoi(partIp) > 255 || stoi(partIp) < 0) {
		return false;
	}
	return true;
}

bool validIp(string ip) {
	
	if (!firstCheckIP(ip)) {
		return false;
	}
	for (int i = 0; i < 4; i++) {
		if (!partIpCheck(get_address_part(ip, i))) {
			return false;
		}
	}
	return true;
}



int main()
{
	//Задане 1
	/*string text;
	int code;
	cout << "Задание 1" << endl;
	cout << "Text: ";
	cin >> text;
	cout << "Code: ";
	cin >> code;

	cout << "Encrypted text : " << Caesar(text, code);*/
	
	//Задание 2
	/*string email;
	cout << "Insert email: " << endl;
	cin >> email;

	if (Check(email)) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}*/


	// Задание 3

	string ip;
	cout << "incert IP Address :";
	cin >> ip;
	if (validIp(ip)) {
		cout << "Valid";
	}
	else {
		cout << "Invalid";
	}

}
