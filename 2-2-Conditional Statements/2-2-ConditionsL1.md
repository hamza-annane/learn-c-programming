# Advanced Condition-Based Challenges in C

This repository provides real-world inspired C programming exercises using conditional logic. Each challenge simulates a practical scenario requiring decision-making using `if`, `else`, and nested conditionals.

---

## 💡 Challenges

### 1. Loan Evaluation
Write a C program that evaluates loan eligibility based on:
- Annual income (in euros)
- Credit score (out of 1000)
- Loan duration (in years)

Eligibility conditions:
- Income ≥ €30,000, Credit score ≥ 700, Duration ≤ 10 years → **Eligible**
- Income ≥ €30,000, Credit score ≥ 650, Duration ≤ 15 years → **Eligible with conditions**
- Income < €30,000 or Credit score < 650 or Duration > 15 years → **Not eligible**

Display a message based on the result.

---

### 2. Car Insurance Premium Calculation
Write a C program to calculate a car's insurance premium based on:
- Driver’s age (in years)
- Type of car (1 = sports, 2 = utility, 3 = family)
- Number of accidents in the last 5 years

Calculation rules:
- Age < 25 → Base premium * 1.5  
- Age 25–65 → Base premium  
- Age > 65 → Base premium * 1.2  
- Sports car → Premium * 2  
- Utility car → Premium * 1.2  
- Family car → Premium * 1.1  
- More than 1 accident → Add 30% to premium

---

### 3. Leave Management
Write a C program to calculate remaining leave days based on:
- Total leave granted
- Leave used
- Employee status (0 = part-time, 1 = full-time)

Rules:
- Full-time: Remaining = Granted - Used  
- Part-time: Remaining = (Granted / 2) - Used  
- If Used > Granted → Show a warning message

---

### 4. Employee Performance Evaluation
Write a C program to evaluate employee performance based on:
- Performance score (0 to 100)
- Years of service
- Number of awards received (0, 1, 2 or more)

Evaluations:
- Score ≥ 90 and Service ≥ 5 years → **Excellent**
- Score ≥ 75 and Service ≥ 3 years → **Good**
- Score ≥ 50 and Service < 3 years → **Satisfactory**
- Score < 50 → **Unsatisfactory**

Bonus:
- 10% bonus for one award  
- 20% bonus for two or more awards

---

### 5. Travel Planning
Write a C program to plan a trip based on:
- Budget (in euros)
- Destination (1 = beach, 2 = mountains, 3 = city)
- Number of people

Recommendations:
- Budget ≥ €1000 → Luxury travel  
- Budget €500–€999 → Standard travel  
- Budget < €500 → Budget travel

Destination suggestions:
- Beach → Budget ≥ €1000 and > 2 people  
- Mountain → Budget ≥ €500 and ≤ 2 people  
- City → Any budget and number of people

---

### 6. Electricity Bill Calculation
Write a C program to calculate an electricity bill based on:
- Consumption (kWh)
- User type (1 = residential, 2 = commercial)
- Contract type (0 = standard, 1 = reduced)

Rates:
- Residential → €0.20/kWh (standard), €0.15/kWh (reduced)  
- Commercial → €0.30/kWh (standard), €0.25/kWh (reduced)  
- Add 10% if consumption > 500 kWh

---

### 7. Tax Calculation
Write a C program to calculate income tax based on:
- Annual income (in euros)
- Filing status (1 = single, 2 = married, 3 = head of household)
- Deductions (in euros)

Tax brackets:
- Income ≤ €20,000 → 5%  
- €20,001–€50,000 → 10%  
- > €50,000 → 20%

Deductions:
- Single → €1,000  
- Married → €2,000  
- Head of household → €3,000

---

### 8. Health Plan Determination
Write a C program to determine a health plan based on:
- Age
- Medical history (0 = none, 1 = minor, 2 = major)
- Coverage type (1 = basic, 2 = extended)

Plans:
- Age < 30 → Basic plan  
- Age ≥ 30 and Medical history = 0 → Basic plan  
- Age ≥ 30 and Medical history ≥ 1 → Extended plan  
- Add extra coverage for major issues

---

### 9. Salary Calculation with Bonuses
Write a C program to calculate an employee’s salary based on:
- Base salary (in euros)
- Overtime hours
- Job position (1 = junior, 2 = senior)

Rules:
- Overtime → Paid at 1.5× hourly rate  
- Senior bonus → 20% of base salary  
- Junior bonus → 10% of base salary

---

### 10. Retirement Plan with Savings
Write a C program to determine the retirement plan based on:
- Age
- Years of contribution
- Total saved (in euros)

Plans:
- Age ≥ 65, Years ≥ 30, Savings ≥ €100,000 → Full plan with high pension  
- Age ≥ 65, Years ≥ 20, Savings ≥ €50,000 → Partial plan with medium pension  
- Age < 65 → Savings plan not yet available

Bonus:
- Add 5% for every €10,000 saved beyond €50,000

---

Happy coding and keep practicing! 💼💻
