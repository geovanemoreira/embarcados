fn main() {
    println!("!({} and {}) = {}\n",1,0,processamento(1,0,4));
}

fn processamento(a:i32,b:i32,op: i32) -> i32{

    match op =>{
        1 => !(!a),
        2 => !(!(a&b)),
        3 => !(!(a|b)),
        4 => !(a&b)+2,
        5 => !(a|b)+2,
        _ => -1
    }
}
