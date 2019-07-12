// JavaScript Document
<!--
/*********************************************************************************
VARIABLE DECLARATION SECTION
		All the variables that are declared here control the menu. The description of each of them is 
given along with it.
*********************************************************************************/
var menucontainerTop = 50;	//Offset of the Menu from the Top
var menucontainerLeft = 200;	//Offset of the Menu from the Left
var menuWidth = 200;	//Width of the Menu
var menuHeadHeight = 20;	//Height of the Header of the Main Menu

var timeId = 0;	//Time Out variable
var showTimeout = 10;	//No. of millisecs used for iteration while expantion of menu
var hideTimeout = 30;	//No. of millisecs used for iteration while expantion of menu
var ItemId = new Array();	//Stores all the Ids for the Menu Items
var ItemTop = new Array();	//Stores the Top Offset of the Items

var totalItems = 6;	//Set for your total no. of Menu Items in the Menu
var height = 60;	//Height of the details section of the Menu Item
var imgheight = 120;	//Height of the Image DIV of Menu Item
var imgscroll = 15;	//Amount of the Image that is scroll in each iteration

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//NOTE :- Make sure imgscroll is a multiple of imgheight. Else it will distort the whole menu
//	structure while sliding.
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////

function setupMenuHead()
{	/****************************************************************************** 
	This function initializes the Menu Head Section. It positions it in the correct place.
	******************************************************************************/
	var menuHeadObj = document.getElementById("menu");
	menuHeadObj.style.top = menucontainerTop + "px";	//Setting the Distance from the Top
	menuHeadObj.style.left = menucontainerLeft + "px";	//Setting the Distance from the Left			
	menuHeadObj.style.width = menuWidth + "px";	//Setting the Width of the Menu
	menuHeadObj.style.height = menuHeadHeight + "px";	//Setting the height of the Head Section
	
	setupMenuItems();	//Now lets set up the Menu Items
}

function setupMenuItems()
{	/****************************************************************************** 
		This function setups the Menu Items of the Main Menu. Their ordering to their position on the 
		form, everything regarding it is handled by this function. 
	******************************************************************************/
	var menuItemObj = null;	//For storing the Menu Item DIV
	
	var itemTop = menucontainerTop + menuHeadHeight;	//Calculating the Top Offset for 1st Item
	var i=0;
	var zIndex = totalItems;	//zIndex order to be set via this variable
	
	for (i=1; i<= totalItems; i++,zIndex--)
	{	menuItemObj = document.getElementById("menu"+i);	//Getting the Menu Item
		menuItemObj.style.width = menuWidth + "px";	//Setting the Width
		menuItemObj.style.top = itemTop + "px";	//Setting the Top Position
		menuItemObj.style.left = menucontainerLeft + "px";	//Setting the Left Position
		menuItemObj.style.zIndex = zIndex;	//Setting the zIndex Order
		
		var menuItemObjImg = menuItemObj.getElementsByTagName("div")[0];	//Image DIV
		var menuItemObjDesc = menuItemObj.getElementsByTagName("div")[1];	//Details DIV
						
		menuItemObjImg.style.height = imgheight + "px";	//Setting the height of the Image DIV
		menuItemObjImg.style.marginTop = "0px";
		menuItemObjDesc.style.height = (height-5)+"px";	//Setting the height of the Description DIV
		menuItemObjDesc.style.cursor = "pointer";
										
		itemTop = itemTop + height;	//Calculating the Next Top Offset for next Menu Item
		
		ItemId[i-1] = menuItemObj.id;	//Store the Id of the Menu Items in our Id Array
		ItemTop[i-1] = 0;		//Store their default offset to 0 in ItemTop Array
		
	}
}

function controlSliding(ItemNo)
{	window.clearTimeout(timeId);	//End previous animation as soon as new item is hovered
	
	ItemNo = ItemNo - 1;	//The Array Indexes are 1 less than the assigned values to the menu items

	hide(ItemNo);	//First we hide the required menu items
}

function hide(ItemNo)
{	/****************************************************************************** 
	This Function Hides the relevant Menu Items - that is we will slide the menu items upwards.
	We are calling slideUpwards function which is doing the sliding of the menu items. Also we are 
	maintaining an array for the offset for each menu item, which allow us to determine how much
	more the item has to be slided.
	******************************************************************************/
	var i=0;
	var toMoveMore = false;
	
	for(i=0, toMoveMore = false; i<ItemNo; i++)
	{	var menuItemImageObj = document.getElementById(ItemId[i]).getElementsByTagName("DIV")[0];
		slideUpwards(menuItemImageObj, i);		//Calling the function to slide the provided menuitem
		if (ItemTop[i] > -(imgheight))
		{	toMoveMore = true;
		}
	}
	
	if (toMoveMore == true)
	{	timeId = window.setTimeout("hide("+ItemNo+")",hideTimeout);
	}
	else
	{	show(ItemNo);		//Now we show the required menu item
	}
}

function slideUpwards(ItemImageObj, ItemNo)
{	/****************************************************************************** 
	This Function slides the menu item upwards. The catch here is that we are using the marginTop 
	property of css to hide the menu items.
	******************************************************************************/
	if (ItemTop[ItemNo] > -(imgheight))
	{	ItemTop[ItemNo] = ItemTop[ItemNo] - imgscroll;
		ItemImageObj.style.marginTop = ItemTop[ItemNo]  + "px";
	}		
}

function show(ItemNo)
{	/****************************************************************************** 
	This Function Shows the relevant Menu Item - that is we will slide the menu items downwards.
	We are calling slideDownwards function which is doing the sliding of the menu item. Also we are 
	maintaining an array for the offset for each menu item, which allow us to determine how much
	more the item has to be slided.
	******************************************************************************/
	var i=0;
	var toMoveMore = false;
	
	for(i=ItemNo, toMoveMore = false; i<ItemId.length; i++)
	{	var menuItemImageObj = document.getElementById(ItemId[i]).getElementsByTagName("DIV")[0];
		slideDownwards(menuItemImageObj, i);
		if (ItemTop[i] < 0)
		{	toMoveMore = true;
		}
	}
	
	if (toMoveMore == true)
	{	timeId = window.setTimeout("show("+ItemNo+")",showTimeout);
	}
	else
	{	window.clearTimeout(timeId);
		return true;
	}
}

function slideDownwards(ItemImageObj, ItemNo)
{	/****************************************************************************** 
	This Function slides the menu item Downwards. The catch here is that we are using the marginTop 
	property of css to hide the menu items.
	******************************************************************************/
	if (ItemTop[ItemNo] < 0)
	{	ItemTop[ItemNo] = ItemTop[ItemNo] + imgscroll;
		ItemImageObj.style.marginTop = ItemTop[ItemNo]  + "px";
	}		
}
-->