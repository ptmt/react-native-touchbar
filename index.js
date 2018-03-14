//import { createReactNativeComponentClass } from 'react-native-macos';
const createReactNativeComponentClass = require('react-native/Libraries/Renderer/src/renderers/native/createReactNativeComponentClass');

const NativeRNTouchbar = createReactNativeComponentClass({
  validAttributes: {},
  uiViewClassName: 'RNTouchbar'
});

export default NativeRNTouchbar;
