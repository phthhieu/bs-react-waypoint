let str = ReasonReact.string;

module App = {
  [@react.component]
  let make = () =>
    <div>
      <Waypoint
        onEnter={obj =>
          Js.log("on enter " ++ Waypoint.currentPositionGet(obj))
        }>
        <div> {str("Some content here")} </div>
      </Waypoint>
    </div>;
};

ReactDOMRe.renderToElementWithId(<App />, "root");
