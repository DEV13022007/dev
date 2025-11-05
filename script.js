function calculateSalary() {
  var basic = parseFloat(document.getElementById("basic").value) || 0;
  var allowances = parseFloat(document.getElementById("allowances").value) || 0;
  var deductions = parseFloat(document.getElementById("deductions").value) || 0;
  var netSalary = basic + allowances - deductions;
  var resultBox = document.getElementById("result");
  resultBox.innerHTML =
    "<table style='margin:auto;'><tr><td>Basic Salary:</td><td>₹" + basic.toFixed(2) + "</td></tr>" +
    "<tr><td>Allowances:</td><td>₹" + allowances.toFixed(2) + "</td></tr>" +
    "<tr><td>Deductions:</td><td>₹" + deductions.toFixed(2) + "</td></tr>" +
    "<tr><td><strong>Net Salary:</strong></td><td><strong>₹" + netSalary.toFixed(2) + "</strong></td></tr></table>";
}

function clearForm() {
  document.getElementById("basic").value = "";
  document.getElementById("allowances").value = "";
  document.getElementById("deductions").value = "";
  document.getElementById("result").innerHTML = "";
}