using System;
using System.Collections.Generic;
using System.Text;

namespace ProjectManagement.Hospital 
{
    internal class PatientModel
    {
        private string patientName;
        private string disease;
        private int age;
        private int roomNumber;
        private float consultationFee;

       
       

        
        public PatientModel(string patientName, string disease, int age, int roomNumber, float consultationFee)
        {
            this.patientName = patientName;
            this.disease = disease;
            this.age = age;
            this.roomNumber = roomNumber;
            this.consultationFee = consultationFee;
        }

       
        public void SetPatientName(string patientName)
        {
            this.patientName = patientName;
        }
        public string GetPatientName()
        {
            return this.patientName;
        }

        public void SetDisease(string disease)
        {
            this.disease = disease;
        }
        public string GetDisease()
        {
            return this.disease;
        }

        public void SetAge(int age)
        {
            this.age = age;
        }
        public int GetAge()
        {
            return this.age;
        }

        public void SetRoomNumber(int roomNumber)
        {
            this.roomNumber = roomNumber;
        }
        public int GetRoomNumber()
        {
            return this.roomNumber;
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
            return $"Patient Name: {patientName}, Disease: {disease}, Age: {age}, Room No: {roomNumber}, Fee: {consultationFee}";
        }
    }
}