use std::fs::File;
use std::io::Write;
use std::process::Command;

fn main() {
    let i = 5;
    let next = i - 1;
    let filename = format!("Sully_{}.rs", next);
    let code = r#"use std::fs::File;
use std::io::Write;
use std::process::Command;

fn main() {
    let i = %I%;
    let next = i - 1;
    let filename = format!("Sully_{}.rs", next);
    let code = r$"?"$;

    if i > 0 {
        let mut file = File::create(filename).unwrap();
        file.write_all(code.replace('\u{24}', "$").replacen("%I%", &(next).to_string(), 1).replace('\u{3f}', code).as_bytes()).unwrap();
        let command = format!("rustc Sully_{}.rs -o Sully_{} && ./Sully_{}", next, next, next);
        Command::new("sh")
            .arg("-c")
            .arg(command)
            .status()
            .expect("failed to execute process");
    }
}
"#;

    if i > 0 {
        let mut file = File::create(filename).unwrap();
        file.write_all(code.replace('\u{24}', "#").replacen("%I%", &(next).to_string(), 1).replace('\u{3f}', code).as_bytes()).unwrap();
        let command = format!("rustc Sully_{}.rs -o Sully_{} && ./Sully_{}", next, next, next);
        Command::new("sh")
            .arg("-c")
            .arg(command)
            .status()
            .expect("failed to execute process");
    }
}
