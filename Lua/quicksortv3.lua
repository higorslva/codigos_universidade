tInicial = os.clock() -- Pega o horário atual da maquina

 -- algoritmo de quicksort
function table.length(T)
    local size = 0
    for k,v in pairs(T) do
        size = size + 1
    end
    return size
end

function table.tostring(A)
    local size = table.length(A)
    local string = "{"
    for i,v in ipairs(A) do
        string = string .. (v or "")
        if i < size then
           string = string .. ","
        end
    end
    string = string .. "}"
    return string
end

function quickSort(array, p, r)
    p = p or 1
    r = r or #array
    if p < r then
        q = partition(array, p, r)
        quickSort(array, p, q - 1)
        quickSort(array, q + 1, r)
    end
end

function partition(array, p, r)
    local x = array[r]
    local i = p - 1
    for j = p, r - 1 do
        if array[j] <= x then
            i = i + 1
            local temp = array[i]
            array[i] = array[j]
            array[j] = temp
        end
    end
    local temp = array[i + 1]
    array[i + 1] = array[r]
    array[r] = temp
    return i + 1
end
--fim do algoritmo
array = {} -- criação da array

for i=0, 2000000, 1 do -- posições da array(loop) (100 nesse exemplo)
    local random = math.random(2000000) -- escolhe um número aleatório entre 1 e 100
    array[i] = random -- armazena o numero aleatorio
end

--file = io.open("desordenado.txt", "a")
--file:write(table.tostring(array), "\n") --salva em um arquivo a array desordenada
--file:close()
--print("Desordenado: " .. table.tostring(array).."\n")

quickSort(array) -- ordena a array

--file = io.open("ordenado.txt", "a")
--file:write(table.tostring(array), "\n") -- salva em um arquivo a array ordenada
--file:close()
--print("\nOrdenado: " .. table.tostring(array))

print("\nTempo de execução: " .. os.clock()-tInicial) -- retorna o tempo de execução
