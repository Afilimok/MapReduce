# MapReduce



## Commands for compile 

``g++ mapreduce.cpp -o mapreduce``

``g++ reduce.cpp -o reduce``

``g++ map.cpp -o map``


## Run:
``./mapreduce map ./map input_map.txt input_reduce.txt ``


``. ./mapreduce reduce ./reduce input_reduce.txt output.txt``
