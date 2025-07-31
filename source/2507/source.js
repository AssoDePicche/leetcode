// 2507. Smallest Value After Replacing With Sum of Prime Factors

const isPrimeCache = new Map();

const isPrime = (n) => {
  if (!isPrimeCache.has(n)) {
    isPrimeCache.set(n, true);

    for (let i = 2; i < n; ++i) {
      if (n % i == 0) {
        isPrimeCache.set(n, false);

        break;
      }
    }
  }

  return isPrimeCache.get(n);
};

const primeFactorsCache = new Map();

const primeFactorsOf = (n) => {
  if (!primeFactorsCache.has(n)) {
    let primeFactors = [];

    for (let i = 2; i <= n; ++i) {
      if (!isPrime(i) || n % i != 0) {
        continue;
      }

      while (n % i == 0) {
        n /= i;

        primeFactors.push(i);
      }
    }

    primeFactorsCache.set(n, primeFactors);
  }

  return primeFactorsCache.get(n);
};

const smallestValue = (n) => {
  if (n == 4) {
    return 4;
  }

  while (!isPrime(n)) {
    const primeFactors = primeFactorsOf(n);

    console.log(primeFactors);

    let sum = 0;

    for (let index = 0; index < primeFactors.length; ++index) {
      sum += primeFactors[index];
    }

    n = sum;
  }

  return n;
};
