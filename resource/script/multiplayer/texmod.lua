math.randomseed(os.clock())
local x = 0
local xlast = 0
while true do
    while x == xlast do        
        x = math.random(1, 4)  
    end
    xlast = x                  
    log (x)
    wait (400)
end



math.randomseed(os.clock())
local a = math.random(4)   -- вернёт число от 1 до 4 (включительно)
log tex_mod "rus(a)"