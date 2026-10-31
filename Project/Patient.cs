using System;
using System.Collections.Generic;
using System.Text;
using ProjectManagement.Hospital;


namespace ProjectManagement.UI
{
    internal class PatientUI
    {
        // Field declared correctly inside the class
        private PatientService _patientService = new PatientService();

        public void Start()
        {
            PatientDriver();
        }

        public void PatientDriver()
        {
            while (true)
            {
                string option = PatientMenu();

                if (option == "1")
                {
                    AddPatientUI();
                }
                else if (option == "2")
                {
                    UpdatePatientUI();
                }
                else if (option == "3")
                {
                    // Delete Patient UI placeholder
                    Console.Clear();
                    Console.WriteLine("Delete functionality coming soon.");
                    Console.ReadKey();
                }
                else if (option == "4")
                {
                    DisplayAllPatients();
                }
                else if (option == "5")
                {
                    break; // Exits the loop and goes back to the main menu
                }
                else
                {
                    Console.WriteLine("Wrong option selected. Press any key to try again.");
                    Console.ReadKey();
                }
            }
        }

        public string PatientMenu()
        {
            Console.Clear();
            Console.WriteLine("================================================");
            Console.WriteLine("            PATIENT MANAGEMENT SYSTEM           ");
            Console.WriteLine("================================================");
            Console.WriteLine("1. Add Patient");
            Console.WriteLine("2. Update Patient");
            Console.WriteLine("3. Delete Patient");
            Console.WriteLine("4. View All Patients");

            Console.ForegroundColor = ConsoleColor.Green;
            Console.WriteLine("5. Back");
            Console.ForegroundColor = ConsoleColor.White;

            Console.Write("\nEnter your choice: ");
            return Console.ReadLine();
        }

        public void AddPatientUI()
        {
            Console.Clear();
            Console.WriteLine("--- Add New Patient ---");

            Console.Write("Enter Name: ");
            string name = Console.ReadLine();

            Console.Write("Enter Disease: ");
            string disease = Console.ReadLine();

            Console.Write("Enter Age: ");
            int age = int.Parse(Console.ReadLine());

            Console.Write("Enter Room Number: ");
            int roomNumber = int.Parse(Console.ReadLine());

            Console.Write("Enter Consultation Fee: ");
            float fee = float.Parse(Console.ReadLine());

            // Calls the service method to add the patient
            _patientService.AddPatient(name, disease, age, roomNumber, fee);

            Console.WriteLine("\nPatient Added Successfully! Press any key to continue...");
            Console.ReadKey();
        }

        public void UpdatePatientUI()
        {
            Console.Clear();
            Console.WriteLine("--- Update Patient ---");

            Console.Write("Enter Name of Patient to Update: ");
            string name = Console.ReadLine();

            Console.Write("Enter New Disease: ");
            string newDisease = Console.ReadLine();

            Console.Write("Enter New Consultation Fee: ");
            float newFee = float.Parse(Console.ReadLine());

            // Calls the service method to update the patient
            _patientService.UpdatePatient(name, newDisease, newFee);

            Console.WriteLine("\nPatient Updated Successfully! Press any key to continue...");
            Console.ReadKey();
        }

        public void DisplayAllPatients()
        {
            Console.Clear();
            Console.WriteLine("--- All Patients List ---");

            List<PatientModel> patients = _patientService.GetAllPatients();

            foreach (PatientModel p in patients)
            {
                // Prints using your model's ToString() method
                Console.WriteLine(p.ToString());
            }

            Console.WriteLine("\nPress any key to continue...");
            Console.ReadKey();
        }
    }
}