let str = ReasonReact.string;

module App = {
  [@react.component]
  let make = () =>
    <div>
      <Waypoint onEnter={() => Js.log("on enter")}>
        <div> {str("Some content here")} </div>
      </Waypoint>
    </div>;
};

ReactDOMRe.renderToElementWithId(<App />, "root");
