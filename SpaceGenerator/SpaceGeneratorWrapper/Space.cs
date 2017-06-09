using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;

namespace SpaceGeneratorWrapper
{
    class Imports
    {
        internal const string DLLName = "SpaceGenerator";

        [DllImport(DLLName)]
        public static extern int Generate(int a, int b);
        [DllImport(DLLName)]
        public static extern void GenerateTwo(int a, int b);
    }

    public class SpaceGenerator
    {
        public static int add(int a, int b)
        {
            return Imports.Generate(a, b);
        }

        public static void GenerateTwo(int a, int b) { }
    }
}
