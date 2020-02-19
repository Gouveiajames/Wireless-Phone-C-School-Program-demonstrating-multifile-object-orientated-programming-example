/**************************************************************************************************
   Name        : Wireless Phone Carrier
   Author      : James Gouveia
   Date        : 12.11.16
   Version     : 1.0
   Copyright   : Copyright (C). CS Department Foothill College 2016. All rights reserved.
   Program purpose: 
  
   Revisions history: (date/programmer/what changed)
   date:		programmer		changes
   
**************************************************************************************************/

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <map> 
#include "Lab4.h"

using namespace std;

SmartCarrier::SmartCarrier(): carrier_name_("") {};

SmartCarrier::SmartCarrier(string name): carrier_name_(name) {};

SmartCarrier::~SmartCarrier() 
{
	vector<Message*>::iterator iter;
	for(map<string, vector<Message*> >::iterator it = accounts_map.begin(); it != accounts_map.end(); ++it)
	{
		for(iter = it->second.begin( ) ;  iter !=  it->second.end( ); ++iter)
		{
			delete *iter;
		}

		it->second.clear();

	}

	cout << "\n\t\tThank you for using " << get_carrier_name() <<" Wireless Good Bye!!!\n\n";

};

void SmartCarrier::set_carrier_name(string name) {carrier_name_ = name;};

string SmartCarrier::get_carrier_name() const {return carrier_name_;};

void SmartCarrier::Init() 
{
	Message * p_message = NULL;
	p_message = new TextMessage("650-267-1289", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["650-267-1289"].push_back (p_message);

	p_message = new VoiceMessage("650-267-1289", "408-111-2222", 120);
	accounts_map ["650-267-1289"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "650-267-1289", 25);
	accounts_map ["650-267-1289"].push_back (p_message);


//3 text messages 408-235-1500
	p_message = new TextMessage("408-235-1500", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["408-235-1500"].push_back (p_message);

	p_message = new TextMessage("408-235-1500", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["408-235-1500"].push_back (p_message);

	p_message = new TextMessage("408-235-1500", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["408-235-1500"].push_back (p_message);

//3 voice messages 408-235-1500
	p_message = new VoiceMessage("408-235-1500", "408-111-2222", 120);
	accounts_map ["408-235-1500"].push_back (p_message);

	p_message = new VoiceMessage("408-235-1500", "408-111-2222", 120);
	accounts_map ["408-235-1500"].push_back (p_message);

	p_message = new VoiceMessage("408-235-1500", "408-111-2222", 120);
	accounts_map ["408-235-1500"].push_back (p_message);

//4 media messages 408-235-1500
	p_message = new MediaMessage("310-777-8888", "408-235-1500", 25);
	accounts_map ["408-235-1500"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "408-235-1500", 25);
	accounts_map ["408-235-1500"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "408-235-1500", 25);
	accounts_map ["408-235-1500"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "408-235-1500", 25);
	accounts_map ["408-235-1500"].push_back (p_message);

//2 text messages 650-781-7900
	p_message = new TextMessage("650-781-7900", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["650-781-7900"].push_back (p_message);

	p_message = new TextMessage("650-781-7900", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["650-781-7900"].push_back (p_message);

//3 media messages 650-781-7900
	p_message = new MediaMessage("310-777-8888", "650-781-7900", 25);
	accounts_map ["650-781-7900"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "650-781-7900", 25);
	accounts_map ["650-781-7900"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "650-781-7900", 25);
	accounts_map ["650-781-7900"].push_back (p_message);


//1 voice message 415-298-2162
	p_message = new VoiceMessage("415-298-2162", "408-111-2222", 120);
	accounts_map ["415-298-2162"].push_back (p_message);

//1 media message 415-298-2162
	p_message = new MediaMessage("310-777-8888", "415-298-2162", 25);
	accounts_map ["415-298-2162"].push_back (p_message);

//0 messages 945-890-5913
	accounts_map ["945-890-5913"];

//1 text message 408-720-0012
	p_message = new TextMessage("408-720-0012", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["408-720-0012"].push_back (p_message);

//4 voice message 408-720-0012
	p_message = new VoiceMessage("408-720-0012", "408-111-2222", 120);
	accounts_map ["408-720-0012"].push_back (p_message);

	p_message = new VoiceMessage("408-720-0012", "408-111-2222", 120);
	accounts_map ["408-720-0012"].push_back (p_message);

	p_message = new VoiceMessage("408-720-0012", "408-111-2222", 120);
	accounts_map ["408-720-0012"].push_back (p_message);

	p_message = new VoiceMessage("408-720-0012", "408-111-2222", 120);
	accounts_map ["408-720-0012"].push_back (p_message);

//3 media message 650-230-9912
	p_message = new MediaMessage("310-777-8888", "650-230-9912", 25);
	accounts_map ["650-230-9912"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "650-230-9912", 25);
	accounts_map ["650-230-9912"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "650-230-9912", 25);
	accounts_map ["650-230-9912"].push_back (p_message);

//4 text message 408-462-7890
	p_message = new TextMessage("408-462-7890", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["408-462-7890"].push_back (p_message);

	p_message = new TextMessage("408-462-7890", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["408-462-7890"].push_back (p_message);

	p_message = new TextMessage("408-462-7890", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["408-462-7890"].push_back (p_message);

	p_message = new TextMessage("408-462-7890", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["408-462-7890"].push_back (p_message);

//2 voice message 408-462-7890
	p_message = new VoiceMessage("408-462-7890", "408-111-2222", 120);
	accounts_map ["408-462-7890"].push_back (p_message);

	p_message = new VoiceMessage("408-462-7890", "408-111-2222", 120);
	accounts_map ["408-462-7890"].push_back (p_message);

//3 media message 408-462-7890
	p_message = new MediaMessage("310-777-8888", "408-462-7890", 25);
	accounts_map ["408-462-7890"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "408-462-7890", 25);
	accounts_map ["408-462-7890"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "408-462-7890", 25);
	accounts_map ["408-462-7890"].push_back (p_message);	

//1 text message 415-902-9581
	p_message = new TextMessage("415-902-9581", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["415-902-9581"].push_back (p_message);

//2 voice message 415-902-9581
	p_message = new VoiceMessage("415-902-9581", "408-111-2222", 120);
	accounts_map ["415-902-9581"].push_back (p_message);

	p_message = new VoiceMessage("415-902-9581", "408-111-2222", 120);
	accounts_map ["415-902-9581"].push_back (p_message);

//2 media message 415-902-9581
	p_message = new MediaMessage("310-777-8888", "415-902-9581", 25);
	accounts_map ["415-902-9581"].push_back (p_message);

	p_message = new MediaMessage("310-777-8888", "415-902-9581", 25);
	accounts_map ["415-902-9581"].push_back (p_message);

//3 text message 310-290-1666
	p_message = new TextMessage("310-290-1666", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["310-290-1666"].push_back (p_message);

	p_message = new TextMessage("310-290-1666", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["310-290-1666"].push_back (p_message);

	p_message = new TextMessage("310-290-1666", "650-345-9001", "Do you want to learn how to program in C++?");
	accounts_map ["310-290-1666"].push_back (p_message);

	p_message = NULL;
};

void SmartCarrier::StartService() {menu(); StopService();};

void SmartCarrier::menu()
{
	int flag = 1;
	int choice = 1;

	while(flag > 0)
	{
		cout << "\n\t\t\tFoothill Wireless"
		 << "\n\t\tMESSAGE UTILIZATION AND ACCOUNT ADMIN" 
         << "\n\n1.  List summary of message usages/charges for all accounts"
         << "\n2.  Search a message from an account"
         << "\n3.  Erase a message from an account"
         << "\n4.  Disconnect an account"
         << "\n5.  Quit" << endl;

       choice = GetChoice();

       if (cin.fail())
		{
	    	cin.clear();
	    	cin.ignore();
		}

       switch(choice)
       {
	       	case 1:
	       	{
	       		ListAll();
	       		break;
	       	}
	       	case 2:
	       	{
	       		SearchMessage();
	       		break;
	       	}
	       	case 3:
	       	{
	       		EraseMessage();
	       		break;
	       	}
	       	case 4:
	       	{
	       		try
	       		{
	       			DisconnectAccount();
	       		}catch(int err_code)
	       		{
	       			cout << "\n\nError!  Either the account you entered does not exist or you have"
	       			     << " entered the number incorrectly.  Please try again." << endl;
	       		}
	       		
	       		break;
	       	}
	       	case 5:
	       	{
	       		flag = 0;
	       		break; 
	       	}
       };

       if(choice < 1 || choice > 5)
       {
       		cout << "\nInvalid choice, please choose a valid number" << endl;
       }

	};

};

int SmartCarrier::GetChoice()
{
	int choice = 0;
	cout << "Please enter your menu choice." << endl;
	cin >> choice;

	return choice;
};

void SmartCarrier::ListAll()
{
	cout << "\nPhone number"         
	     << "\tTotal messages"
	     << "\tText"
	     << "\tVoice"
	     << "\tMedia"
	     << "\tTotal charges" << endl;

	int text_count  = 0;
	float total     = 0.0;
	int voice_count = 0;
	int media_count = 0;
	int vector_size = 0;
	for(map<string, vector<Message*> >::iterator it = accounts_map.begin(); it != accounts_map.end(); ++it)
	{
		vector<Message*>::iterator iter;
		for(iter = it->second.begin( ) ;  iter !=  it->second.end( );  ++iter)
		{
			if(TextMessage * p_textmessage_vector = dynamic_cast <TextMessage*> (*iter))
			{
				total += p_textmessage_vector->ComputeCharge();
				text_count++;
			}

			if(VoiceMessage * p_voicemessage_vector = dynamic_cast <VoiceMessage*> (*iter))
			{
				total += p_voicemessage_vector->ComputeCharge();
				voice_count++;
			}

			if(MediaMessage * p_mediamessage_vector = dynamic_cast <MediaMessage*> (*iter))
			{
				total += p_mediamessage_vector->ComputeCharge();
				media_count++;
			}	
		}

		cout << it->first << "\t\t" << it->second.size() << "\t  " << text_count << "\t  " 
		     << voice_count << "\t  " << media_count << "\t    $ " 
		     << fixed << setprecision(2) << total << endl;
		text_count  = 0;
		voice_count = 0;
		media_count = 0;
		total       = 0.0;

	}
}

void SmartCarrier::SearchMessage()
{
	string account_number   = "";
	string type             = "";
	string senders_number   = "";
	string receivers_number = "";
	int    vector_size      = 0;
	int    switch_number    = 0;

	cout << "Please enter your account number." << endl;
	cin.clear();
	cin.ignore();
	getline(cin, account_number);

	cout << "Please enter the type of message sent: text, voice, media." << endl;
	cin.clear();
	getline(cin, type);

	if(type == "text")
	{
		switch_number = 1;
		cout << switch_number << endl;
	}
	else if(type == "voice")
	{	
		switch_number = 2;
		cout << switch_number << endl;
	}
	else if(type == "media")
	{
		switch_number = 3;
		cout << switch_number << endl;
	}

	cout << "What phone number was used to send this message?" << endl;
	cin.clear();
	getline(cin, senders_number);

	cout << "What phone number was this message sent to?" << endl;
	cin.clear();
	getline(cin, receivers_number);


	
	try
	{
		if(switch_number > 0 && switch_number < 4)
		{
			switch(switch_number)
			{
				case 1:
				{
					try
					{
						if (accounts_map.find(account_number) != accounts_map.end())
						{
							vector_size = accounts_map.find(account_number)->second.size();
							map<string, vector<Message*> >::iterator it = accounts_map.find(account_number);
							vector<Message*>::iterator iter;

							for(iter = it->second.begin( ) ;  iter !=  it->second.end( ); ++iter)
							{
								try
								{
							    	if(TextMessage * p_textmessage_vector = dynamic_cast <TextMessage*> (*iter))
							    	{
							    		TextMessage * p_text = NULL;
										p_text = new TextMessage(senders_number, receivers_number, "");

										if(*p_text == *p_textmessage_vector)
										{
											cout << *p_textmessage_vector;
											delete p_text;
										}
										else
										{
											delete p_text;
											throw 1;
										}
									}
						    	}
						    	catch(int err_text)
						    	{
						    		cout << "\n\nNo message was found for this account with the senders number you entered"
							    	     << " and the receivers number you entered.  Either the numbers given are incorrect"
							    	     << " or the message does not exist, please try again." << endl;
						    	}
							}
						}
						else
						{
							throw 1;
						}
						break;

					}
					catch(int err_text)
					{
						cout << "\n\nAccount number not found, either the account number was entered incorrectly"
						     << " or the account does not exist." << endl;
					}
				}
				case 2:
				{
					try
					{
						if (accounts_map.find(account_number) != accounts_map.end())
						{
							vector_size = accounts_map.find(account_number)->second.size();
							map<string, vector<Message*> >::iterator it = accounts_map.find(account_number);
							vector<Message*>::iterator iter;

							for(iter = it->second.begin( ) ;  iter !=  it->second.end( ); ++iter)
							{
								try
								{
						    		if(VoiceMessage * p_voicemessage_vector = dynamic_cast <VoiceMessage*> (*iter))
						    		{
						    			VoiceMessage * p_voice = NULL;
										p_voice = new VoiceMessage(senders_number, receivers_number, 0);

										if(*p_voice == *p_voicemessage_vector)
										{
											cout << *p_voicemessage_vector;
											delete p_voice;
										}
										else
										{
											delete p_voice;	
											throw 1;
										}
										delete p_voice;	
						    		}
						    	}
						    	catch(int err_voice)
						    	{
						    		cout << "\n\nNo message was found for this account with the senders number you entered"
							    	     << " and the receivers number you entered.  Either the numbers given are incorrect"
							    	     << " or the message does not exist, please try again." << endl;
						    	}
							}
						}
						else
						{
							throw 1;
						}
						
						
						break;
					}
					catch(int err_voice)
					{
						cout << "\n\nAccount number not found, either the account number was entered incorrectly"
						     << " or the account does not exist." << endl;
					}
				}
				case 3:
				{
					try
					{
						if (accounts_map.find(account_number) != accounts_map.end())
						{
							vector_size = accounts_map.find(account_number)->second.size();
							map<string, vector<Message*> >::iterator it = accounts_map.find(account_number);
							vector<Message*>::iterator iter;

							for(iter = it->second.begin( ) ;  iter !=  it->second.end( ); ++iter)
							{
								try
								{
						    		if(MediaMessage * p_mediamessage_vector = dynamic_cast <MediaMessage*> (*iter))
						    		{
						    			MediaMessage * p_media = NULL;
										p_media = new MediaMessage(senders_number, receivers_number, 0);

										if(*p_media == *p_mediamessage_vector)
										{
											cout << *p_mediamessage_vector;
											delete p_media;
										}
										else
										{
											delete p_media;	
											throw 1;
										}
											delete p_media;	
						    		}
						    	}
						    	catch(int err_media)
						    	{
						    		cout << "\n\nNo message was found for this account with the senders number you entered"
							    	     << " and the receivers number you entered.  Either the numbers given are incorrect"
							    	     << " or the message does not exist, please try again." << endl;
						    	}
							}
						}
						else
						{
							throw 1;
						}
					break;
					}
					catch(int err_media)
					{
						cout << "\n\nAccount number not found, either the account number was entered incorrectly"
						     << " or the account does not exist." << endl;
					}
				}
			}
		}
		else
		{
			throw 1;
		}
	}
	catch(int err_type)
	{
		cout << "\nInvalid entry, please enter the type of message, \'voice\' or \'text\' or \'media\'!" << endl;
	}

	
}

void SmartCarrier::EraseMessage()
{
	string account_number   = "";
	string type             = "";
	string senders_number   = "";
	string receivers_number = "";
	int    vector_size      = 0;
	int    switch_number    = 0;

	cout << "Please enter your account number." << endl;
	cin.clear();
	cin.ignore();
	getline(cin, account_number);

	cout << "Please enter the type of message sent: text, voice, media." << endl;
	cin.clear();
	getline(cin, type);

	if(type == "text")
	{
		switch_number = 1;
		cout << switch_number << endl;
	}
	else if(type == "voice")
	{	
		switch_number = 2;
		cout << switch_number << endl;
	}
	else if(type == "media")
	{
		switch_number = 3;
		cout << switch_number << endl;
	}

	cout << "What phone number was used to send this message?" << endl;
	cin.clear();
	getline(cin, senders_number);

	cout << "What phone number was this message sent to?" << endl;
	cin.clear();
	getline(cin, receivers_number);

 	try
 	{

 		if(switch_number != 0)
 		{

			switch(switch_number)
			{
				case 1:
				{
					try
					{
						if (accounts_map.find(account_number) != accounts_map.end())
						{
							map<string, vector<Message*> >::iterator it = accounts_map.find(account_number);
							vector<Message*>::iterator iter;

							for(iter = it->second.begin( ) ;  iter !=  it->second.end( ); ++iter)
							{
								try
								{
							    	if(TextMessage * p_textmessage_vector = dynamic_cast <TextMessage*>(*iter))
							    	{
							    		TextMessage * p_text = NULL;
										p_text = new TextMessage(senders_number, receivers_number, "");

										if(*p_text == *p_textmessage_vector)
										{
											accounts_map.find(account_number)->second.erase(iter);
											iter = it->second.begin();
										}
										else
										{
											delete p_text;
											throw 1;
										} 
										delete p_text;
							    	}
							    }
							    catch(int err_text)
							    {
							    	cout << "\n\nNo message was found for this account with the senders number you entered"
							    	     << " and the receivers number you entered.  Either the numbers given are incorrect"
							    	     << " or the message does not exist, please try again." << endl;
							    }
							}
						}
						else
						{
							throw 1;
						}
						break;
					}
					catch(int err_does_not_exist)
					{
						cout << "\n\nAccount number not found, either the account number was entered incorrectly"
						     << " or the account does not exist." << endl;
					}
				}
				case 2:
				{
					try
					{
						if (accounts_map.find(account_number) != accounts_map.end())
						{
							map<string, vector<Message*> >::iterator it = accounts_map.find(account_number);
							vector<Message*>::iterator iter;

							for(iter = it->second.begin( ) ;  iter !=  it->second.end( ); ++iter)
							{
								try
								{
							    	if(VoiceMessage * p_voicemessage_vector = dynamic_cast <VoiceMessage*>(*iter))
							    	{
							    		VoiceMessage * p_voice = NULL;
										p_voice = new VoiceMessage(senders_number, receivers_number, 0);

										if(*p_voice == *p_voicemessage_vector)
										{
											accounts_map.find(account_number)->second.erase(iter);
											iter = it->second.begin();
										}
										else
										{
											delete p_voice;
											throw 1;
										}  
										delete p_voice;
							    	}
							    }
							    catch(int err_voice)
							    {
							    	cout << "\n\nNo message was found for this account with the senders number you entered"
							    	     << " and the receivers number you entered.  Either the numbers given are incorrect"
							    	     << " or the message does not exist, please try again." << endl;
							    }
							}
						}
						else
						{
							throw 1;
						}
						break;
					}
					catch(int err_does_not_exist)
					{
						cout << "\n\nAccount number not found, either the account number was entered incorrectly"
						     << " or the account does not exist." << endl;
					}
				}
				case 3:
				{
					try
					{
						if (accounts_map.find(account_number) != accounts_map.end())
						{
							map<string, vector<Message*> >::iterator it = accounts_map.find(account_number);
							vector<Message*>::iterator iter;

							for(iter = it->second.begin( ) ;  iter !=  it->second.end( ); ++iter)
							{
								try
								{
							    	if(MediaMessage * p_mediamessage_vector = dynamic_cast <MediaMessage*>(*iter))
							    	{
							    		MediaMessage * p_media = NULL;
										p_media = new MediaMessage(senders_number, receivers_number, 0);
										
										if(*p_media == *p_mediamessage_vector)
										{
											accounts_map.find(account_number)->second.erase(iter);
											iter = it->second.begin();
											delete p_media;
										} 
										else
										{
											delete p_media;
											throw 1;
										} 
									}
						    	}
						    	catch(int err_media)
						    	{
						    		cout << "\n\nNo message was found for this account with the senders number you entered"
								    	     << " and the receivers number you entered.  Either the numbers given are incorrect"
								    	     << " or the message does not exist, please try again." << endl;
						    	}
							}
						}
						else
						{
							throw 1;
						}
				}
				catch(int err_does_not_exist)
				{
					cout << "\n\nAccount number not found, either the account number was entered incorrectly"
						     << " or the account does not exist." << endl;
				}
			}
			break;
		}
			
		}
		else
		{
			throw 1;
		}
	}
	catch(int err_type)
	{
		cout << "\n\nInvalid entry, please enter the type of message, \'voice\' or \'text\' or \'media\'!" << endl;
	}
}

void SmartCarrier::DisconnectAccount()
{
	string account_number = "";
	int    vector_size    = 0;
	int    switch_number  = 0;

	cout << "Please enter the account number that you would like to erase." << endl;
	cin.clear();
	cin.ignore();
	getline(cin, account_number);

	if (accounts_map.find(account_number) != accounts_map.end())
	{
		accounts_map.erase(accounts_map.find(account_number));
	}
	else
	{
		throw 1;
	}

}

void SmartCarrier::StopService()
{
	ListAll();
	vector<Message*>::iterator iter;
	for(map<string, vector<Message*> >::iterator it = accounts_map.begin(); it != accounts_map.end(); ++it)
	{
		for(iter = it->second.begin( ) ;  iter !=  it->second.end( ); ++iter)
		{
			delete *iter;
		}

		it->second.clear();

	}

}


Message::Message ():senders_number_(""), receivers_number_("") {};

Message::Message(string senders_number, string receivers_number): senders_number_(senders_number),
                                                                  receivers_number_(receivers_number) {};

Message::~Message() {};

float Message::ComputeCharge() {};

bool  Message::operator==  (const Message & right) const
{
	return ((this->get_senders_number() == right.senders_number_) && (this->get_receivers_number() == right.receivers_number_));
}

void Message::set_senders_number(string senders_number) {senders_number_ = senders_number;};

void Message::set_receivers_number(string receivers_number) { receivers_number_ = receivers_number; };

string Message::get_senders_number() const {return senders_number_;};

string Message::get_receivers_number() const {return receivers_number_;};




TextMessage::TextMessage(): text_message_("") {};

TextMessage::TextMessage(string senders_number, string receivers_number,
                         string message): Message(senders_number, receivers_number), text_message_(message) {};

TextMessage::~TextMessage() 
{
	cout << "Text message object destroyed..." << endl;
};

void TextMessage::set_text_message(string text) {text_message_ = text;};

string TextMessage::get_text_message() const {return text_message_;};

float TextMessage::ComputeCharge() {return .20;};

ostream &  operator<<  (ostream & os,  const TextMessage & object)
{
	cout << "\nSenders Number " << "\treceivers_number" << "\tMessage\n" 
	     << object.get_senders_number() << "\t" << object.get_receivers_number() << "\t\t" 
	     << object.get_text_message() << endl;
}





VoiceMessage::VoiceMessage(): time_(0) {};

VoiceMessage::VoiceMessage(string senders_number, string receivers_number,
                           int time): Message(senders_number, receivers_number), time_(time) {};

VoiceMessage::~VoiceMessage() 
{
	cout << "Voice message object destroyed..." << endl;
};

float VoiceMessage::ComputeCharge() {return (.015 * time_);};

void VoiceMessage::set_time(int time) {time_ = time;};

int VoiceMessage::get_time() const { return time_; };

ostream &  operator<<  (ostream &,  const VoiceMessage & object)
{
	cout << "\nSenders Number " << "\treceivers_number" << "\t# of minutes\n" 
	     << object.get_senders_number() << "\t" << object.get_receivers_number() << "\t\t" 
	     << object.get_time() << endl;
}



MediaMessage::MediaMessage(): media_size_(0) {};

MediaMessage::MediaMessage(string senders_number, string receivers_number,
                           int media_size): Message(senders_number, receivers_number), media_size_(media_size) {};

MediaMessage::~MediaMessage() 
{
	cout << "Media message object destroyed..." << endl;
};

float MediaMessage::ComputeCharge() {return (.10 * media_size_);};

void MediaMessage::set_media_size(int size) {media_size_ = size;};

int MediaMessage::get_media_size() const {return media_size_;};

ostream &  operator<<  (ostream &,  const MediaMessage & object)
{
	cout << "\nSenders Number " << "\treceivers_number" << "\tData_size\n" 
	     << object.get_senders_number() << "\t" << object.get_receivers_number() << "\t\t" 
	     << object.get_media_size() << endl;
}

