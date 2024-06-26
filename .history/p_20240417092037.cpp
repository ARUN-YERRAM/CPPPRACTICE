/*
    ! stuff you should look for
        * int overflow, array bounds
        * special cases (n=1)?
        * boundary cases
        * do something instead of nothing and stay organized.
        # BELIEVE in yourself.
*/
/*
? Some basic stuff that you should learn:
 
        ? Sets : Unique element container.
            ! set<int,greater<int> > s; // to order the set in descending order
            * To check if an element is in a set : s.count(x)
            ! Another method to check if an element exists in a set :if(s.find(x)!=s.end()){ // condition  }
            * Value of First Element of Set : *(s.begin())
            * Value of Last Element of Set : *(--s.end())
            ! To erase an element by value: s.erase(x);
            * begin() - returns an iterator to first element of set. The value of the element can be accessed using *(s.begin())
            * end() - Returns an iterator to the theoretical element that follows last element in the set.
            * size() - Returns the number of elements in the set.
            * max_size() - Returns the maximum number of elements that the set can hold.
            * empty() - Returns whether the set is empty.
            ! find(x) - Returns an iterator to the element ‘x’ in the set if found, else returns the iterator to end.
            * erase(x)– Removes the value ‘x’ from the set. It erases an element by value
            * count(x) - Returns 1 or 0 based on the element ‘x’ is present in the set or not. It's the best way to check for the presence of an element.
            * lower_bound(x) – Returns an iterator to the first element that is equivalent to ‘x’ or definitely will not go before the element ‘x’ in the set.
                            * lower_bound can also be thought as the smallest element greater than or equal to x
            * Return reverse iterator to reverse beginning: (s.rbegin())
            * Set to be sorted in decreasing order: set<int, greater<int> >
            * emplace() : If the function successfully inserts the element (because no
                    * equivalent element existed already in the set), the function returns a
                    * pair of an iterator to the newly inserted element and a value of true.
            * const bool is_in = s.find(x) != s.end(); check if an element is in the set.
            ! myset.erase(x) #directly by value. logarithmic complexity
            ! myset.erase(iteratortoanelement,s.end())
            * for_each(all(s),do_something);
            ! set<int> :: iterator it = myset.find(60);
 
        ? Vectors
            @ Erase elemnents by value rather than position
            # vec.erase(std::remove(vec.begin(), vec.end(), 8), vec.end());
            *
            @ Erase duplicates in a sorted array
            # v.erase(unique(v.begin(), v.end()), v.end());
            *
            @ Erase elements by position
            # vec.erase(vec.begin() + 1);
            vector<int> v; v.resize(n,0); // resizes the vector and initializes it too.
            front(), back(), push_back(), pop_back()
            * begin() - Returns an iterator pointing to the first element in the vector
            * end() - Returns an iterator pointing to the theoretical element that follows the last element in the vector
            * rbegin() - Returns a reverse iterator pointing to the last element in the vector (reverse beginning).
            * rend() - Returns a reverse iterator pointing to the theoretical element preceding the first element in the vector
            * cbegin(),cend(),crbegin(),crend()
            * size() - Returns the number of elements in the vector.
            * max_size() -  Returns the maximum number of elements that the vector can hold.
            * capacity() - Returns the size of the storage space currently allocated to the vector expressed as number of elements.
            * resize() - Resizes the container so that it contains ‘n’ elements.
            * empty() - Returns whether the container is empty.
            * shrink_to_fit() - Reduces the capacity of the container to fit its size and destroys all elements beyond the capacity.
            * reserve() - Requests that the vector capacity be at least enough to contain n elements.
            * [i] - Returns a reference to the element at position ‘i’ in the vector
            * at(i) - Returns a reference to the element at position ‘i’ in the vector
            # front() - Returns a reference to the first element in the vector
            # back() - Returns a reference to the last element in the vector
            * data() - Returns a direct pointer to the memory array used internally by the vector to store its owned elements.
            * assign() - It assigns new value to the vector elements by replacing old ones
            * push_back() - It push the elements into a vector from the back
            # pop_back() - It is used to pop or remove elements from a vector from the back.
            ! insert() - It inserts new elements before the element at the specified position
            * erase() - It is used to remove elements from a container from the specified position or range
            * swap() - It is used to swap the contents of one vector with another vector of same type. Sizes may differ.
            * clear() - It is used to remove all the elements of the vector container
            * emplace() - It extends the container by inserting new element at position
            * emplace_back() - It is used to insert a new element into the vector container, the new element is added to the end of the vector
            # for (auto it = myvector.begin(); it != myvector.end(); ++it)  // normal iterator
            # for (auto t:v)
 
        ? Queue
            * empty() - Returns whether the queue is empty.
            * size() - Returns the size of the queue.
            * emplace() - Insert a new element into the queue container, the new element is added to the end of the queue.
            * front() - front() function returns a reference to the first element of the queue.
            * back() - returns a reference to the last element of the queue.
            * push(x) - adds the element ‘x’ at the end of the queue
            * pop() - deletes the first element of the queue
 
        ? Priority_Queue
            ! priority_queue <int, vector<int>, greater<int>> pq; // to make a priority queue in descending order
            * empty() - returns whether the queue is empty.
            * size() -  returns the size of the queue.
            # top() -  Returns a reference to the top most element of the queue
            * push(x) - adds the element ‘x’ at the end of the queue.
            * pop() -  deletes the first element of the queue.
            * swap() -  swap the contents of one priority queue with another priority queue of same type and size.
            * emplace() - insert a new element into the priority queue container, the new element is added to the top of the priority queue.
 
        ? Deque
            Double ended queues are sequence containers with the feature of expansion and contraction on both the ends.
            They are similar to vectors, but are more efficient in case of insertion and deletion of elements.
            Unlike vectors, contiguous storage allocation may not be guaranteed.
            * insert()
            * rbegin()
            * rend()
            * assign()
            * resize()
            * push_front()
            * push_back()
            * pop_front()
            * pop_back()
            * front()
            * back()
*/