
using System;
using System.Collections.Generic;

namespace ProjectManagement.Hospital
{
    internal class DoctorService
    {
        private DoctorRepo _doctorRepo;

        public DoctorService()
        {
            _doctorRepo = new DoctorRepo();
        }

        // Add Doctor
        public void AddDoctor(int doctorID, string name,
            string specialization, float consultationFee)
        {
            DoctorModel newDoctor = new DoctorModel(
                doctorID, name, specialization, consultationFee);

            _doctorRepo.SaveInFile(newDoctor);
        }

        // Get All Doctors
        public List<DoctorModel> GetAllDoctors()
        {
            return _doctorRepo.GetDoctorsFromFile();
        }

        // Search Doctor
        public DoctorModel SearchDoctor(string name)
        {
            return _doctorRepo.SearchDoctorByName(name);
        }

        // Update Doctor Fee
        public void UpdateDoctor(string name, float newFee)
        {
            List<DoctorModel> doctors = _doctorRepo.GetDoctorsFromFile();

            foreach (var doctor in doctors)
            {
                if (doctor.GetDoctorName() == name)
                {
                    doctor.SetConsultationFee(newFee);
                }
            }

            _doctorRepo.SaveAllDataIntoFile(doctors);
        }

        // Delete Doctor
        public void DeleteDoctorByName(string name)
        {
            List<DoctorModel> doctors = _doctorRepo.GetDoctorsFromFile();

            doctors.RemoveAll(doctor =>
                doctor.GetDoctorName() == name);

            _doctorRepo.SaveAllDataIntoFile(doctors);
        }
    }
}
