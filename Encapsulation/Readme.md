## Encapsulation

1. Wrapping data (variables) and methods (functions) together inside a class and controlling access to the data.
2. Without encapsulation, anyone can modify variables. With encapsulation, only functions can modify them after validations.
3. Getter and setter are the most common encapsulation tools.
4. Getter returns value, setter sets value after validation.

## Read-only Objects

`const ReadonlyObjects obj;`

Here `obj` is const, so none of its data members can be modified.
If any member function is not defined as const in this case, we get this error:
`this argument to member "getAge" has type const ReadonlyObjects, but function is not marked as const`

### Why?

Every non-static member function actually receives an implicit pointer called `this`.

For normal objects:

`Circle obj;`

Inside `getRadius()`, compiler treats it like:
`Circle* const this;`

This means function can modify the object.

For const objects:

`const Circle obj;`

Inside `getRadius()`, compiler expects:
`const Circle* const this;`

Non-const member function cannot be called on a `const Circle*`, because it might modify the object.

Reverse logic:

For a non-const function, `this` is roughly `Circle*`.
For a const function, `this` is `const Circle*`.

`Circle*` can be treated as `const Circle*` safely (removes permission to modify), but reverse is not safe.

- Const member function: callable on both const and non-const objects.
- Non-const member function: callable only on non-const objects.

## What Does `const` After Function Mean?

`double getRadius() const`

Equivalent idea:
`double getRadius(const Circle* const this)`

### Why should getters be const?

1. Getters only read data and do not modify the object.
2. Marking them const allows them to be called on both const and non-const objects.
3. It helps compiler enforce correctness by preventing accidental modifications.

If a member function does not modify object data, declare it const.

## Read-only Data

No setters. User can only read, cannot change data.

## Write-only Data

No getters.
Rare but possible (for example, setting passwords).

## Data Hiding vs Encapsulation

Data hiding: only hiding variables (`private`).

Encapsulation:
Wrapping data and methods together, and providing controlled access.
Encapsulation uses data hiding.

## Const Getter

Does not modify objects.

## Returning Reference

Instead of:
`string getName() { ... }`

Use:
`const string& getName() const { ... }`

### Advantages

- No copy
- Faster
- Safe because of const

### Two `const`s in this declaration

`const string& getName() const`

First const belongs to return type: `const string&`
Function returns a reference to string, but caller cannot modify string through that reference.

Second const belongs to member function: `getName() const`
Function cannot modify the object it is called on.

First const protects returned data.
Second const protects the object itself.

### Why no copy?

If we write `string getName() const {}`:
Function returns by value, so a separate string object is produced for the caller.

If we write `const string& getName() const {}`:
Function returns an alias to the same string already stored in the object.
A reference is not a new string object; it refers to the existing one.

### Why faster?

String may own heap memory. Copying may involve:

- Allocating memory
- Copying characters
- Constructing a new object

## Return Types and Function Types

Const member function can return `const double&` or `double`.
Non-const member function can return `double&`, `double`, or `const double&`.

`double`, `double&`, `const double&` with const and non-const member functions:

| Return Type | Function Type | Valid? | What caller gets | Can caller modify object through return? | Notes |
|---|---|---|---|---|---|
| `double` | `const` | Yes | A value copy | No | Typical read-only getter for cheap types like `double`. |
| `double` | non-`const` | Yes | A value copy | No | Still safe for encapsulation; function may modify object internally if it chooses. |
| `double&` | `const` | No (for member data) | N/A | N/A | Invalid for returning non-mutable members: cannot bind writable reference to `const` view in a `const` function. |
| `double&` | non-`const` | Yes | Writable alias to member | Yes | Caller can directly change private state; weakens encapsulation. |
| `const double&` | `const` | Yes | Read-only alias to member | No | No copy; safe read-only access if referred object outlives usage. |
| `const double&` | non-`const` | Yes | Read-only alias to member | No | Caller still cannot modify through this return type. |

### Quick summary

1. For `double`/`int`, prefer returning by value (`double getX() const`).
2. Use `const T&` mainly for heavier objects (`string`, `vector`, large structs).
3. Avoid returning non-const references from getters unless you intentionally want external mutation.

Value vs const reference vs non-const reference:

- Private + getter returning value or const reference -> encapsulation preserved.
- Private + getter returning non-const reference -> encapsulation weakened or broken.

Encapsulation does not mean nobody can see the data.
It means class controls how data is exposed and modified.

## Two Separate Concerns

### Write protection

If you return by value, outside code cannot directly change internal member.

### Information hiding

If you return value, outside code can know that value.
If value is sensitive, do not expose it directly, or expose only limited information.

Encapsulation helps control access, but does not automatically mean secrecy.

## Simple Rule

1. If reading data is acceptable, provide a getter with controlled read access.
2. If callers must not modify internal state directly, return read-only results (by value for cheap types, by const reference for heavier types).
3. If value itself is sensitive, do not provide a getter; expose only safe operations (for example, `checkPassword` instead of `getPassword`).

---

## Private Helper Function

Private helper functions are not mandatory, but they make code cleaner, safer, and easier to maintain.
They are helpful when input validation is needed.

### Advantages of private helper functions

1. Hide implementation details (users only see public API).
2. Avoid code duplication (multiple public functions can reuse same helper).
3. Protect object state (users cannot accidentally call internal functions in wrong order).
4. Make code easier to read (public functions become short and descriptive).

### Rule of thumb

Public functions -> what user of class should do.
Private helper functions -> how class performs that work internally.

This distinction is key for writing well-encapsulated, maintainable C++ classes.

---

## Encapsulation with Constructor

Ensures object is created in a valid state; users cannot create a broken object.

Encapsulation: binding data and methods together + restricting access.
Constructor: initializes encapsulated data when object is created.
Validation in constructor: ensures object starts in valid state.

Example: Can we create a bank account without an account number? No.

## Immutable Class

Objects cannot be changed after they are created.

### Why we need immutable classes

1. Prevent accidental modification.
If we have setters, someone can modify object. Immutable objects eliminate that possibility.

2. Thread safety.

Example:

Thread1 -> reads object
Thread2 -> modifies object

Now Thread1 might see inconsistent data.

With immutable object:

Thread1 -> reads object
Thread2 -> reads object

No one can modify it, so there are no race conditions on that object's state.
No need to lock before reading.
No inconsistent values caused by concurrent modifications.

### Why not use locks?

You can make mutable objects thread-safe with mutex, but locks have costs:

1. Threads may block while waiting.
2. Lock contention reduces throughput.
3. Deadlocks become possible if locks are misused.

Thread safety is one of the biggest reasons immutable objects are used in backend systems.

### How to make a class immutable

1. Make data members const.
2. Initialize them in constructor.
3. Do not provide setters.
4. Provide only getters.

Good for values that never change (Employee ID, Passport number, Aadhar number, PAN number, Colors like RGB(255,0,0)).
Not suitable for changing values (vehicle speed, download progress, bank account balance).

In C++, class does not have to make every data member const to follow immutable design.
Common approach:

1. Keep all data members private.
2. Initialize them in constructor.
3. Expose only const getters.
4. Do not provide operations that modify object's observable state.

This gives immutable interface even if some implementation details are not const internally.

## Encapsulation in STL

Vector internal implementation is hidden.

`vector<int> vec;`

We cannot do:
`vec.size = 100;`

Instead:

`v.push_back(10);`
`v.pop();`
`v.size();`

Data is hidden, size is hidden, and vector decides how internal state changes.
By keeping size private, vector ensures internal state remains consistent.

Suppose `push_back(30)` is called.

Internally vector does:

- Store 30
- Increase size
- Check capacity
- Reallocate if needed

We do not have to worry about these internal details.



















