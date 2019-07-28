module OffsetProp = {
  type t;

  external string: string => t = "%identity";
  external number: int => t = "%identity";
};

module ScrollableAncestorProp = {
  type t;

  external obj: Js.t('a) => t = "%identity";
};

[@bs.module "react-waypoint"] [@react.component]
external make:
  (
    ~onEnter: unit => unit=?,
    ~onLeave: unit => unit=?,
    ~onPositionChange: unit => unit=?,
    ~horizontal: bool=?,
    ~topOffset: OffsetProp.t=?,
    ~bottomOffset: OffsetProp.t=?,
    ~fireOnRapidScroll: bool=?,
    ~debug: bool=?,
    ~children: React.element=?
  ) =>
  React.element =
  "Waypoint";
