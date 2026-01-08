Namespace: 
->Is Just a named container for names/ scope that gives names a unique identity to avoid conflict/
-> It helps the compiler and linker distinguish between things that have the same name but belong to different logical groups

---------------------------------------------------------------------------------------------------


Different Types of Namespaces:

1. Named Namespaces
2. Anonymous(Unamed) Namesapces
3. Inline Namespaces
4. Nested Namespaces
5. Namespace Aliases
6. Using-directives vs using-declarations

Named Namespaces
This is the standard, most common type.you give a name to a namespace.
Groups related functions, classes, and variables together

Anonymous(Unamed) Namesapces:
Namespaces without a name
Members are only visible in the current file
Useful to replace static for internal linkage (encapsulation in a large project)

why Anonymous when I can use static keyword:

inline Namespaces:
Default usage: Users of your library automatically use the latest version
Backward compatibility: Old code can still use if needed

you can't declare the same function, with same parameters in inline namespaces (under same namespace) - it will through error: more than one instance of overloaded function 

Nested Namespaces:

standard Library uses nested namespaces (std::filesystem::path,standard Library uses nested namespaces)
Nested namespaces are used to hierarchically organize code, improve clarity, and avoid name collisions in large systems
---------------------------------------------------------------------------------------------------

Why Namespace is important(For Real world Applications):

Avoid name collisions → different libraries can have same function/class names.
Organize code → group related classes/functions.
Control visibility → anonymous namespaces limit scope to a file.
Support versioning → inline namespaces for evolving libraries.
Keep global scope clean → prevent accidental symbol conflicts.
Improve readability → aliases and nested namespaces simplify code.


Difference between Namespace and class:

Namespace                                   Classes
1. Organizes names                          Models data + beahviour
2. No memory, no Object, No runtime         Objects consume memory, Exists at runtime
3. No OOPS concept                          





---------------------------------------------------------------------------------------------------
why using namespace std is dangerous:

Name Collisions -> I defined count varaible , even std library has count algorithm function -> compiler 
Bad code readability (I defined sort(), from where it came is it my code, is it from STL, or is it from some third party libraries)


--------------

Why std is a namespace, not a class????????
