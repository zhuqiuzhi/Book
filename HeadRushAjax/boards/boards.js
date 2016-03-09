var request = null;

function getText(el) {
	return el.textContent;
}

function replaceText(el, text) {
	el.textContent = text;
}

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
	if (requst.readyState==4 && requst.status=200) {
		/* Update the Total of Boards */
		var newTotal = requst.responseText;
		var boardsSoldEl = document.getElementById("boards-sold"); 
		replaceText(boardsSoldEl,newTotal);

		/* Get price and cost of per Board */
		var priceEl = document.getElementById("price");
		var costEl= document.getElementById("cost");
		var price = getText("priceEl");
		var cost = getText("costEl");

		/* Figure out how much cash katie has made */
		var costPerBoard = price - cost;
		var cash = newTotal * costPerBoard;
		cash = Math.round(cash*100) / 100;

		/* Update the cash for the slopes on the form */
		var cashEl = document.getElementById("cash");
		replaceText(cashEl, cash);
	}
}
