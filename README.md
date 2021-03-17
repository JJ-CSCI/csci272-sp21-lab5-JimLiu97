# Lab 5

## Task: Numbers

## Task: Quaternion

Various number systems can be related to each other hierarchically, e.g. complex number composed of to real numbers, and quaternion can be described through the pair of complex number.

- Write a class hierarchy for some numerical representations, so the following properties are observed:
  1. Each class has **one** explicitly defined encapsulated data member and **one** corresponding accessor function.
  2. Each class has an overwritten addition operation, `+`.

### Details

- Define a class `Real` that will store 1 real value that has following properties:
  - A constructor with one argument that initializes object with a real value.
  - An accessor function `GetReal` that returns a real value stored in an object of `Real` class.
  - An overwritten addition operation that adds a real value to the stored value in an object of `Real` class, and returns the results as an object of `Real` class.
- Define a class `Complex` that will store 2 real coefficients of a complex number that has following properties:
  - Derived from the `Real` class.
  - A constructor with two arguments that initializes object with a real values.
  - An accessor function `GetImaginary` that returns an imaginary value stored in an object of `Complex` class.
  - An overwritten addition operation that adds a real value to the stored values in an object of `Complex` class, and returns the results as an object of `Complex` class.
- Define a class `Surreal` that will store 3 real coefficients of a "surreal" number that has following properties:
  - Derived from the `Complex` class.
  - A constructor with tree arguments that initializes object with a real values.
  - An accessor function `GetSurreal` that returns an third/"surreal" value stored in an object of `Surreal` class.
  - An overwritten addition operation that adds a real value to the stored values in an object of `Surreal` class, and returns the results as an object of `Surreal` class.

### UML Class Diagram

<style>
.arrow-head {
    width: 0;
    height: 0;
    border-style:solid;
    border-width: 0 13px 23px;
    border-color: transparent transparent black;
    position: relative;
}
.arrow-head:after {
    content: '';
    border-style: solid;
    border-width: 0px 9px 18px;
    border-color: transparent transparent white;
    position: absolute;
    top: 3px;
    left: -9px;
}
.circle-head {
    width: 20px;
    height: 20px;
    border-style:solid;
    border-radius: 50%;
    display: inline-block;
    position: relative;
}
</style>
<p style="width: 50%; margin-left: auto; display: block; margin-right: auto;">
<table cellpadding="3" border="1" style="width:fit-content; margin-bottom: 0px">
    <tbody><tr><th>Real</th></tr>
    <tr>
        <td>
            <tt>-</tt> re: Double <br>
        </td>
    </tr>
    <tr>
        <td>
            <u><tt>+</tt> Real( in a:Double )</u><br>
            <tt>+</tt> operator+( in v:Double ):Real<br>
        </td>
    </tr>
</tbody></table>

<div style="margin: 0px 0px 40px 60px; width: 15px">
    <div class="arrow-head"></div>
    <div style="width: 3px; height: 40px; background: black; float: right; "></div>
</div>
<table cellpadding="3" border="1" style="width:fit-content; margin-bottom: 0px">
    <tbody><tr><th>Complex</th></tr>
    <tr>
        <td>
            <tt>-</tt> im: Double <br>
        </td>
    </tr>
    <tr>
        <td>
            <u><tt>+</tt> Complex( in v:Double, in b:Double )</u><br>
            <tt>+</tt> operator+( in v:Double ):Complex<br>
        </td>
    </tr>
</tbody></table>

<div style="margin: 0px 0px 40px 60px; width: 15px">
    <div class="arrow-head"></div>
    <div style="width: 3px; height: 40px; background: black; float: right; "></div>
</div>
<table cellpadding="3" border="1" style="width:fit-content; margin-bottom: 0px">
    <tbody><tr><th>Surreal</th></tr>
    <tr>
        <td>
            <tt>-</tt> sur: Double <br>
        </td>
    </tr>
    <tr>
        <td>
            <u><tt>+</tt> Surreal( in a:Double, in b:Double, in c:Double )</u><br>
            <tt>+</tt> operator+( in v:Double ):Surreal<br>
        </td>
    </tr>
</tbody></table>

</p>

## Test

Press **Run** button to execute and test your program.

- Or run `make test` command in the command line to verify the correctness of your program.

## Submission

- Commit & push all changes that to the corresponding assignment repository on GitHub, using the **Repl.it** interface - **Version control** tab.
  - Make sure that you committed changes to following files:
    - `main.cpp`
- Submit the link of the assignment GitHub repository in the corresponding assignment submission the Blackboard.
  - Open corresponding assignment on the Blackboard
  - In **Assignment Submission** section, press **Write Submission** button
  - Paste your assignment repository link in the **Text Submission** box
  - Submit the assignment

### Before You Submit

You are required to test that your submission works properly before submission. Make sure that your program compiles without errors. Once you have verified that the submission is correct, you can submit your work.

### Coding Style

In any programming project, matching the existing coding style is important. Having different coding styles intermixed leads to confusion and bugs. Students are required to follow the particular existing coding style that maintains the indentation style in `.cpp` and `.h` files using spaces, not tabs.

In particular, pay close attention to function declarations and how the function name begins the line after the function return type. For helper functions which are limited in scope to a specific file, you must declare the function as `static` in the same file in which it is used.

*Indentation*: The indentation style for your work have to be 4 spaces. Many students are taught to use tabs for indentation, which can make code very hard to read, especially when there are several levels of indentation.

For additional information of C++ coding style see [Google C++ Style Guide](https://google.github.io/styleguide/cppguide.html).

