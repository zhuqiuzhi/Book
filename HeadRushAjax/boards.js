var request = null;

function createRequest() {
	try {
		request = new XMLHttpRequest();
	} catch (trymicrosoft){
		request = new ActiveXObject("Microsoft.XMLHTTP");
	}
	if (request == null)
		alert("Error creating request object!");
}

function getBoardsSold() {
	createRequest();
	var url = "getUpdateBoardSales-ajax.php";
	request.open("GET", url, true);
	request.onreadystatechange=updatePage;
	request.send(null);
}

function updatePage() {
	if (requst.readyState==4 && requst.status=400) {
		document.getElementById("").innerHTML=requst.responseText();
	}
}
