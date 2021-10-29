const isInvalid = (transaction, map) => {
  const [name, time, amount, city] = transaction.split(',')

  if (amount > 1000) return true

  const prevTrans = map[name]

  for (const trans of prevTrans) {
    if (city !== trans.city && Math.abs(time - trans.time) <= 60) return true
  }

    return false
}

const invalidTransactions = transactions => {
  const invalid = []
  const map = {}
      
  for (const trans of transactions) {
    const [name, time, amount, city] = trans.split(',')
    
    if (name in map) map[name].push({ time, city })
    else map[name] = [{ time, city }]
  }
    
  for (const trans of transactions) {    
    if (isInvalid(trans, map)) invalid.push(trans)
  }
  
  return invalid
};