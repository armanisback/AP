#include <iostream>
#include <vector>
#include <set>
#include <string>
#include <cstdlib>
#include <sstream>
#include <iterator>

using namespace std;


void SplitString(string s, vector<string> &v){

	string temp = "";
	for(int i=0;i<s.length();++i){

		if(s[i]==' '){
			v.push_back(temp);
			temp = "";
		}
		else{
			temp.push_back(s[i]);
		}

	}
	v.push_back(temp);

}





class Passenger
{
public:
  Passenger(int id,int taffy,vector<string> stations);
  void add_passenger(int id,int taffy,vector<string> stations);
private:
  int taffy_addiction;
  vector<string> station_names;
  int station_num;
  int passenger_id;
};
Passenger::Passenger(int id,int taffy,vector<string> stations)
{
  add_passenger(id,taffy,stations);
}
void Passenger::add_passenger(int id,int taffy,vector<string> stations)
{
  taffy_addiction=taffy;
  station_names=stations;
  station_num=1;
  passenger_id=id;
  cout << "ok" << endl;
}



class Station
{
public:
  Station(int id,string StationName,int taffyPrice);
  void add_station(int id,string StationName,int taffyPrice);
private:
  int station_id;
  string Station_name;
  int taffy_price;
};
Station::Station(int id,string StationName,int taffyPrice)
{
  add_station(id, StationName, taffyPrice);
}
void Station::add_station(int id,string StationName,int taffyPrice)
{
  station_id=id;
  Station_name=StationName;
  taffy_price=taffyPrice;
  cout << "ok" << endl;
}




class Train
{
public:
  Train(int trani_id,string first_station,string second_station,int travel_time,int stop_time);
  void add_train(int train_id,string first_station,string second_station,int travel_time,int stop_time);
private:
  string origin;
  string destination;
  int travel_duration;
  int cooldown_time;
  int id;
};
Train::Train(int train_id,string first_station,string second_station,int travel_time,int stop_time)
{
  add_train(train_id,first_station, second_station, travel_time, stop_time);
}
void Train::add_train(int train_id,string first_station,string second_station,int travel_time,int stop_time)
{
  origin=first_station;
  destination=second_station;
  travel_duration=travel_time;
  cooldown_time=stop_time;
  id=train_id;
  cout << "ok" << endl;
}




void get_train_data(int train_num,vector <Train> &trains)
{
  string first,second;
  int t_time,c_time;
  cin >> first >> second >> t_time >> c_time;
  trains.push_back(Train(train_num,first,second,t_time,c_time));
}



void get_station_data(int station_num,vector <Station> &stations)
{
  string name;
  int price;
  cin >> name >> price;
  stations.push_back(Station(station_num,name,price));
}




void get_passenger_data(int passenger_num,vector <Passenger> &passengers)
{
  int taffy;
  char in=' ';
  int a=0;
  string input;
  vector <string> station;
  cin >> taffy;
  getline(cin,input);
  SplitString(input,station);
  passengers.push_back(Passenger(passenger_num,taffy,station));
}





void advance_time(int train_num,int station_num,int passenger_num,vector <Train>
   &trains,vector <Station> &stations,vector <Passenger> &passengers)
   {
     /*
     code
     */
   }




int main()
{
  int time=0;
  int n;
  int train_num=0,station_num=0,passenger_num=0;
  vector <Train> trains;
  vector <Passenger>  passengers;
  vector <Station> stations;
  while(true)
  {
    string command;
    cin >> command;
    if(command == "add_train")
      {train_num++; get_train_data(train_num,trains);}
    if(command == "add_station")
      {station_num++; get_station_data(station_num,stations);}
    if(command == "add_passenger")
      {passenger_num++; get_passenger_data(passenger_num,passengers);}
  /*  if(command == "advance_time")
      {
        cin >> n;
        time =+ n;
        for(int i=0;i<n;i++)
          advance_time(train_num,station_num,passenger_num,trains,stations,passengers);
      }*/
  }
}
