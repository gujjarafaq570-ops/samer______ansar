using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace ProjectManagement.Hospital
{
    internal class DoctorRepo
    {
        private readonly string file = "doctor.txt";

        public DoctorRepo()
        {
        }

        public void SaveInFile(DoctorModel doctor)
        {
            using (StreamWriter stream = new StreamWriter(file, true))
            {
                
                stream.WriteLine($"{doctor.GetDoctorID()},{doctor.GetDoctorName()},{doctor.GetSpecialization()},{doctor.GetConsultationFee()}");
            }
        }

        public void SaveAllDataIntoFile(List<DoctorModel> doctors)
        {
            File.WriteAllText(file, "");
            foreach (var doctor in doctors)
            {
                SaveInFile(doctor);
            }
        }

        public List<DoctorModel> GetDoctorsFromFile()
        {
            List<DoctorModel> doctorModels = new List<DoctorModel>();

            if (File.Exists(file))
            {
                using (StreamReader stream = new StreamReader(file))
                {
                    string line = "";
                    while ((line = stream.ReadLine()) != null)
                    {
                        string[] parts = line.Split(',');

                        if (parts.Length >= 4)
                        {
                            int id = int.Parse(parts[0]);
                            string name = parts[1];
                            string specialization = parts[2];
                            float fee = float.Parse(parts[3]);

                            DoctorModel docModel = new DoctorModel(id, name, specialization, fee);
                            doctorModels.Add(docModel);
                        }
                    }
                }
            }
            return doctorModels;
        }

        public DoctorModel SearchDoctorByName(string searchName)
        {
            List<DoctorModel> doctors = GetDoctorsFromFile();

            foreach (var doctor in doctors)
            {
               
                if (doctor.GetDoctorName() == searchName)
                {
                    return doctor; 
                }
            }
            return null;
        }
    }
}