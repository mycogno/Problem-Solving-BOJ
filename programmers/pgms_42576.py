def solution(participant, completion):
    answer = ''
    p_dict = {}
    for p in participant:
        if p not in p_dict:
            p_dict[p] = 0
        p_dict[p] += 1
    for p in completion:
        p_dict[p] -= 1
    for key, value in p_dict.items():
        if value != 0:
            answer = key
            break
    return answer
