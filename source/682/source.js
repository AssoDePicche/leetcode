// 682. Baseball Game

const calPoints = (buffer) => {
  let scores = [];

  buffer.forEach((item, index) => {
    if (Number(item)) {
      scores.push(Number(item));
    } else if ("C" === item) {
      scores.pop();
    } else if ("D" === item) {
      scores.push(2 * scores[scores.length - 1]);
    } else if ("+" == item) {
      scores.push(scores[scores.length - 2] + scores[scores.length - 1]);
    }
  });

  let sum = 0;

  scores.forEach((score, index) => {
    sum += score;
  });

  return sum;
};
