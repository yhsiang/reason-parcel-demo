/* [%bs.raw {|require('./app.css')|}];

[@bs.module] external logo : string = "./logo.svg"; */

let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
  ...component,
  render: (_self) =>
    <div className="App">
        (ReasonReact.stringToElement(message))
    </div>
};