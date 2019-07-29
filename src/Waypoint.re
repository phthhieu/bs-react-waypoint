module OffsetProp = {
  type t;

  external string: string => t = "%identity";
  external number: int => t = "%identity";
};

module ScrollableAncestorProp = {
  type t;

  external obj: Js.t('a) => t = "%identity";
};

[@bs.deriving abstract]
type callbackResponse = {
  currentPosition: string,
  previousPosition: string,
  [@bs.optional]
  event: ReactEvent.Synthetic.t,
  waypointTop: int,
  viewportTop: int,
  viewportBottom: int,
};

[@bs.module "react-waypoint"] [@react.component]
external make:
  (
    ~onEnter: callbackResponse => unit=?,
    ~onLeave: callbackResponse => unit=?,
    ~onPositionChange: callbackResponse => unit=?,
    ~horizontal: bool=?,
    ~topOffset: OffsetProp.t=?,
    ~bottomOffset: OffsetProp.t=?,
    ~scrollableAncestor: ScrollableAncestorProp.t=?,
    ~fireOnRapidScroll: bool=?,
    ~debug: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Waypoint";
