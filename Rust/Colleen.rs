fn foo() { return; }

// Comment out of main function
fn main() {
	let code = r#"fn foo() { return; }

// Comment out of main function
fn main() {
	let code = r$"?"$;
	// Comment in the main function
	println!("{}", code.replace('\u{24}', "$").replace('\u{3f}', code));
	foo();
	return;
}"#;
	// Comment in the main function
	println!("{}", code.replace('\u{24}', "#").replace('\u{3f}', code));
	foo();
	return;
}
