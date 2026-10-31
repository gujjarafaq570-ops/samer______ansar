
using System;
using ProjectManagement.UI;

namespace ProjectManagement
{
    internal class Program
    {
        static void Main(string[] args)
        {
            while (true)
            {
                Console.Clear();

                Console.WriteLine("========================================");
                Console.WriteLine("       HOSPITAL MANAGEMENT SYSTEM");
                Console.WriteLine("========================================");
                Console.WriteLine("1. Doctor Management");
                Console.WriteLine("2. Patient Management");
                Console.WriteLine("3. Exit");

                Console.Write("\nEnter your choice: ");

                string option = Console.ReadLine();

                if (option == "1")
                {
                    DoctorUI doctor = new DoctorUI();
                    doctor.Start();
                }
                else if (option == "2")
                {
                    PatientUI patient = new PatientUI();
                    patient.Start();
                }
                else if (option == "3")
                {
                    Console.WriteLine("Thank you for using Hospital Management System!");
                    break;
                }
                else
                {
                    Console.WriteLine("Invalid choice! Press any key to continue.");
                    Console.ReadKey();
                }
            }
        }
    }
}
