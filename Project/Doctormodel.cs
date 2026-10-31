using System;
using System.Collections.Generic;
using System.Text;

namespace ProjectManagement.Hospital
{
    internal class DoctorModel
    {
        private int doctorID;
        private string doctorName;
        private string specialization;
        private float consultationFee;

        
        

        
        public DoctorModel(int doctorID, string doctorName, string specialization, float consultationFee)
        {
            this.doctorID = doctorID;
            this.doctorName = doctorName;
            this.specialization = specialization;
            this.consultationFee = consultationFee;
        }

        
        public void SetDoctorID(int doctorID)
        {
            this.doctorID = doctorID;
        }
        public int GetDoctorID()
        {
            return this.doctorID;
        }

        public void SetDoctorName(string doctorName)
        {
            this.doctorName = doctorName;
        }
        public string GetDoctorName()
        {
            return this.doctorName;
        }

        public void SetSpecialization(string specialization)
        {
            this.specialization = specialization;
        }
        public string GetSpecialization()
        {
            return this.specialization;
        }

        public void SetConsultationFee(float consultationFee)
        {
            this.consultationFee = consultationFee;
        }
        public float GetConsultationFee()
        {
            return this.consultationFee;
        }

       
        public override string ToString()
        {
            return $"Doctor ID: {doctorID}, Name: {doctorName}, Specialization: {specialization}, Fee: {consultationFee}";
        }
    }
}