## What is Hashing ?

Hashing is a process of converting data (such as a key or input) into a fixed-size value or hash code. The generated hash code is typically a numeric or alphanumeric representation that serves as a unique identifier for the input data. The main purpose of hashing is to quickly retrieve or locate data in various data structures, such as hash tables or hash-based data structures.

A hash function is a mathematical algorithm used to perform the hashing process. It takes an input and produces a hash code as the output. 

### The hash function should have the following properties:

- Deterministic: Given the same input, the hash function should always produce the same hash code.

- Fast Computation: The hash function should generate the hash code quickly, ideally in constant time or with a time complexity of O(1).

- Uniform Distribution: The hash function should distribute the input data uniformly across the range of possible hash codes. This property helps reduce collisions, where different inputs produce the same hash code.

- Irreversibility: It should be computationally infeasible to derive the original input data from the hash code. This property is important for security-related applications.

### Hashing finds applications in various fields, including:

- Hash Tables: Hash tables use hashing to store and retrieve data efficiently. They map keys to values using a hash function, which allows for constant-time average-case operations, such as insertion, deletion, and retrieval.

- Data Integrity: Hashing is used to verify the integrity of data by comparing the hash code of received data with the original hash code. If the hash codes match, it indicates that the data has not been tampered with.

- Password Storage: Hashing is commonly used to store passwords securely. Instead of storing the actual passwords, the hash codes of the passwords are stored. When a user tries to log in, their entered password is hashed and compared with the stored hash code.

- Digital Signatures: Hash functions are a crucial component of digital signature algorithms. They help ensure the authenticity and integrity of digital documents by generating a unique hash code that is then encrypted using the sender's private key.

- Caching: Hashing is used in caching mechanisms to quickly retrieve cached data based on a hash key. The hash key maps to a location in the cache, allowing for efficient retrieval of frequently accessed data.

## What is Collision Handling ?

Collision handling in hashing refers to the mechanisms and strategies employed to handle situations where multiple keys produce the same hash code or hash value. Collisions occur when different keys map to the same location or bucket in a hash table or hash-based data structure.

Since hash functions have a finite range of possible hash codes, collisions are inevitable when dealing with a larger number of keys than the number of available hash codes. Proper collision handling is crucial to maintain the correctness and efficiency of hash-based data structures.

## There are different techniques for collision handling, including:

- Separate Chaining: With separate chaining, each bucket or location in the hash table contains a linked list or another data structure. When a collision occurs, the colliding keys are added to the same bucket, forming a chain. This allows multiple keys with the same hash code to coexist in the same location.

- Open Addressing: In open addressing, all keys are stored directly in the hash table itself, without using separate data structures. When a collision happens, an alternative location within the hash table is probed using a specific algorithm, such as linear probing, quadratic probing, or double hashing. This process continues until an empty slot is found.

- Robin Hood Hashing: Robin Hood hashing is a variation of open addressing that aims to reduce the variance in probe lengths. When a collision occurs, it checks the displacement of the colliding key from its ideal bucket. If the displacement is smaller than that of the current key in the bucket, they swap places, reducing the variance in probe lengths.

- Cuckoo Hashing: Cuckoo hashing is another variant of open addressing where each key can be stored in one of two possible locations. When a collision occurs, it checks the alternative location, and if it is occupied, it evicts the existing key and recursively repeats the process. This eviction chain continues until an empty slot is found or a maximum number of evictions is reached.

The choice of collision handling technique depends on factors such as the expected number of collisions, load factor, space efficiency requirements, and the specific characteristics of the data being stored. Each technique has its own trade-offs in terms of memory usage, insertion and retrieval times, and ease of implementation.

Proper collision handling ensures that keys with the same hash code can be stored and retrieved correctly in a hash-based data structure, maintaining the expected time complexity and performance guarantees.