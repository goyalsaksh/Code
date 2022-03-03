#ifndef ADMIN_H_
#define ADMIN_H_

#include <string>
#include <ctime>
#include "citizen.h"
#include "dateutil.h"
using namespace std;

class Admin
{
	string pswd;
	static int available_slots; // The number of vaccine slots available per day
	static string last_date;

public:
	static int age_eligibility; // The minimum age eligible for registration

	Admin() // Constructor
	{
		pswd = "vaccine";
	}
	bool run_process(CitizenQueueList &cqueue);
	void display_top_n(CitizenQueueList &cqueue);
	void display_today(CitizenQueueList &cqueue);
	void change_eligibility(CitizenQueueList &cqueue);
	void change_available_slots();
	bool verify_password(string pass);
	void remove(Citizen *user, string pswd, CitizenQueueList &cqueue);
	void remove_age_ineligible(CitizenQueueList &cqueue);

	friend class CitizenQueueList;
};
// Admin class implementation

int Admin::age_eligibility = 18;
int Admin::available_slots = 1;
string Admin::last_date = "";

bool Admin::verify_password(string pass)
{
	// verifies admin password and returns true on match
	return pass == pswd;
}

bool Admin::run_process(CitizenQueueList &cqueue)
{
	// allots slots to citizen basis of priority queue and return true if executed

	Citizen *selected = cqueue.front;
	Citizen *dq = nullptr;

	// Extracting today's date
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int day = ltm->tm_mday;
	int month = ltm->tm_mon + 1;
	int year = ltm->tm_year + 1900;

	cout << "Enter day :";
	cin >> day;
	cout << "Enter month :";
	cin >> month;
	cout << "Enter year :";
	cin >> year;

	string today = date_string(day, month, year); // The representation of a today's date

	if (today == last_date)

		// ALLOTMENT PROCESS:

		// For citizens who have been allocated slots previously
		while (selected != nullptr && selected->visible)
		{
			if (selected->slot_date == today) // Citizens whose slot is today
			{
				selected->slot_today = true; // Modifies the citizen's slot_today member
				selected = selected->next;
			}
			else
			{
				// Citizens whose slot occurred yesterday, but who failed to get vaccinated, so remove them to get fresh slots

				selected = selected->next; // Preserving the traversal before moving the element

				int new_priority = cqueue.get_min_priority() - 1;
				dq = cqueue.dequeue();
				dq->visible = false;
				dq->slot_today = false;
				dq->demoted = true;
				dq->priority = new_priority;
				dq->slot_date = "Not Alloted Yet.";

				cqueue.enqueue(dq);
			}
		}
	string dslot = get_next_date(day, month, year); // Generates the string representation for the following day.

	// Allocates the following day's slot to the citizens and enables them to check their date slots.

	for (int count = 1; count <= available_slots; count++)
	{
		if (selected == nullptr)
			break;
		selected->slot_date = dslot;
		selected->visible = true;
		selected = selected->next;
	}

	last_date = today; // Modifies the last_date member to today's date

	return true;
}

void Admin::display_top_n(CitizenQueueList &cqueue)
{
	unsigned n;
	cout << "\n\tHow many entries are to be displayed ?";
	cin >> n;
	cqueue.display_top_n(n);
}

void Admin::display_today(CitizenQueueList &cqueue)
{
	cqueue.display_today();
}
void Admin::change_eligibility(CitizenQueueList &cqueue)
{
	// Allows admin to change the minimum eligibility age

	cout << "\n\tEnter eligibility age : ";
	cin >> age_eligibility;
	remove_age_ineligible(cqueue);
	cout << "\n\t\tChanged successfully." << endl;
}
void Admin::change_available_slots()
{
	// Allows admin to change available_slots as per actual availability

	cout << "\n\tEnter new number : ";
	cin >> available_slots;
	cout << "Changed successfully." << endl;
}

void Admin::remove(Citizen *user, string pswd, CitizenQueueList &cqueue)
{
	cqueue.remove(user, pswd);
}

void Admin::remove_age_ineligible(CitizenQueueList &cqueue)
{
	Citizen *cur = cqueue.front;
	Citizen *prev = nullptr;
	Citizen *to_delete = nullptr;
	bool delete_flag = false;

	while (cur != nullptr)
	{
		delete_flag = cur->age < age_eligibility && !cur->visible;
		if (delete_flag)
		{
			if (prev == nullptr) // Removing from the front
				cqueue.front = cur->next;
			else // Removing from other positions
				prev->next = cur->next;
			if (cqueue.rear == cur) // Removing from rear
				cqueue.rear = prev;
			to_delete = cur;
			cur = cur->next;
			to_delete->next = nullptr;
			delete (to_delete);
		}
		else
		{
			prev = cur; // change prev only if cur is not to be deleted
			cur = cur->next;
		}
	}
}

#endif /* ADMIN_H_ */