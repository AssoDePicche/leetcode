var sortByBits = function(arr){
  var countOnes = (n) => {
    let str = Number(n).toString(2);

    let count = 0;

    for (let i = 0; i < str.length; ++i) {
      if (str[i] == '1') {
        ++count;
      }
    }

    return count;
  };

  for (let i = 0; i < arr.length - 1; ++i) {
    for (let j = 0; j < arr.length - i - 1; ++j) {
      let a = countOnes(arr[j]);

      let b = countOnes(arr[j + 1]);

      if (a > b) {
        let temp = arr[j + 1];
        arr[j + 1] = arr[j];
        arr[j] = temp;
      } else if (a == b && arr[j] > arr[j + 1]) {
        let temp = arr[j + 1];
        arr[j + 1]= arr[j];
        arr[j] = temp;
      }
    }
  }

  return arr;
};
