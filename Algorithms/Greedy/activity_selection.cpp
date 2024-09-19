/*
* Activity Selection Problem:
* The activity selection problem involves selecting the maximum number of activities that can be performed by a single person, given 
* their start and finish times. The goal is to choose the activities such that no two activities overlap. 
* 
* To solve this problem using a greedy approach:
* 1. Sort all activities based on their finish times in ascending order.
* 2. Select the first activity and then iteratively select the next activity that starts after the previous activity finishes.
* 
* This approach ensures that the maximum number of activities are selected while adhering to the non-overlapping constraint.
*/

#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> doableActivities(vector<int> start, vector<int> finish) {
  vector<pair<int, int>> result;

  vector<pair<int, int>> activities;

	// make pairs of activities, keeping their finish time as first element (to sort based on finish time)
  for (int i = 0; i < start.size(); i++) {
    activities.push_back({finish[i], start[i]});
  }

	// sorting activities based on their finish times in ascending order
  sort(activities.begin(), activities.end());
	// sorted activities:
	// {finish, start}
	// {4,2}, {5,3}, {7,6}, {9,7}, {9,8}, {12,9}

	// set previous activity finish time to -1, since no activities have been encountered
  int previous_activity_finish_time = -1;

	// iterate over all the activities
  for (auto activity : activities) {
		// start and finish times of current activity
    int start_time = activity.second, finish_time = activity.first;

		// if the previous activity finishes before the start time of current activity,
		// then we can select the current activity as a doable activity
    if (previous_activity_finish_time <= start_time) {
      result.push_back({start_time, finish_time});

			// update the previous activity's finish time after selecting current activity
      previous_activity_finish_time = finish_time;
    }
  }

  return result;
}

int main() {
  vector<int> start = {7, 8, 3, 6, 2, 9};
  vector<int> finish = {9, 9, 5, 7, 4, 12};

  vector<pair<int, int>> result = doableActivities(start, finish);

  for (auto activity : result) {
    cout << "{" << activity.first << ", " << activity.second << "} ";
  }

  cout << '\n';

  return 0;
}
