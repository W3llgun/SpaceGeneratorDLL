# SpaceGeneratorDLL
A simple DLL to generate a galaxy.

I worked on this project in order to learn how to make DLL in C++ and how to import it in Unity and Unreal Engine 4.

There is also a C# wrapper of the C++ DLL because it is easier to use a C# DLL in Unity.

# How it work

When generating a galaxy, if you have a billion stars, you can't have a million of objects star instantiated on your computer. So instead you manipulate Seeds.

So instantiating a galaxy object will generate the seeds of all the stars of our galaxy.


Then you have to instanciate an object star using a seed.

The project isn't really useful but it allowed me understand how to make a DLL.
