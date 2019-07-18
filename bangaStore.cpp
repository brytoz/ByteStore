	/*
	Name: BangaStore
	Copyright: ozee
	Author: brytoz
	Date: 23/10/18 20:45
	Description: inventory system application
*/
#include <iostream>
#define newline "\n"
#define space "\t"

using namespace std;
string product__[] = {"Soft Drink", "Cafe", "Chips", "Tacos"};
 
 unsigned __int16  __first = 2000;
 unsigned __int16  __second = 700;
 unsigned __int16   __third = 2000;
 unsigned __int16  __fourth = 1000;
 

unsigned __int16 _i,_i_,_j_,_j,_k_,_k,_l_,_l,reply;
int Dist, DistTot;

class all{
	
	public:
		unsigned __int16 Calc_Qty(__int16 x, __int16 y){
			__int16 Total( x*y);
			return Total;
		}
		
		void welcome(){
		 	string x(space space space"WELCOME TO OZEE STORES");
			std::clog<<"------------------------------------------------------------------------------"<<std::endl;
			std::clog<<x<<std::endl;
			std::clog<<"______________________________________________________________________________"<<std::endl;
		}
		
		 print_Coupon(){
			system("cls");
			std::clog <<newline<<"  **********************************************************************"<<newline<<newline<<std::endl;
			std::clog<<"Printing your coupon..."<<std::endl;
			std::clog <<newline<<"  **********************************************************************"<<newline<<std::endl;
			system("pause");
			system("cls");
			string x(space"   OZEE STORES");
			std::clog<<newline<<"  ----------------------------------------------"<<std::endl;
			std::clog<<x<<std::endl;
			         std::clog<<"  ______________________________________________"<<std::endl;
			int Total;
				Total = _i_ + _j_ + _k_ + _l_;
			unsigned __int16 foo = _i + _j + _k + _l;
			if( foo >2 && foo <6 ){
						std::clog<<"    "<<"PRODUCT"<<space<<"  "<<"Qty"<<space<<"  "<< "PRICE "<<newline<<std::endl;
						if(_i>0){
							
							std::cout<<"    "<<product__[0]<<space<<"  "<<_i<<space<<"  # "<<_i_<<newline<<std::endl;
						}
						if(_j>0){
							std::cout<<"    "<<product__[1]<<space<<"  "<<_j<<space<<"  # "<<_j_<<newline<<std::endl;
						}
						if(_k>0){
							std::cout<<"    "<<product__[2]<<space<<"  "<<_k<<space<<"  # "<<_k_<<newline<<std::endl;
						}
						if(_l>0){
							std::cout<<"    "<<product__[3]<<space<<"  "<<_l<<space<<"  # "<<_l_<<newline<<std::endl;
						}
						
						std::clog<<"  ______________________________________________"<<std::endl;
						Dist = Total * 5/100;
						std::clog<<"                          5% discount"<<std::endl;
						DistTot = Total - Dist;
						std::cout<<"   Total                  "<<DistTot<<std::endl;
						
					} else if(foo>=6){
						std::clog<<"    "<<"PRODUCT"<<space<<"  "<<"Qty"<<space<<"  "<< "PRICE "<<newline<<std::endl;
						if(_i>0){
							
							std::cout<<"    "<<product__[0]<<space<<"  "<<_i<<space<<"  # "<<_i_<<newline<<std::endl;
						}
						if(_j>0){
							std::cout<<"    "<<product__[1]<<space<<"  "<<_j<<space<<"  # "<<_j_<<newline<<std::endl;
						}
						if(_k>0){
							std::cout<<"    "<<product__[2]<<space<<"  "<<_k<<space<<"  # "<<_k_<<newline<<std::endl;
						}
						if(_l>0){
							std::cout<<"    "<<product__[3]<<space<<"  "<<_l<<space<<"  # "<<_l_<<newline<<std::endl;
						}
						std::clog<<"  _______________________________________________"<<std::endl;
						Dist = Total * 10/100;
						std::clog<<"                          10% discount"<<std::endl;
						DistTot= Total - Dist;
						std::cout<<"   Total                  "<<DistTot<<std::endl;
						
					}else {
						std::clog<<"    "<<"PRODUCT"<<space<<"  "<<"Qty"<<space<<"  "<< "PRICE "<<newline<<std::endl;
						if(_i>0){
							
							std::cout<<"    "<<product__[0]<<space<<"  "<<_i<<space<<"  # "<<_i_<<newline<<std::endl;
						}
						if(_j>0){
							std::cout<<"    "<<product__[1]<<space<<"  "<<_j<<space<<"  # "<<_j_<<newline<<std::endl;
						}
						if(_k>0){
							std::cout<<"    "<<product__[2]<<space<<"  "<<_k<<space<<"  # "<<_k_<<newline<<std::endl;
						}
						if(_l>0){
							std::cout<<"    "<<product__[3]<<space<<"  "<<_l<<space<<"  # "<<_l_<<newline<<std::endl;
						}
						std::clog<<"  ______________________________________________"<<std::endl;
						std::cout<<"   Total                  "<<Total<<std::endl;
					}
					std::clog<<newline<<"  ----------------------------------------------"<<newline<<std::endl;
					std::clog <<"**********************************************************************"<<std::endl;
					system("pause");
						
		}
		
		void menu(){
			std::clog <<newline<<std::endl;
			std::clog <<"*************************************************************"<<std::endl;
			std::clog <<"CODE "<<space space<<"PRODUCT "<<space <<" WEIGHT "<<space <<" PRICE"<<space <<"    |"<<std::endl;
			std::clog <<"______ "<<space space<<" _______ "<<space <<" ________ "<<space <<" ________   |"<<std::endl;
			std::clog <<"101 "<<space space<<" Soft Drink "<<space<<" 75cl "<<space space<<" # 2000"<<space <<"    |"<<std::endl;
			std::clog <<"102 "<<space space<<" Cafe "<<space space<<" 35cl "<<space space<<" # 700"<< space<<"    |"<<std::endl;
			std::clog <<"103 "<<space space<<" Chips "<<space space<<" 50g "<<space space<<" # 2000"<< space <<"    | "<<std::endl;
			std::clog <<"104 "<<space space<<" Tacos "<<space space<<" 35g "<<space space<<" # 1000"<<space<<"    |"<<std::endl<<std::endl;
			std::clog <<"************************************************************`"<<std::endl;	
		}
		
		void table() {
			std::clog <<"************************************************************`"<<std::endl;	
			std::clog <<"Product "<<space space<<"Qty "<<space space<<" Amount"<<std::endl<<std::endl;
		}
		
}OZEE;



int main() {

	OZEE.welcome();
	
	std::clog <<newline<<newline<<"Would You Like to Buy any of our product ?";
	retry:
	std::clog<<newline<<newline<<space<<space<<" Please reply with 1 for yes OR 2 for No"<<std::endl;
	cin>>reply;
	switch (reply) {
		case 1:
			std::clog <<newline newline<<"See our Menu..."<<newline<<newline<<newline;
			display:
			OZEE.menu();
			goto _query;
			break;
		case 0:
		case 2:
			goto _end;
			break;
		default:
			goto retry;
			break;
	}
	
	
	_query:
		std::clog <<"Enter Code to make purchase"<<std::endl;
		unsigned __int16 code;
		std::cin>>code;
		switch(code){
			case 101:
				goto _First;
				break;
			case 102:
				goto _Second;
				break;
			case 103:
				goto _Third;
				break;
			case 104:
				goto _Fourth;
				break;
			case 0:
					goto _end;
			default:
				goto _query;
				break;
		}
	
	_First:
		
		std::clog<<"How many Bottles? "; std::cin>>_i;
		for (int d =0;d<_i;d++)
		_i_ = OZEE.Calc_Qty(_i, __first);
		
		
		_restart:
		unsigned __int16 i;
		std::clog<<" Would you like to make another Purchase? Reply 1 for yes Or 2 for No  ";std::cin>>i;
		switch(i){
			case 1:
				system("cls");
				goto display;
				break;
			case 2:
				goto _coupon;
				break;
			default:
				goto _restart;
				break;
		}
	//second product
	_Second:
		std::clog<<"How many Cups? ";std::cin>>_j;

		_j_ = OZEE.Calc_Qty(_j, __second);
		goto _restart;
	//third product
	_Third:
		std::clog<<"How many packs? ";std::cin>>_k;

		_k_ = OZEE.Calc_Qty(_k, __third);
		goto _restart;
		//fourth product
	_Fourth:
		std::clog<<"How many packs? ";std::cin>>_l;
		_l_ = OZEE.Calc_Qty(_l, __fourth);	
		goto _restart;
		
	_coupon:
			OZEE.print_Coupon();
			
			
	_end:
			std::clog<<newline<<"Thanks for your Patronage...See you soon"<<std::endl;
}



