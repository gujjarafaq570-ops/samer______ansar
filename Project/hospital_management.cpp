#include <iostream>
#include <string>
using namespace std;

// ============================================================
//         HOSPITAL MANAGEMENT SYSTEM - C++
//  Concepts: if-else, for loop, while loop, arrays
// ============================================================

const int MAX = 100;

// ─────────────── PATIENT STRUCTURE ───────────────
struct Patient {
    int    id;
    string name;
    int    age;
    string disease;
    int    assignedDoctorId;  // 0 = none
    bool   active;
};

// ─────────────── DOCTOR STRUCTURE ────────────────
struct Doctor {
    int    id;
    string name;
    string specialization;
    bool   active;
};

// ─────────────── APPOINTMENT STRUCTURE ───────────
struct Appointment {
    int  id;
    int  patientId;
    int  doctorId;
    string date;
    bool active;
};

// ─────────────── GLOBAL ARRAYS ───────────────────
Patient     patients[MAX];
Doctor      doctors[MAX];
Appointment appointments[MAX];

int patientCount     = 0;
int doctorCount      = 0;
int appointmentCount = 0;

// ─────────────── HELPER: SEPARATOR ───────────────
void line(char c = '-', int n = 55) {
    for (int i = 0; i < n; i++) cout << c;
    cout << "\n";
}

void header(const string& title) {
    cout << "\n";
    line('=');
    cout << "   " << title << "\n";
    line('=');
}

// ─────────────── PATIENT FUNCTIONS ───────────────

void addPatient() {
    header("ADD NEW PATIENT");
    if (patientCount >= MAX) {
        cout << " [!] Patient list is full.\n";
        return;
    }

    Patient p;
    p.id               = patientCount + 1;
    p.assignedDoctorId = 0;
    p.active           = true;

    cout << " Enter Name    : "; getline(cin >> ws, p.name);
    cout << " Enter Age     : "; cin >> p.age;
    cout << " Enter Disease : "; getline(cin >> ws, p.disease);

    patients[patientCount++] = p;
    cout << "\n [✓] Patient added! Assigned ID: " << p.id << "\n";
}

void viewAllPatients() {
    header("ALL PATIENTS");
    bool found = false;
    for (int i = 0; i < patientCount; i++) {
        if (patients[i].active) {
            found = true;
            cout << " ID      : " << patients[i].id       << "\n";
            cout << " Name    : " << patients[i].name     << "\n";
            cout << " Age     : " << patients[i].age      << "\n";
            cout << " Disease : " << patients[i].disease  << "\n";
            if (patients[i].assignedDoctorId != 0)
                cout << " Doctor  : ID " << patients[i].assignedDoctorId << "\n";
            else
                cout << " Doctor  : Not assigned\n";
            line();
        }
    }
    if (!found) cout << " No patient records found.\n";
}

void searchPatientById() {
    header("SEARCH PATIENT BY ID");
    int id;
    cout << " Enter Patient ID: "; cin >> id;

    bool found = false;
    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == id && patients[i].active) {
            cout << "\n ID      : " << patients[i].id      << "\n";
            cout << " Name    : " << patients[i].name     << "\n";
            cout << " Age     : " << patients[i].age      << "\n";
            cout << " Disease : " << patients[i].disease  << "\n";
            if (patients[i].assignedDoctorId != 0)
                cout << " Doctor  : ID " << patients[i].assignedDoctorId << "\n";
            else
                cout << " Doctor  : Not assigned\n";
            found = true;
            break;
        }
    }
    if (!found) cout << " [!] Patient not found.\n";
}

void deletePatient() {
    header("DELETE PATIENT");
    int id;
    cout << " Enter Patient ID to delete: "; cin >> id;

    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == id && patients[i].active) {
            patients[i].active = false;
            cout << " [✓] Patient ID " << id << " deleted.\n";
            return;
        }
    }
    cout << " [!] Patient not found.\n";
}

void updatePatient() {
    header("UPDATE PATIENT DETAILS");
    int id;
    cout << " Enter Patient ID to update: "; cin >> id;

    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == id && patients[i].active) {
            cout << " New Name    (current: " << patients[i].name    << "): ";
            getline(cin >> ws, patients[i].name);
            cout << " New Age     (current: " << patients[i].age     << "): ";
            cin >> patients[i].age;
            cout << " New Disease (current: " << patients[i].disease << "): ";
            getline(cin >> ws, patients[i].disease);
            cout << " [✓] Patient updated.\n";
            return;
        }
    }
    cout << " [!] Patient not found.\n";
}

// ─────────────── DOCTOR FUNCTIONS ────────────────

void addDoctor() {
    header("ADD NEW DOCTOR");
    if (doctorCount >= MAX) {
        cout << " [!] Doctor list is full.\n";
        return;
    }

    Doctor d;
    d.id     = doctorCount + 1;
    d.active = true;

    cout << " Enter Name           : "; getline(cin >> ws, d.name);
    cout << " Enter Specialization : "; getline(cin >> ws, d.specialization);

    doctors[doctorCount++] = d;
    cout << "\n [✓] Doctor added! Assigned ID: " << d.id << "\n";
}

void viewAllDoctors() {
    header("ALL DOCTORS");
    bool found = false;
    for (int i = 0; i < doctorCount; i++) {
        if (doctors[i].active) {
            found = true;
            cout << " ID             : " << doctors[i].id             << "\n";
            cout << " Name           : " << doctors[i].name           << "\n";
            cout << " Specialization : " << doctors[i].specialization << "\n";
            line();
        }
    }
    if (!found) cout << " No doctor records found.\n";
}

void searchDoctor() {
    header("SEARCH DOCTOR");
    cout << " Search by:\n";
    cout << " [1] ID\n";
    cout << " [2] Specialization\n";
    cout << " Choice: ";
    int ch; cin >> ch;

    bool found = false;
    if (ch == 1) {
        int id; cout << " Enter Doctor ID: "; cin >> id;
        for (int i = 0; i < doctorCount; i++) {
            if (doctors[i].id == id && doctors[i].active) {
                cout << "\n ID             : " << doctors[i].id             << "\n";
                cout << " Name           : " << doctors[i].name           << "\n";
                cout << " Specialization : " << doctors[i].specialization << "\n";
                found = true; break;
            }
        }
    } else if (ch == 2) {
        string spec;
        cout << " Enter Specialization: "; getline(cin >> ws, spec);
        for (int i = 0; i < doctorCount; i++) {
            if (doctors[i].active && doctors[i].specialization == spec) {
                cout << "\n ID             : " << doctors[i].id             << "\n";
                cout << " Name           : " << doctors[i].name           << "\n";
                cout << " Specialization : " << doctors[i].specialization << "\n";
                line();
                found = true;
            }
        }
    }
    if (!found) cout << " [!] No matching doctor found.\n";
}

void assignDoctorToPatient() {
    header("ASSIGN DOCTOR TO PATIENT");
    int pid, did;
    cout << " Enter Patient ID : "; cin >> pid;
    cout << " Enter Doctor  ID : "; cin >> did;

    bool pFound = false, dFound = false;
    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == pid && patients[i].active) {
            pFound = true;
            for (int j = 0; j < doctorCount; j++) {
                if (doctors[j].id == did && doctors[j].active) {
                    dFound = true;
                    patients[i].assignedDoctorId = did;
                    cout << " [✓] Doctor " << doctors[j].name
                         << " assigned to patient " << patients[i].name << ".\n";
                }
            }
        }
    }
    if (!pFound) cout << " [!] Patient not found.\n";
    else if (!dFound) cout << " [!] Doctor not found.\n";
}

// ─────────────── APPOINTMENT FUNCTIONS ───────────

void bookAppointment() {
    header("BOOK APPOINTMENT");
    if (appointmentCount >= MAX) {
        cout << " [!] Appointment list is full.\n";
        return;
    }

    Appointment a;
    a.id     = appointmentCount + 1;
    a.active = true;

    cout << " Enter Patient ID : "; cin >> a.patientId;
    cout << " Enter Doctor  ID : "; cin >> a.doctorId;
    cout << " Enter Date (DD/MM/YYYY): "; cin >> a.date;

    // Validate patient
    bool pOk = false;
    for (int i = 0; i < patientCount; i++) {
        if (patients[i].id == a.patientId && patients[i].active) { pOk = true; break; }
    }
    // Validate doctor
    bool dOk = false;
    for (int i = 0; i < doctorCount; i++) {
        if (doctors[i].id == a.doctorId && doctors[i].active) { dOk = true; break; }
    }

    if (!pOk) { cout << " [!] Patient ID not found.\n"; return; }
    if (!dOk) { cout << " [!] Doctor ID not found.\n";  return; }

    appointments[appointmentCount++] = a;
    cout << " [✓] Appointment booked! Appointment ID: " << a.id << "\n";
}

void viewAllAppointments() {
    header("ALL APPOINTMENTS");
    bool found = false;
    for (int i = 0; i < appointmentCount; i++) {
        if (appointments[i].active) {
            found = true;
            cout << " Appt ID   : " << appointments[i].id        << "\n";
            cout << " Patient ID: " << appointments[i].patientId << "\n";
            cout << " Doctor  ID: " << appointments[i].doctorId  << "\n";
            cout << " Date      : " << appointments[i].date      << "\n";
            line();
        }
    }
    if (!found) cout << " No appointments found.\n";
}

void cancelAppointment() {
    header("CANCEL APPOINTMENT");
    int id;
    cout << " Enter Appointment ID to cancel: "; cin >> id;

    for (int i = 0; i < appointmentCount; i++) {
        if (appointments[i].id == id && appointments[i].active) {
            appointments[i].active = false;
            cout << " [✓] Appointment ID " << id << " cancelled.\n";
            return;
        }
    }
    cout << " [!] Appointment not found.\n";
}

void checkAvailableDoctors() {
    header("AVAILABLE DOCTORS");
    bool found = false;
    for (int i = 0; i < doctorCount; i++) {
        if (doctors[i].active) {
            found = true;
            cout << " ID: " << doctors[i].id
                 << "  |  Name: " << doctors[i].name
                 << "  |  Specialization: " << doctors[i].specialization << "\n";
        }
    }
    if (!found) cout << " No doctors available.\n";
}

// ─────────────── SUB MENUS ────────────────────────

void patientMenu() {
    int choice;
    while (true) {
        header("PATIENT MANAGEMENT");
        cout << " [1] Add New Patient\n";
        cout << " [2] View All Patients\n";
        cout << " [3] Search Patient by ID\n";
        cout << " [4] Delete Patient\n";
        cout << " [5] Update Patient Details\n";
        cout << " [0] Back to Main Menu\n";
        line();
        cout << " Enter choice: "; cin >> choice;

        if      (choice == 1) addPatient();
        else if (choice == 2) viewAllPatients();
        else if (choice == 3) searchPatientById();
        else if (choice == 4) deletePatient();
        else if (choice == 5) updatePatient();
        else if (choice == 0) break;
        else cout << " [!] Invalid choice.\n";
    }
}

void doctorMenu() {
    int choice;
    while (true) {
        header("DOCTOR MANAGEMENT");
        cout << " [1] Add New Doctor\n";
        cout << " [2] View All Doctors\n";
        cout << " [3] Search Doctor\n";
        cout << " [4] Assign Doctor to Patient\n";
        cout << " [0] Back to Main Menu\n";
        line();
        cout << " Enter choice: "; cin >> choice;

        if      (choice == 1) addDoctor();
        else if (choice == 2) viewAllDoctors();
        else if (choice == 3) searchDoctor();
        else if (choice == 4) assignDoctorToPatient();
        else if (choice == 0) break;
        else cout << " [!] Invalid choice.\n";
    }
}

void appointmentMenu() {
    int choice;
    while (true) {
        header("APPOINTMENT SYSTEM");
        cout << " [1] Book Appointment\n";
        cout << " [2] View All Appointments\n";
        cout << " [3] Cancel Appointment\n";
        cout << " [4] Check Available Doctors\n";
        cout << " [0] Back to Main Menu\n";
        line();
        cout << " Enter choice: "; cin >> choice;

        if      (choice == 1) bookAppointment();
        else if (choice == 2) viewAllAppointments();
        else if (choice == 3) cancelAppointment();
        else if (choice == 4) checkAvailableDoctors();
        else if (choice == 0) break;
        else cout << " [!] Invalid choice.\n";
    }
}

// ─────────────── MAIN ────────────────────────────

int main() {

    cout << "\n";
    line('*');
    cout << "*    WELCOME TO HOSPITAL MANAGEMENT SYSTEM       *\n";
    line('*');

    int choice;
    while (true) {
        header("MAIN MENU");
        cout << " [1] Patient Management\n";
        cout << " [2] Doctor Management\n";
        cout << " [3] Appointment System\n";
        cout << " [0] Exit\n";
        line();
        cout << " Enter choice: "; cin >> choice;

        if      (choice == 1) patientMenu();
        else if (choice == 2) doctorMenu();
        else if (choice == 3) appointmentMenu();
        else if (choice == 0) {
            cout << "\n Thank you for using Hospital Management System!\n\n";
            break;
        }
        else cout << " [!] Invalid choice. Please try again.\n";
    }

    return 0;
}
