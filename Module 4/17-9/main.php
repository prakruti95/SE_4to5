<?php
// Define the Student class
class Student {
    public $name;
    public $marks;

    // Constructor
    public function __construct($name, $marks) {
        $this->name = $name;
        $this->marks = $marks;
    }

    // Method to check pass/fail using conditional statement
    public function checkResult() {
        echo "Student Name: " . $this->name . "<br>";
        echo "Marks: " . $this->marks . "<br>";

        // Conditional logic
        if ($this->marks >= 50) {
            echo "<strong>Result: Pass <strong>";
        } else {
            echo "<strong>Result: Fail </strong>";
        }
    }
}

// Example usage:
$student1 = new Student("John Doe", 75);
$student1->checkResult();

echo "<hr>";

$student2 = new Student("Jane Smith", 45);
$student2->checkResult();
?>
