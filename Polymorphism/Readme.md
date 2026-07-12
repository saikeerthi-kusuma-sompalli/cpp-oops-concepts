# Polymorphism

One interface (common way to interact with objects/methods), many forms.

1. Same function name/interface (function/method), different behavior.
2. Behavior depends on object/type (derived classes).

Interface = WHAT you call (interface type/classes or interface methods)
Type = WHO executes it (actual runtime type)
Object = actual instance

## Compile-time Polymorphism (Static Binding / Early Binding)

Polymorphic nature of an entity is decided by compiler during compilation.

1. Method overloading
2. Operator overloading

### Method Overloading

Process of defining multiple methods with same method name, but different signatures.

### Method Signature

Signature includes 3 parts:

1. Number of parameters
2. Type of parameters
3. Order of parameters

## Runtime Polymorphism (Dynamic Binding / Late Binding)

Polymorphic nature of an entity is decided during runtime.

Compiler checks whether object/method definitions are valid, syntax is correct,
and class relationships (for example, derived class) are valid.
Compiler does not decide final runtime method target by itself.

1. We do not need separate code for each derived class.
2. We often decide destination/configuration/database at runtime.

Runtime polymorphism helps when exact type is not known until runtime,
and we need one piece of code to work with many types.

Polymorphism is for handling situations where exact object type is not fixed
when we write code (runtime type is decided during execution).
