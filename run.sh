rm -f results
clear

#./bin/shortest-path -f datasets/tiny/tinyGraph.txt -q datasets/tiny/tinyWorkload_FINAL.txt && diff "./results" "./datasets/tiny/tinyWorkload_RESULTS.txt"
#./bin/shortest-path -f datasets/small/smallGraph.txt -q datasets/small/smallWorkload_FINAL.txt && diff "./results" "./datasets/small/smallWorkload_RESULTS.txt"
#./bin/shortest-path -f datasets/medium/mediumGraph.txt -q datasets/medium/mediumWorkload_FINAL.txt && diff "./results" "./datasets/medium/mediumWorkload_RESULTS.txt"
#./bin/shortest-path -f datasets/medium/mediumGraph.txt -q datasets/medium/static_workload/mediumWorkload_static_FINAL.txt && diff "./results" "./datasets/medium/static_workload/mediumWorkload_static_RESULTS.txt"
#./bin/shortest-path -f datasets/large/large.txt -q datasets/large/dynamic_workload/largeWorkload_6000_20.txt && diff "./results" "./datasets/large/dynamic_workload/largeWorkload_6000_20_RESULTS.txt"

./bin/shortest-path -f datasets/tiny/tinyGraph.txt -q datasets/tiny/tinyWorkload_FINAL.txt
#./bin/shortest-path -f datasets/small/smallGraph.txt -q datasets/small/smallWorkload_FINAL.txt
#./bin/shortest-path -f datasets/medium/mediumGraph.txt -q datasets/medium/mediumWorkload_FINAL.txt
#./bin/shortest-path -f datasets/medium/mediumGraph.txt -q datasets/medium/static_workload/mediumWorkload_static_FINAL.txt
#./bin/shortest-path -f datasets/large/large.txt -q datasets/large/dynamic_workload/largeWorkload_6000_20.txt
#./bin/shortest-path -f datasets/test/duplicatesGraph.txt
#./bin/shortest-path -f datasets/test/serialGraph.txt


# Valgrind
#valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./bin/shortest-path -f datasets/tiny/tinyGraph.txt -q datasets/tiny/tinyWorkload_FINAL.txt
#valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./bin/shortest-path -f datasets/small/smallGraph.txt -q datasets/small/smallWorkload_FINAL.txt
