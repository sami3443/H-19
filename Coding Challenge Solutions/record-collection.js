var collection = {
  "2548": {
    "album": "Slippery When Wet",
    "artist": "Bon Jovi",
    "tracks": ["Let It Rock", "You Give Love a Bad Name"]
  },
  "2468": {
    "album": "1999",
    "artist": "Prince",
    "tracks": ["1999", "Little Red Corvette"]
  },
  "1245": {
    "artist": "Robert Palmer",
    "tracks": []
  },
  "5439": {
    "album": "ABBA Gold"
  }
};
var collectionCopy = JSON.parse(JSON.stringify(collection));
function updateRecords(id, prop, value) {

  return collection;
}
updateRecords(5439, "artist", "ABBA");