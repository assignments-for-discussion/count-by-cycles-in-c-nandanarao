#include <stdio.h>
#include <assert.h>

struct CountsByUsage 
{
  int lowCount;
  int mediumCount;
  int highCount;
};

struct CountsByUsage counts 
{
  struct CountsByUsage counts = {0, 0, 0};
  return counts;
};
struct BatteriesByUsage(const int* cycles, int* nBatteries) 
{ 
  int cycles;
  int nBatteries;
};

void testBucketingByNumberOfCycles() 
{
  const int chargeCycleCounts[] = {100, 300, 500, 600, 900, 1000};
  const int numberOfBatteries = sizeof(chargeCycleCounts) / sizeof(chargeCycleCounts[0]);
  printf("Counting batteries by usage cycles...\n");
  struct CountsByUsage counts = countBatteriesByUsage(chargeCycleCounts, numberOfBatteries);
  assert(counts.lowCount == 1);
  assert(counts.mediumCount == 3);
  assert(counts.highCount == 2);
  printf("Done counting :)\n");
}

int main() 
{
  testBucketingByNumberOfCycles();
  return 0;
}
