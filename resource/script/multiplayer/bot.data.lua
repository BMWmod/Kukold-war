MaxSquadSize = 20
OrderRotationPeriod = 120000 -- 2 min; 1000 tic == 1 sec
FlagPriority = {Captured = 1, Enemy = 3, Neutral = 2}
SpecialPoints = 0

-- Work it harder, make it better!

UnitClass = {
	Infantry = "Infantry",
	Vehicle = "Vehicle",
	Tank = "Tank",
	ATTank = "ATTank",
	ATInfantry = "ATInfantry",
	HeavyTank = "HeavyTank",
	Hero = "Hero"
}


function readAllUnits(sq,units,army)
	local mod_folder_name = "kukold war"				-- Mod folder name here.

	local path = "mods\\"..mod_folder_name.."\\resource\\set\\multiplayer\\units\\"	-- Path to units folder. Example: "mods\\"..mod_folder_name.."\\resource\\set\\multiplayer\\units\\"
														-- SET FOLDER MUST NOT BE ARCHIVED! EXTRACT IT TO RESOURCE FOLDER! Maybe this requirment will be removed soon.
	local army = BotApi.Instance.army
	--print(" parsing units for " .. army)

	local sq = path .. "nz_units.set"	
	readUnitsRaw(sq,units,army)
	local sq = path .. "soldiers.set"	
	readUnitsRaw(sq,units,army)
	
	local sq = path .. "vehicles.set"
	readUnitsRaw(sq,units,army)
	local sq = path .. "vehicles_bot.set"
	readUnitsRaw(sq,units,army)
	local sq = path .. "vehicles_nz.set"
	readUnitsRaw(sq,units,army)

	--print("Number of units read: ", units.count)
end