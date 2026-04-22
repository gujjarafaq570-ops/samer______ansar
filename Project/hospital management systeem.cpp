#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
const int MAX = 100;

// ==================== PATIENT ARRAYS ====================
int patient_id[MAX];
string patient_name[MAX];
int patient_age[MAX];
string patient_disease[MAX];
string patient_blood_group[MAX];
int patient_active[MAX];
int patient_count = 0;

// ==================== DOCTOR ARRAYS ====================
int doctor_id[MAX];
string doctor_name[MAX];
string doctor_specialization[MAX];
string doctor_phone[MAX];
int doctor_patient_count[MAX];
int doctor_active[MAX];
int doctor_count = 0;

// ==================== APPOINTMENT ARRAYS ====================
int appointment_id[MAX];
int appointment_patient_id[MAX];
int appointment_doctor_id[MAX];
string appointment_date[MAX];
string appointment_status[MAX];
int appointment_active[MAX];
int appointment_count = 0;

// ==================== LAST 10 PATIENTS ARRAY ====================
int last_ten_patient_ids[10]; // stores IDs of last 10 added patients
int last_ten_count = 0;

// ============================================================
//   MAIN PROGRAM STARTS HERE
// ============================================================
int main()
{
    int main_choice;

    cout << "=========================================<<endl";
    cout << "       HOSPITAL MANAGEMENT SYSTEM        <<endl";
    cout << "=========================================<<endl";

    // ==================== MAIN MENU LOOP ====================
    while (1)
    {
        cout << "<<endl========== MAIN MENU ==========<<endl";
        cout << "1. Patient Management<<endl";
        cout << "2. Doctor Management<<endl";
        cout << "3. Appointment Management<<endl";
        cout << "0. Exit<<endl";
        cout << "Enter Your Choice: ";
        cin >> main_choice;

        // ########################################################
        //                   PATIENT MANAGEMENT
        // ########################################################
        if (main_choice == 1)
        {
            int patient_choice;

            while (1)
            {
                cout <<endl<< "====== PATIENT MENU ======" << endl;
                cout << "1. Add Patient" << endl;
                cout << "2. View All Patients" << endl;
                cout << "3. Search Patient by ID" << endl;
                cout << "4. Delete Patient" << endl;
                cout << "5. Update Patient" << endl;
                cout << "6. View Last 10 Patients" << endl;
                cout << "0. Back to Main Menu" << endl;
                cout << "Enter Your Choice: ";
                cin >> patient_choice;

                // ---------- ADD PATIENT ----------
                if (patient_choice == 1)
                {
                    if (patient_count >= MAX)
                    {
                        cout << "Cannot add more patients"<<endl;
                    }
                    else
                    {
                        patient_id[patient_count] = patient_count + 1;
                        patient_active[patient_count] = 1;

                        cout << "Enter Patient Name        : ";
                        cin >> patient_name[patient_count];

                        cout << "Enter Patient Age         : ";
                        cin >> patient_age[patient_count];

                        cout << "Enter Patient Disease     : ";
                        cin >> patient_disease[patient_count];

                        cout << "Enter Patient Blood Group (e.g. A+, B-, O+): ";
                        cin >> patient_blood_group[patient_count];

                        cout <<endl<< "Patient Added Successfully!"<<endl;
                        cout << "Patient ID = " << patient_id[patient_count] << "\n";

                        // --- Save in Last 10 list ---
                        if (last_ten_count < 10)
                        {
                            last_ten_patient_ids[last_ten_count] = patient_id[patient_count];
                            last_ten_count++;
                        }
                        else
                        {
                            // Shift all entries left by 1 to drop the oldest
                            for (int shift_index = 0; shift_index < 9; shift_index++)
                            {
                                last_ten_patient_ids[shift_index] = last_ten_patient_ids[shift_index + 1];
                            }
                            last_ten_patient_ids[9] = patient_id[patient_count];
                        }

                        patient_count++;
                    }
                }

                // ---------- VIEW ALL PATIENTS ----------
                else if (patient_choice == 2)
                {
                    int any_found = 0;

                    for (int i = 0; i < patient_count; i++)
                    {
                        if (patient_active[i] == 1)
                        {
                            cout <<endl<< "  Patient ID          : " << patient_id[i];
                            cout <<endl<< "  Patient Name        : " << patient_name[i];
                            cout <<endl<< "  Patient Age         : " << patient_age[i];
                            cout <<endl<< "  Patient Disease     : " << patient_disease[i];
                            cout <<endl<< "  Patient Blood Group : " << patient_blood_group[i];
                            cout <<endl <<"  ----------------------------";
                            any_found = 1;
                        }
                    }

                    if (any_found == 0)
                    {
                        cout << "No patients found!"<<endl;
                    }
                }

                // ---------- SEARCH PATIENT BY ID ----------
                else if (patient_choice == 3)
                {
                    int search_id;
                    int found = 0;

                    cout << "Enter Patient ID to Search: ";
                    cin >> search_id;

                    for (int i = 0; i < patient_count; i++)
                    {
                        if (patient_id[i] == search_id && patient_active[i] == 1)
                        {
                            cout <<endl<< "  Patient Found!" << endl;
                            cout <<endl<< "  Patient ID : " << patient_id[i];
                            cout <<endl<< "  Patient Name : " << patient_name[i];
                            cout <<endl<< " Patient Age : " << patient_age[i];
                            cout <<endl<< " Patient Disease : " << patient_disease[i];
                            cout <<endl<< "  Patient Blood Group  : " << patient_blood_group[i];
                            cout <<endl<< "  ----------------------------";
                            found = 1;
                        }
                    }

                    if (found == 0)
                    {
                        cout << "Patient with this ID not found"<<endl;
                    }
                }

                // ---------- DELETE PATIENT ----------
                else if (patient_choice == 4)
                {
                    int delete_id;
                    int found = 0;

                    cout << "Enter Patient ID to Delete: ";
                    cin >> delete_id;

                    for (int i = 0; i < patient_count; i++)
                    {
                        if (patient_id[i] == delete_id && patient_active[i] == 1)
                        {
                            patient_active[i] = 0;
                            cout << "Patient Deleted Successfully!" << endl;
                            found = 1;
                        }
                    }

                    if (found == 0)
                    {
                        cout << "Patient with this ID not found!" << endl;
                    }
                }

                // ---------- UPDATE PATIENT ----------
                else if (patient_choice == 5)
                {
                    int update_id;
                    int found = 0;

                    cout << "Enter Patient ID to Update: ";
                    cin >> update_id;

                    for (int i = 0; i < patient_count; i++)
                    {
                        if (patient_id[i] == update_id && patient_active[i] == 1)
                        {
                            cout << "Enter New Patient Name        : ";
                            cin >> patient_name[i];

                            cout << "Enter New Patient Age         : ";
                            cin >> patient_age[i];

                            cout << "Enter New Patient Disease     : ";
                            cin >> patient_disease[i];

                            cout << "Enter New Patient Blood Group : ";
                            cin >> patient_blood_group[i];

                            cout << "Patient Updated Successfully!" << endl;
                            found = 1;
                        }
                    }

                    if (found == 0)
                    {
                        cout << "Patient with this ID not found!" << endl;
                    }
                }

                // ---------- VIEW LAST 10 PATIENTS ----------
                else if (patient_choice == 6)
                {
                    if (last_ten_count == 0)
                    {
                        cout << "No patients added yet!\n";
                    }
                    else
                    {
                        cout <<endl<< "=== LAST " << last_ten_count << " ADDED PATIENTS ==="<<endl;

                        for (int x = 0; x < last_ten_count; x++)
                        {
                            int target_id = last_ten_patient_ids[x];

                            for (int i = 0; i < patient_count; i++)
                            {
                                if (patient_id[i] == target_id)
                                {
                                    cout << endl
                                         << "  Patient ID          : " << patient_id[i];
                                    cout << endl
                                         << "  Patient Name        : " << patient_name[i];
                                    cout << endl
                                         << " Patient Age         : " << patient_age[i];
                                    cout << endl
                                         << "  Patient Disease     : " << patient_disease[i];
                                    cout << endl
                                         << "  Patient Blood Group : " << patient_blood_group[i];
                                    cout << endl
                                         << "  ----------------------------";
                                }
                            }
                        }
                    }
                }

                else if (patient_choice == 0)
                {
                    break;
                }

                else
                {
                    cout << "Invalid Choice! Please try again"<<endl;
                }

            } // end patient while loop

        } // end patient management

        // ########################################################
        //                   DOCTOR MANAGEMENT
        // ########################################################
        else if (main_choice == 2)
        {
            int doctor_choice;

            while (1)
            {
                cout << endl
                     << "==== DOCTOR MENU ======" << endl;
                cout << "1. Add Doctor" << endl;
                cout << "2. View All Doctors" << endl;
                cout << "3. Search Doctor by Specialization" << endl;
                cout << "4. Delete Doctor" << endl;
                cout << "5. View Doctor Patient Count" << endl;
                cout << "0. Back to Main Menu" << endl;
                cout << "Enter Your Choice: ";
                cin >> doctor_choice;

                // ---------- ADD DOCTOR ----------
                if (doctor_choice == 1)
                {
                    if (doctor_count >= MAX)
                    {
                        cout << "Storage is full! Cannot add more doctors" << endl;
                    }
                    else
                    {
                        doctor_id[doctor_count] = doctor_count + 1;
                        doctor_active[doctor_count] = 1;
                        doctor_patient_count[doctor_count] = 0;

                        cout << "Enter Doctor Name           : ";
                        cin >> doctor_name[doctor_count];

                        cout << "Enter Doctor Specialization : ";
                        cin >> doctor_specialization[doctor_count];

                        cout << "Enter Doctor Phone Number   : ";
                        cin >> doctor_phone[doctor_count];

                        cout << endl
                             << "Doctor Added Successfully!" << endl;
                        cout << "Doctor ID = " << doctor_id[doctor_count] << "\n";

                        doctor_count++;
                    }
                }

                // ---------- VIEW ALL DOCTORS ----------
                else if (doctor_choice == 2)
                {
                    int any_found = 0;

                    for (int i = 0; i < doctor_count; i++)
                    {
                        if (doctor_active[i] == 1)
                        {
                            cout << "<<endl  Doctor ID             : " << doctor_id[i];
                            cout << "<<endl  Doctor Name           : " << doctor_name[i];
                            cout << "<<endl  Doctor Specialization : " << doctor_specialization[i];
                            cout << "<<endl  Doctor Phone Number   : " << doctor_phone[i];
                            cout << "<<endl Total Patients Seen    : " << doctor_patient_count[i];
                            cout << "<<endl ----------------------------";
                            any_found = 1;
                        }
                    }

                    if (any_found == 0)
                    {
                        cout << "No doctors found!<<endl";
                    }
                }

                // ---------- SEARCH DOCTOR BY SPECIALIZATION ----------
                else if (doctor_choice == 3)
                {
                    string search_specialization;
                    int found = 0;

                    cout << "Enter Specialization to Search: ";
                    cin >> search_specialization;

                    for (int i = 0; i < doctor_count; i++)
                    {
                        if (doctor_specialization[i] == search_specialization && doctor_active[i] == 1)
                        {
                            cout << "<<endl  Doctor Found!<<endl";
                            cout << "<<endl Doctor ID              : " << doctor_id[i];
                            cout << "<<endl  Doctor Name           : " << doctor_name[i];
                            cout << "<<endl Doctor Phone Number    : " << doctor_phone[i];
                            cout << "<<endlTotal Patients Seen     : " << doctor_patient_count[i];
                            cout << "<<endl----------------------------";
                            found = 1;
                        }
                    }

                    if (found == 0)
                    {
                        cout << "No doctor found with that specialization!<<endl";
                    }
                }

                // ---------- DELETE DOCTOR (NEW FEATURE) ----------
                else if (doctor_choice == 4)
                {
                    int delete_id;
                    int found = 0;

                    cout << "Enter Doctor ID to Delete: ";
                    cin >> delete_id;

                    for (int i = 0; i < doctor_count; i++)
                    {
                        if (doctor_id[i] == delete_id && doctor_active[i] == 1)
                        {
                            doctor_active[i] = 0;
                            cout << "Doctor Deleted Successfully!" << endl;
                            found = 1;
                        }
                    }

                    if (found == 0)
                    {
                        cout << "Doctor with this ID not found!" << endl;
                    }
                }

                // ---------- VIEW DOCTOR PATIENT COUNT (NEW FEATURE) ----------
                else if (doctor_choice == 5)
                {
                    int any_found = 0;

                    cout << endl
                         << "=== DOCTOR PATIENT COUNT REPORT ===" << endl;

                    for (int i = 0; i < doctor_count; i++)
                    {
                        if (doctor_active[i] == 1)
                        {
                            cout << "  Doctor Name                 : " << doctor_name[i];
                            cout << "<<endl  Doctor Specialization : " << doctor_specialization[i];
                            cout << "<<endl  Total Patients Seen   : " << doctor_patient_count[i];
                            cout << "<<endl----------------------------<<endl";
                            any_found = 1;
                        }
                    }

                    if (any_found == 0)
                    {
                        cout << "No doctors found!<<endl";
                    }
                }

                else if (doctor_choice == 0)
                {
                    break;
                }

                else
                {
                    cout << "Invalid Choice! Please try again.<<endl";
                }

            } // end doctor while loop

        } // end doctor management

        // ########################################################
        //                 APPOINTMENT MANAGEMENT
        // ########################################################
        else if (main_choice == 3)
        {
            int appointment_choice;

            while (1)
            {
                cout << endl
                     << "====== APPOINTMENT MENU ======" << endl;
                cout << "1. Book Appointment" << endl;
                cout << "2. View All Appointments<<endl";
                cout << "3. Update Appointment Status" << endl;
                cout << "4. Cancel Appointment" << endl;
                cout << "0. Back to Main Menu" << endl;
                cout << "Enter Your Choice: " << endl;
                cin >> appointment_choice;

                // ---------- BOOK APPOINTMENT ----------
                if (appointment_choice == 1)
                {
                    if (appointment_count >= MAX)
                    {
                        cout << " Cannot book more appointments.<<endl";
                    }
                    else
                    {
                        int entered_patient_id;
                        int entered_doctor_id;
                        int patient_found = 0;
                        int doctor_found = 0;

                        cout << "Enter Patient ID: ";
                        cin >> entered_patient_id;

                        // Check if patient exists
                        for (int i = 0; i < patient_count; i++)
                        {
                            if (patient_id[i] == entered_patient_id && patient_active[i] == 1)
                            {
                                patient_found = 1;
                            }
                        }

                        if (patient_found == 0)
                        {
                            cout << "Patient ID not found! Please add patient first"<<endl;
                        }
                        else
                        {
                            cout << "Enter Doctor ID: ";
                            cin >> entered_doctor_id;

                            // Check if doctor exists and increase their patient count
                            for (int i = 0; i < doctor_count; i++)
                            {
                                if (doctor_id[i] == entered_doctor_id && doctor_active[i] == 1)
                                {
                                    doctor_found = 1;
                                    doctor_patient_count[i]++;
                                }
                            }

                            if (doctor_found == 0)
                            {
                                cout << "Doctor ID not found! Please add doctor first"<<endl;
                            }
                            else
                            {
                                appointment_id[appointment_count] = appointment_count + 1;
                                appointment_patient_id[appointment_count] = entered_patient_id;
                                appointment_doctor_id[appointment_count] = entered_doctor_id;
                                appointment_active[appointment_count] = 1;
                                appointment_status[appointment_count] = "Pending";

                                cout << "Enter Appointment Date (DD/MM/YYYY): ";
                                cin >> appointment_date[appointment_count];

                                cout << endl<< "Appointment " << endl;
                                cout << "Appointment ID = " << appointment_id[appointment_count] << endl;

                                appointment_count++;
                            }
                        }
                    }
                }

                // ---------- VIEW ALL APPOINTMENTS ----------
                else if (appointment_choice == 2)
                {
                    int any_found = 0;

                    for (int i = 0; i < appointment_count; i++)
                    {
                        if (appointment_active[i] == 1)
                        {
                            cout << endl
                                 << "Appointment ID         : " << appointment_id[i];
                            cout << endl
                                 << "Appointment Patient ID : " << appointment_patient_id[i];
                            cout << endl
                                 << "Appointment Doctor ID  : " << appointment_doctor_id[i];
                            cout << endl
                                 << "Appointment Date       : " << appointment_date[i];
                            cout << endl
                                 << " Appointment Status     : " << appointment_status[i];
                            cout << endl
                                 << "  ----------------------------";
                            any_found = 1;
                        }
                    }

                    if (any_found == 0)
                    {
                        cout << "No appointments found!" << endl;
                    }
                }

                // ---------- UPDATE APPOINTMENT STATUS ----------
                else if (appointment_choice == 3)
                {
                    int update_id;
                    int found = 0;

                    cout << "Enter Appointment ID to Update Status: ";
                    cin >> update_id;

                    for (int i = 0; i < appointment_count; i++)
                    {
                        if (appointment_id[i] == update_id && appointment_active[i] == 1)
                        {
                            int status_choice;
                            cout << "Select New Status: " << endl;
                            cout << "1. Pending" << endl;
                            cout << "2. Done" << endl;
                            cout << "3. Cancelled" << endl;
                            cout << "Enter: ";
                            cin >> status_choice;

                            if (status_choice == 1)
                            {
                                appointment_status[i] = "Pending";
                                cout << "Status Updated to Pending"<<endl;
                            }
                            else if (status_choice == 2)
                            {
                                appointment_status[i] = "Done";
                                cout << "Status Updated to Done"<<endl;
                            }
                            else if (status_choice == 3)
                            {
                                appointment_status[i] = "Cancelled";
                                cout << "Status Updated to Cancelled!" << endl;
                            }
                            else
                            {
                                cout << "Invalid Status Choice!" << endl;
                            }

                            found = 1;
                        }
                    }

                    if (found == 0)
                    {
                        cout << "Appointment with this ID not found!" << endl;
                    }
                }

                // ---------- CANCEL APPOINTMENT ----------
                else if (appointment_choice == 4)
                {
                    int cancel_id;
                    int found = 0;

                    cout << "Enter Appointment ID to Cancel: ";
                    cin >> cancel_id;

                    for (int i = 0; i < appointment_count; i++)
                    {
                        if (appointment_id[i] == cancel_id && appointment_active[i] == 1)
                        {
                            appointment_active[i] = 0;
                            appointment_status[i] = "Cancelled";
                            cout << "Appointment Cancelled Successfully!" << endl;
                            found = 1;
                        }
                    }

                    if (found == 0)
                    {
                        cout << "Appointment with this ID not found!" << endl;
                    }
                }

                else if (appointment_choice == 0)
                {
                    break;
                }

                else
                {
                    cout << "Invalid Choice! Please try again" << endl;
                }

            } // end appointment while loop

        } // end appointment management

        // ---------- EXIT ----------
        else if (main_choice == 0)
        {
            cout << endl
                 << "Thank you for using Hospital Management System!\n";
            cout << "Exiting.." << endl;
            break;
        }

        else
        {
            cout << "Invalid Choice! Please try again.\n";
        }

    } // end main while loop

    system("pause");
    return 0;
}
