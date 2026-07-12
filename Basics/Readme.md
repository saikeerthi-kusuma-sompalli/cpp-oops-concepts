Different types of Object Creation:

1. Automatic(stack) Object:

Object is created on stack and will be destroyed automatically once if it out of scope
Example: 
ObjectCreation obj;

2. Dynamic(Heap) Object:

Object is created on Heap and should be deleted Manually
Example: 
ObjectCreation* obj = new ObjectCreation();
delete obj;

3. Using Constructor Arguments
ObjectCreation obj(10); // we have a defined parameterized constructor

4. Copy initialization:
Example: 
ObjectCreation obj;
ObjectCreation obj1 = obj // Copy Constructor

5. Direct Initialization:
Example: 
ObjectCreation obj;
ObjectCreation obj1(obj)  // Copy Constructor

6. Dynamic allocation with Constructor:

Example: 
ObjectCreation* obj = new ObjectCreation(5);
delete obj;

7. Smart Pointers (Managed Heap Object)

Recommended for Dynamic Objects

Using std::unique_ptr
Example:
#include<memory>
std::unique_ptr<ObjectCreation> obj = std::make_unique<ObjectCreation>();

Using std::shared_ptr:
Example:
#include<memory>
std::shared_ptr<ObjectCreation> obj = std::make_shared<ObjectCreation>();

8. Temporary(Anonymous) Object:
ObjectCreation();

Example:
test(ObjectCreation());
Object exists only for that expression

9. Reference to an object
No new object is created
Reference refers to an existing object

Example:

ObjectCreation obj;
ObjectCreation& ref = obj;
