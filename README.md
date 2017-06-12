# SpaceGeneratorDLL
A simple DLL to generate a galaxy.

I worked on this project in order to learn how to make DLL in C++ and how to import it in Unity and Unreal Engine 4.

I also learned how to manipulate seeds to generate a random world.

There is also a C# wrapper of the C++ DLL because it is easier to use a C# DLL in Unity.

# How it work

When generating a galaxy, if you have a billion stars, you can't have a million of objects star instantiated on your computer. So instead you manipulate Seeds.

Instead of instantiating a galaxy object, the DLL generate the seeds of all the stars.

Then you have to create an object star using the seed.

The project isn't really useful but it allowed me understand how to make a DLL and basic procedural generation.
