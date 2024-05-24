#include "PublicData.h"
namespace Project3 {
	void PublicData::ReadDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% RoomIndex) {
		try {
			//StreamReaderを使ってファイルから読み込む
			System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(Filename);
			String^ line;

			while ((line = sr->ReadLine()) != nullptr) {
				cli::array<String^>^ parts = line->Split(',');
				if (parts->Length == 5) {
					DataArray[RoomIndex, 0] = parts[1];
					DataArray[RoomIndex, 1] = parts[2];
					DataArray[RoomIndex, 2] = parts[3];
					DataArray[RoomIndex, 3] = parts[4];
					DataArray[RoomIndex, 4] = parts[5];
					RoomIndex++;
				}
				else {
					throw gcnew Exception("データ配列がいっぱいです");
				}
			}
			sr->Close();
		}
		catch (Exception^ e) {
			throw gcnew Exception("ファイル読み込みエラー" + e->Message);
		}

	};
	void PublicData::UserDataFromFile(String^ Filename, cli::array<String^, 2>^ DataArray, int% UserIndex) {
		ReadDataFromFile(Filename, DataArray, UserIndex);
	};
	int PublicData::ResearchReserve(int RoomNumber, String^ Date, int Start, int End, int people) {
		int Max;
		switch (RoomNumber) {
		case 1:
			Max = 6;
			for (int i; i < Room1Index; i++) {
				if (people <= Max)
				{
					if (Room1Array[i, 1] == Date)
					{
						if ((Convert::ToInt32(Room1Array[i, 2]) <= End) && ((Convert::ToInt32(Room1Array[i, 3]) < Start)))
						{
							return 1;
						}
						else { return 0; }
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 2:
			Max = 10;
			for (int i; i < Room1Index; i++) {
				if (people <= Max)
				{
					if (Room2Array[i, 1] == Date)
					{
						if ((Convert::ToInt32(Room2Array[i, 2]) <= End) && ((Convert::ToInt32(Room2Array[i, 3]) < Start)))
						{
							return 1;
						}
						else { return 0; }
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 3:
			Max = 15;
			for (int i; i < Room3Index; i++) {
				if (people <= Max)
				{
					if (Room3Array[i, 1] == Date)
					{
						if ((Convert::ToInt32(Room3Array[i, 2]) <= End) && ((Convert::ToInt32(Room3Array[i, 3]) < Start)))
						{
							return 1;
						}
						else { return 0; }
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 4:
			Max = 50;
			for (int i; i < Room4Index; i++) {
				if (people <= Max)
				{
					if (Room4Array[i, 1] == Date)
					{
						if ((Convert::ToInt32(Room4Array[i, 2]) <= End) && ((Convert::ToInt32(Room4Array[i, 3]) < Start)))
						{
							return 1;
						}
						else { return 0; }
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 5:
			Max = 4;
			for (int i; i < Room5Index; i++) {
				if (people <= Max)
				{
					if (Room5Array[i, 1] == Date)
					{
						if ((Convert::ToInt32(Room5Array[i, 2]) <= End) && ((Convert::ToInt32(Room5Array[i, 3]) < Start)))
						{
							return 1;
						}
						else { return 0; }
					}
					else { return 0; }
				}
				else { return 0; }
			}
		case 6:
			Max = 1;
			for (int i; i < Room6Index; i++) {
				if (people <= Max)
				{
					if (Room6Array[i, 1] == Date)
					{
						if ((Convert::ToInt32(Room6Array[i, 2]) <= End) && ((Convert::ToInt32(Room6Array[i, 3]) < Start)))
						{
							return 1;
						}
						else { return 0; }
					}
					else { return 0; }
				}
				else { return 0; }
			}
		}
	}
}