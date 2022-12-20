class Solution:
    def canVisitAllRooms(self, rooms: List[List[int]]) -> bool:
        opened = set()
        to_do = [0]
        while to_do:
            room = to_do.pop()
            if room in opened:
                continue
            opened.add(room)
            to_do.extend(rooms[room])
        return len(opened) == len(rooms)
