def input_vars(var_cnt=None):
    str_vars = input().split(" ")
    ret = []

    if var_cnt is not None:
        assert var_cnt == len(str_vars)

    for s_var in str_vars:
        ret.append(int(s_var))

    return ret


def list_input():
    return list(map(int, input().split(" ")))
