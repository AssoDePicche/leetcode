// 1356. Sort Integers by The Number of 1 Bits

const sortByBits = (array) => {
  const countOnes = (number) => {
    const buffer = Number(number).toString(2)

    let count = 0

    for (let index = 0; index < buffer.length; ++index) {
      if (buffer[index] === '1') {
        ++count
      }
    }

    return count
  }

  const swap = (array, i, j) => {
    [array[i], array[j]] = [array[j], array[i]]
  }

  for (let i = 0; i < array.length - 1; ++i) {
    for (let j = 0; j < array.length - i - 1; ++j) {
      const a = countOnes(array[j])

      const b = countOnes(array[j + 1])

      if (a > b || (a === b && array[j] > array[j + 1])) {
        swap(array, j + 1, j)
      }
    }
  }

  return array
}
