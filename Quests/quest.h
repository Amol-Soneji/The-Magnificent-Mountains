#ifndef QUEST_H
#define QUEST_H

#include <string>

using std::string;

class Quest
{
	public:
		Quest(string name, string description) : name(name), description(description) {}
		string getQuestName() const;
		string getQuestDescription() const;
	private:
		String name, description;
};

#endif
