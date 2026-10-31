using System;
using System.Collections.Generic;
using System.IO;
using System.Text;

namespace ProjectManagement.Hospital
{
    internal class PatientRepo
    {
        private readonly string file = "patients.txt";
        public void SaveInFile(PatientModel patient)
        {
            using (StreamWriter stream = new StreamWriter(file, true))
            {
                stream.Write(patient.ToString());
            }
        }
        public void SaveAllDataIntoFile(List<PatientModel> patients)
        {
            File.WriteAllText(file, "");
            foreach (var patient in patients)
            {
                SaveInFile(patient);
            }
        }


        public List<PatientModel> GetPatientsFromFile()
        {
            List<PatientModel> patientModels = new List<PatientModel>();

            if (File.Exists(file))
            {
                using (StreamReader stream = new StreamReader(file))
                {
                    string line = "";
                    while ((line = stream.ReadLine()) != null)
                    {
                        string[] parts = line.Split(',');

                        if (parts.Length >= 5)
                        {
                            string name = parts[0];
                            string disease = parts[1];
                            int age = int.Parse(parts[2].Replace("Age:", "").Trim());
                            int roomNo = int.Parse(parts[3]);
                            float fee = float.Parse(parts[4]);

                            PatientModel pModel = new PatientModel(name, disease, age, roomNo, fee);
                            patientModels.Add(pModel);
                        }
                    }
                }
            }
            return patientModels;
        }


        public PatientModel SearchPatientByName(string searchName)
        {
            List<PatientModel> patients = GetPatientsFromFile();

            foreach (var patient in patients)
            {
                
                if (patient.GetPatientName() == searchName)
                {
                    return patient;
                }
            }
            return null;
        }
    }
}