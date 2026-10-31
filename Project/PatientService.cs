using System;
using System.Collections.Generic;
using System.Text;

namespace ProjectManagement.Hospital
{
    internal class PatientService
    {
        private PatientRepo _patientRepo;

        public PatientService()
        {
            _patientRepo = new PatientRepo();
        }

        
        public void AddPatient(string name, string disease, int age, int roomNumber, float consultationFee)
        {
            PatientModel newPatient = new PatientModel(name, disease, age, roomNumber, consultationFee);
            _patientRepo.SaveInFile(newPatient);
        }

      
        public List<PatientModel> GetAllPatients()
        {
            return _patientRepo.GetPatientsFromFile();
        }

        
        public PatientModel SearchPatient(string name)
        {
            return _patientRepo.SearchPatientByName(name);
        }

        
        public void UpdatePatient(string name, string newDisease, float newFee)
        {
            List<PatientModel> patients = _patientRepo.GetPatientsFromFile();

            foreach (var patient in patients)
            {
                if (patient.GetPatientName() == name)
                {
                    patient.SetDisease(newDisease);
                    patient.SetConsultationFee(newFee);
                }
            }

            _patientRepo.SaveAllDataIntoFile(patients);
        }
    }
}