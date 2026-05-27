use std::fs::File;
use std::io::Write;

// Comment
macro_rules! FILE_NAME {() => {"Grace_kid.rs"}}
macro_rules! CODE {() => {r#"use std::fs::File;
use std::io::Write;

// Comment
macro_rules! FILE_NAME {() => {"Grace_kid.rs"}}
macro_rules! CODE {() => {r$"?"$}}
macro_rules! MAIN {() => {
    fn main() {
		let file_name = FILE_NAME!();
		let code = CODE!();
		let mut file = File::create(file_name).unwrap();
		file.write_all(code.replace('\u{24}', "$").replace('\u{3f}', code).as_bytes()).unwrap();
    } 
}}

MAIN!();
"#}}
macro_rules! MAIN {() => {
    fn main() {
		let file_name = FILE_NAME!();
		let code = CODE!();
		let mut file = File::create(file_name).unwrap();
		file.write_all(code.replace('\u{24}', "#").replace('\u{3f}', code).as_bytes()).unwrap();
    } 
}}

MAIN!();
