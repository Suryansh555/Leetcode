def maxHeight(wallPositions, wallHeights):
    n = len(wallPositions)
    mud_max = 0
    for i in range(0, n - 1):
        if wallPositions[i] < (wallPositions[i + 1] - 1):
            heightDiff = abs(wallHeights[i + 1] - wallHeights[i])
            gapLen = wallPositions[i + 1] - wallPositions[i] - 1
            localMax = 0
            if gapLen > heightDiff:
                low = max(wallHeights[i + 1], wallHeights[i]) + 1
                remainingGap = gapLen - heightDiff - 1
                localMax = low + remainingGap / 2
            else:
                localMax = min(wallHeights[i + 1], wallHeights[i]) + gapLen

            mud_max = max(mud_max, localMax)

    return int(mud_max)


wall_pos = [1, 2 , 4 ,7]
wall_height = [4,6,8,11]

print(maxHeight(wall_pos, wall_height))