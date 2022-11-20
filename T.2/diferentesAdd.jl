function add(a, b::String)
     return add(b, a)
end
function add(a::String, b)
     "$a: $b"
end
function add(a::String, b::String):
     "$a and $b"
end
function add(a, b)
     a + b
end