use std::fs::File;
use std::io::Write;

fn main() {
    let file_name = "Grace_kid.rs";
    let code = r#"use std::fs::File;
use std::io::Write;

fn main() {
    let file_name = "Grace_kid.rs";
    let code = r$"?"$;
    let mut file = File::create(file_name).unwrap();
    file.write_all(code.replace('\u{24}', "$").replace('\u{3f}', code).as_bytes()).unwrap();
}"#;
    let mut file = File::create(file_name).unwrap();
    file.write_all(code.replace('\u{24}', "#").replace('\u{3f}', code).as_bytes()).unwrap();
}