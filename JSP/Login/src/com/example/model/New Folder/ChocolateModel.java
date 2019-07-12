package com.example.model;

import java.util.*;

public class ChocolateModel
{	
	public List getChocolateList(String selectedChocolate)
	{	
		List ChocolateList = new ArrayList();
		if (selectedChocolate.equals("Milk"))
		{	ChocolateList.add("Milk Chocolate 1");
			ChocolateList.add("Milk Chocolate 2");
			ChocolateList.add("Milk Chocolate 3");
		}
		else if(selectedChocolate.equals("Dark"))
		{	ChocolateList.add("Dark Chocolate 1");
			ChocolateList.add("Dark Chocolate 2");
		}
		else if(selectedChocolate.equals("White"))
		{	ChocolateList.add("White Chocolate 1");
			ChocolateList.add("White Chocolate 2");
			ChocolateList.add("White Chocolate 3");
			ChocolateList.add("White Chocolate 4");
		}

		return ChocolateList;		
	}
}
