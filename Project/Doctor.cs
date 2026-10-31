
using System;
using System.Collections.Generic;
using ProjectManagement.Hospital;

namespace ProjectManagement.UI
{
    internal class DoctorUI
    {
        private DoctorService _doctorService = new DoctorService();

        public void Start()
        {
            DoctorDriver();
        }

        public void DoctorDriver()
        {
            while (true)
            {
                string option = DoctorMenu();

                if (option == "1")
                {
                    AddDoctorUI();
                }
                else if (option == "2")
                {
                    UpdateDoctor();
                }
                else if (option == "3")
                {
                    DeleteDoctor();
                }
                else if (option == "4")
                {
                    DisplayAllDoctors();
                }
                else if (option == "5")
                {
                    break;
                }
                else
                {
                    Console.WriteLine("Wrong option selected. Press any key to try again.");
                    Console.ReadKey();
                }
            }
        }

        // Doctor Menu
        public string DoctorMenu()
        {
            Console.Clear();

            Console.WriteLine("================================================");
            Console.WriteLine("             DOCTOR MANAGEMENT SYSTEM");
            Console.WriteLine("================================================");
            Console.WriteLine("1. Add Doctor");
            Console.WriteLine("2. Update Doctor");
            Console.WriteLine("3. Delete Doctor");
            Console.WriteLine("4. View All Doctors");
            Console.WriteLine("5. Back");

            Console.Write("\nEnter your choice: ");

            return Console.ReadLine();
        }

        // Add Doctor
        public void AddDoctorUI()
        {
            Console.Clear();

            Console.WriteLine("--- Add New Doctor ---");

            Console.Write("Enter Doctor ID: ");
            int id = int.Parse(Console.ReadLine());

            Console.Write("Enter Name: ");
            string name = Console.ReadLine();

            Console.Write("Enter Specialization: ");
            string specialization = Console.ReadLine();

            Console.Write("Enter Consultation Fee: ");
            float fee = float.Parse(Console.ReadLine());

            _doctorService.AddDoctor(id, name, specialization, fee);

            Console.WriteLine("\nDoctor Added Successfully!");
            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }

        // Update Doctor
        public void UpdateDoctor()
        {
            Console.Clear();

            Console.WriteLine("--- Update Doctor ---");

            Console.Write("Enter Doctor Name: ");
            string name = Console.ReadLine();

            Console.Write("Enter New Consultation Fee: ");
            float fee = float.Parse(Console.ReadLine());

            _doctorService.UpdateDoctor(name, fee);

            Console.WriteLine("\nDoctor Updated Successfully!");
            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }

        // Delete Doctor
        public void DeleteDoctor()
        {
            Console.Clear();

            Console.WriteLine("--- Delete Doctor ---");

            Console.Write("Enter Doctor Name: ");
            string name = Console.ReadLine();

            _doctorService.DeleteDoctorByName(name);

            Console.WriteLine("\nDoctor Deleted Successfully!");
            Console.WriteLine("Press any key to continue...");
            Console.ReadKey();
        }

        // Display All Doctors
        public void DisplayAllDoctors()
        {
            Console.Clear();

            Console.WriteLine("--- All Doctors List ---");

            List<DoctorModel> doctors = _doctorService.GetAllDoctors();

            if (doctors.Count == 0)
            {
                Console.WriteLine("No Doctors Found!");
            }
            else
            {
                foreach (DoctorModel d in doctors)
                {
                    Console.WriteLine("------------------------------------");

                    Console.WriteLine("Doctor ID: " + d.GetDoctorID());
                    Console.WriteLine("Doctor Name: " + d.GetDoctorName());
                    Console.WriteLine("Specialization: " + d.GetSpecialization());
                    Console.WriteLine("Consultation Fee: " + d.GetConsultationFee());
                }

                Console.WriteLine("------------------------------------");
            }

            Console.WriteLine("\nPress any key to continue...");
            Console.ReadKey();
        }
    }
}
