def tuple_sort(tuples, key_idx):
    tuples.sort(key=lambda x: x[key_idx])

    return tuples