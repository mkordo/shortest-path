#include <iostream>

#include "statistics.h"

using namespace std;

Statistics::Statistics(bool pleasePrint_) {
    pleasePrint = pleasePrint_;

    sizeGraphOut = 0;
    sizeGraphIn = 0;

    duplicates = 0;
    duplicatesQA = 0;
    insertions = 0;
    queries = 0;
    gusts = 0;

    sizeGraphOut = 0;
    sizeGraphIn = 0;
    sizeGraphDupl = 0;

    sizeGraphUsedOut = 0;
    sizeGraphUsedIn = 0;
    sizeGraphUsedDupl = 0;

    numOfVersions = 0;
}

Statistics::~Statistics() {}

void Statistics::Start() {
  if(pleasePrint)
   cout << "Started Program...\n";
  start = clock();
}

void Statistics::CreatedGraphs() {
  created = clock();
  if(pleasePrint) {
    cout << "\nCreated Graphs\n";
    //cout << "\nExecuting Queries...\n";
  }
}

void Statistics::ExecutedQueries() {
  executed = clock();
}

void Statistics::finalSizes(uint32_t out, uint32_t in, uint32_t dupl)
{
  sizeGraphOut = out;
  sizeGraphIn = in;
  sizeGraphDupl = dupl;
}
void Statistics::finalUsedSizes(uint32_t out, uint32_t in, uint32_t dupl)
{
  sizeGraphUsedOut = out;
  sizeGraphUsedIn = in;
  sizeGraphUsedDupl = dupl;
}

void Statistics::Insertion()
{
  insertions++;
}

void Statistics::Query()
{
  queries++;
}

void Statistics::Gust()
{
  gusts++;
}

void Statistics::totalNumOfVersions(int num)
{
  numOfVersions = num;
}

uint32_t Statistics::getQueries()
{
  return queries;
}

void Statistics::Print() {
  if(pleasePrint) {
    cout << "\nStatistics: \n\n";

    cout << "Queries : " << queries << "\n";
    cout << "Insertions : " << insertions << "\n";
    cout << "Gusts : " << gusts << "\n\n";

    cout << "Duplicates in creation : " << duplicates << "\n";
    cout << "Duplicates in queries : " << duplicatesQA << "\n\n";

    cout << "Total number of versions : " << numOfVersions << "\n\n";

    //*
    cout << "Size of graph used: Out: " << sizeGraphUsedOut << "\n";
    cout << "Size of graph used: In: " << sizeGraphUsedIn << "\n";
    cout << "Size of graph used: Dupl: " << sizeGraphUsedDupl << "\n\n";

    cout << "Size of graph: Out: " << sizeGraphOut << "\n";
    cout << "Size of graph: In: " << sizeGraphIn << "\n";
    cout << "Size of graph: Dupl: " << sizeGraphDupl << "\n\n";
    //*/
    cout << "Graph Creation : " << double(created - start) / CLOCKS_PER_SEC << " secs\n";
    cout << "Query Execution : " << double(executed - created) / CLOCKS_PER_SEC << " secs\n";
    cout << "Total time : " << double(executed - start) / CLOCKS_PER_SEC << " secs\n\n";
  }
}
