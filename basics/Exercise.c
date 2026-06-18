#include "exercise.h"

float get_average(int x, int y, int z) {
    int sum = x + y + z;

    return sum / 3.0f;
}

float snek_score(int num_files, int num_contributors, int num_commits,
                 float avg_bug_criticality);
