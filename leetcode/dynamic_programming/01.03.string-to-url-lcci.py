class Solution:
    def replaceSpaces(self, S: str, length: int) -> str:
        S.replace(" ", "%%20")
        return S