function palindrome(str) {
	var newStr = str.replace(
		/[1234567890&\/\\#@,+_()$~%.[\]';|^`":!\-+=/\s*?<>{}]/g,
		''
	);
	var lowerdStr = newStr.toLowerCase();
	var strArray = [];
	strArray = lowerdStr.split('');
	var empire = strArray.join('');
	var reversedArray = strArray.reverse();
	var kingdom = reversedArray.join("");

  if(empire === kingdom){
    return true;
  }else{
    return false;
  }
}
palindrome('My age is 0, 0 si ega ym.');