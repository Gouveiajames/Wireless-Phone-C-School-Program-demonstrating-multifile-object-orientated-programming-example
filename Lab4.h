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

#ifndef LAB4_
#define LAB4_

#include <map>
#include <vector> 
using namespace std;

class Message
{
   private:
      string senders_number_;
      string receivers_number_;

   public:
      Message ();
      Message(string senders_number, string receivers_number);
      virtual ~Message();
      virtual float ComputeCharge() = 0;

      bool operator == (const Message & right) const;
      void set_senders_number(string senders_number);
      void set_receivers_number(string receivers_number);
      string get_senders_number() const;
      string get_receivers_number() const;
      
};

class TextMessage: public Message
{
   private:
      string text_message_;
   public:
      TextMessage();
      TextMessage(string senders_number, string receivers_number, string message);
      virtual ~TextMessage();
      virtual float ComputeCharge();
      void set_text_message(string text);
      string get_text_message() const;
      friend  ostream & operator<<  (ostream &,  const TextMessage &);
};

class VoiceMessage: public Message
{
   private:
      int time_;
   public:
      VoiceMessage();
      VoiceMessage(string senders_number, string receivers_number, int time);
      virtual ~VoiceMessage();
      virtual float ComputeCharge();
      void set_time(int time);
      int get_time() const;
      friend  ostream &  operator<<  (ostream &,  const VoiceMessage & object);
};

class MediaMessage: public Message
{
   private:
      int media_size_;
   public:
      MediaMessage();
      MediaMessage(string senders_number, string receivers_number, int media_size);
      virtual ~MediaMessage();
      virtual float ComputeCharge();
      void set_media_size(int size);
      int get_media_size() const;
      friend  ostream &  operator<<  (ostream &,  const MediaMessage & object);
};

class SmartCarrier
{
   private:
      string carrier_name_;
      map<string, vector<Message*> > accounts_map;

      void menu();
      int  GetChoice();
      void ListAll();
      void SearchMessage();
      void EraseMessage();
      void DisconnectAccount();
      void StopService()
   public:
      SmartCarrier();
      SmartCarrier(string name);
      ~SmartCarrier();
      void set_carrier_name(string name);
      string get_carrier_name() const;
      void Init();
      void StartService();
};


#endif
