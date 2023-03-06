function threeNumberSum(array, targetSum) {
  // array.sort((a, b) => a - b)
  const sums = new Set();
  for (let i = 0; i < array.length; i++) {
    const possibleSums = {};

    for (let j = 0; j < array.length; j++) {
      if (i === j) continue;

      const x = array[i];
      const y = array[j];

      if (Array.isArray(possibleSums[y])) {
        sums.add([...possibleSums[y], y].sort((a, b) => a - b).toString());
      } else {
        console.log( possibleSums[targetSum - x - y] = [x, y])
        possibleSums[targetSum - x - y] = [x, y];
      }
    }
  }

  return [...sums]
    .map((str) => str.split(",").map((str) => +str))
    .sort((a, b) => {
      for (let i = 0; i < a.length; i++) {
        if (a[i] < b[i]) return -1;
        if (a[i] > b[i]) return 1;
      }

      return 0;
    });
}
arry = [12, 3, 1, 2, -6, 5, -8, 6];
tarSum = 0;
threeNumberSum(arry, tarSum);
